clc;

qv = 2*pi*rand(N,1);
qdv = 2*pi*rand(N,1);

%% substitute
dHdqv = double(subs(dHdq, [q], [qv]));
dCdxv = double(subs(dCdx, [q;qd], [qv;qdv]));
ddHddqv = double(subs(ddHddq, [q], [qv]));
ddCddxv = double(subs(ddCddx, [q;qd], [qv;qdv]));

%% verify jacobian
for i = 1:N
    for j = 1:i
        for k = 1:N
            s = diff(H(i,j),q(k));
            disp([i,j,k])
            disp(double(subs(s, [q], [qv])) - dHdqv(i,j,k))
        end
    end
end

for i = 1:N
    for k = 1:N
        disp([i,k])
        s = diff(C(i),q(k));
        disp(double(subs(s, [q;qd], [qv;qdv])) - dCdxv(i,k))
        s = diff(C(i),qd(k));
        disp(double(subs(s, [q;qd], [qv;qdv])) - dCdxv(i,k + N))
    end
end

%% verify hessian
% for i = 1:N
%     for j = 1:i
%         for k1 = 1:N
%             for k2 = 1:k1
%                 s = diff(diff(H(i,j),q(k1)), q(k2));
%                 disp([i,j,k1,k2])
%                 disp(double(subs(s, [q], [qv])) - ddHddqv(i,j,k1,k2))
%             end
%         end
%     end
% end

for i = 1:N
    for k1 = 1:N
        for k2 = 1:k1
            disp([j,k1,k2])
            s = diff(diff(C(i),q(k1)), q(k2));
            disp(double(subs(s, [q;qd], [qv;qdv])) - ddCddxv(i,k1,k2))
            s = diff(diff(C(i),q(k1)), qd(k2));
            disp(double(subs(s, [q;qd], [qv;qdv])) - ddCddxv(i,k1,k2 + N))
            s = diff(diff(C(i),qd(k1)), q(k2));
            disp(double(subs(s, [q;qd], [qv;qdv])) - ddCddxv(i,k1 + N,k2))
            s = diff(diff(C(i),qd(k1)), qd(k2));
            disp(double(subs(s, [q;qd], [qv;qdv])) - ddCddxv(i,k1 + N,k2 + N))
        end
    end
end