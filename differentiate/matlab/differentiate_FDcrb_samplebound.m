function [Hqqdd_sample,Hqqdd_sample_extra] = differentiate_FDcrb_samplebound(qrange,qdrange,model)
% specially designed for Cassie

if ~isa(qrange, 'intval') || ~isa(qdrange, 'intval')
    error('Input has to be intval!')
end

n = 1;
d = model.NB - 1;
N = 2*n+1;

wk = linspace(0,2*pi,N+1);
wk = wk(1:(end-1));
wks_sample = zeros(11,1);
Hqqdd_sample_upper = -1000000*ones(model.NB,model.NB);
Hqqdd_sample_lower = 1000000*ones(model.NB,model.NB);

ws = 0.002:0.002:(2*pi-0.002);
vals = zeros(1,length(ws));
for i = 1:length(ws)
    w = ws(i);
    vals(i) = sum(abs(sin(N*w/2).*sin((N-2*n)/2*(w-wk))./(sin((w-wk)/2)).^2));
end

C = (max(vals) / N / (N - 2*n)) ^ d;

for i = 1:N^10
    digits = i;
    for j = 2:11
        wks_sample(j) = (qrange(j).sup - qrange(j).inf) / 2 / pi * wk(mod(digits,N)+1) + qrange(j).inf;
        digits = floor(digits/N);
    end
    
    [~,~,dHdq,~] = differentiate_FDcrb(model, addAnkleSpring(wks_sample), zeros(13,1));
    
    Hqqdd = squeeze(dHdq(1,:,:));
    
    Hqqdd_sample_upper = max(Hqqdd_sample_upper, Hqqdd);
    Hqqdd_sample_lower = min(Hqqdd_sample_lower, Hqqdd);
end

Hqqdd_sample_mid = 0.5 * (Hqqdd_sample_upper + Hqqdd_sample_lower);
Hqqdd_sample_rad = 0.5 * C * (Hqqdd_sample_upper - Hqqdd_sample_lower);

Hqqdd_sample = midrad(Hqqdd_sample_mid, Hqqdd_sample_rad);

Hqqdd_sample_extra = infsup(Hqqdd_sample_lower,Hqqdd_sample_upper);

