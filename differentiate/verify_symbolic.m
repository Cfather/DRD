clc;

% verify jacobian
for i = 1:N
    for j = 1:i
        for k = 1:N
            disp(double(simplify(diff(H(i,j),q(k)) - dHdq(i,j,k))))
        end
    end
end

for i = 1:N
    for k = 1:N
        disp(double(simplify(diff(C(i),q(k)) - dCdx(i,k))))
        disp(double(simplify(diff(C(i),qd(k)) - dCdx(i,k + N))))
    end
end

% verify hessian
for i = 1:N
    for j = 1:N
        for k1 = 1:N
            for k2 = 1:N
                disp(double(simplify(diff(diff(H(i,j),q(k2)),q(k1)) - ddHddq(i,j,k1,k2))))
            end
        end
    end
end

for i = 1:N
    for k1 = 1:N
        for k2 = 1:N
            disp(double(simplify( diff( diff(C(i), q(k2)), q(k1) ) - ddCddx(i,k1,k2) ))')
            disp(double(simplify( diff( diff(C(i), q(k2)), qd(k1) ) - ddCddx(i,k1 + N,k2) ))')
            disp(double(simplify( diff( diff(C(i), qd(k2)), q(k1) ) - ddCddx(i,k1,k2 + N) ))')
            disp(double(simplify( diff( diff(C(i), qd(k2)), qd(k1) ) - ddCddx(i,k1 + N,k2 + N) ))')
        end
    end
end
     
% for i = 1:N
%     for k = 1:N
%         disp(double(simplify(diff(fvp{i},q(k)) - dfvpdx{i}(:,k))))
%         disp(double(simplify(diff(fvp{i},qd(k)) - dfvpdx{i}(:,k+N))))
%     end
% end