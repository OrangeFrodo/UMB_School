% openExample('matlab/SolveODEWithMultipleInitialConditionsExample')

% Function
yprime = @(t,y) -2*y + 2*cos(t).*sin(2*t);

% Y0
y0 = -5:5;

% Interval (tspan), ode45 function
tspan = [0 3];

% ode45 funkcia v OCTAVE
% ode45(odefun,tspan,y0)
[t,y] = ode45(yprime, tspan, y0);

subplot(2, 1, 1)
plot(t,y)
grid on
xlabel('t')
ylabel('y')
title('Solutions of y'' = -2y + 2 cos(t) sin(2t), y(0) = -5,-4,...,4,5','interpreter','latex')

clear

% Vlastná funkcia
xprime = @(t,y) -1*y + 2*sin(t).*cos(4*t);
y0 = -5:5; % interval

tspan = [0 3];

[t,y] = ode45(xprime, tspan, y0);

subplot(2, 1, 2)
plot(t,y)
grid on
xlabel('t')
ylabel('y')
title('Solutions of y'' = -2y + 2 sin(t) cos(4t), y(0) = -5,-4,...,4,5','interpreter','latex')
