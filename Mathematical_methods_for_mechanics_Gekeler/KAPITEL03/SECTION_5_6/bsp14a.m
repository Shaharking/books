function Y = bsp14a(X,flag,Parmeter);
% Himmelblau, p. 406
% flag = 1: Objective function
% flag = 2: Inequalities
% flag = 3: Equalities
% flag = 4: Gradient of objective function
% flag = 5: Gradient of inequalities
% flag = 6: Gradient of equalities
% -------------------------------------------
% Gradient of f: R_n -> R_m is (m,n)-matrix
% -------------------------------------------
hh = 1E-5; % increment for calculation of derivative
switch flag
case 1
   Y = 5.3578547*X(3)^2+0.8356891*X(1)*X(5)+37.293239*X(1)-40792.141;
case 2
   g = [85.334407+0.0056858*X(2)*X(5)+0.0006262*X(1)*X(4)-0.0022053*X(3)*X(5); ...
        80.51249+0.0071317*X(2)*X(5)+0.0029955*X(1)*X(2)+0.0021813*X(3)^2; ...
        9.300961+0.0047026*X(3)*X(5)+0.0012547*X(1)*X(3)+0.0019085*X(3)*X(4)];
   Y = [g-[0; 90; 20]; -g+[92; 110; 25]; ...
        X(1)-78;  X(2)-33; X(3)-27; X(4)-27; X(5)-27;...
        102-X(1); 45-X(2); 45-X(3); 45-X(4); 45-X(5) ];
case 3, Y = 0;
case 4, Y = derivative(@bsp14,X,1,hh,Parmeter);
case 5, Y = derivative(@bsp14,X,2,hh,Parmeter);
case 6, Y = 0;
end
