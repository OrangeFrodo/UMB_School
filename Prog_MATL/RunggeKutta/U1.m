% EDO45

% ode45 is a versatile ODE solver and is the first solver you should try for most problems. 
% However, if the problem is stiff or requires high accuracy, 
% then there are other ODE solvers that might be better suited to the problem. 

% See Choose an ODE Solver for more information.
% https://ch.mathworks.com/help/matlab/math/choose-an-ode-solver.html

% Vector
tspan = [0 5];
X = [1 2]
y0 = 0;

% Fucion
[t,y] = ode45(@(t,y) 2*t, X, y0);
