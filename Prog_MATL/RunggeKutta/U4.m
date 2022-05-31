% Nonstiff Equation
% https://mathworld.wolfram.com/vanderPolEquation.html

y = -5:5;

% Van der Pol rovnica
function dydt = vdp1(t,y)
    dydt = [y(2); (1-y(1)^2)*y(2)-y(1)];
end

% ode45(volanie funkcie, interval, počiatočné hodnoty Y0)
[t,y] = ode45(@vdp1,[0 20],[0; 2]);

% GRAF
plot(t, y(:,1), '-o', t,y(:, 2), '-o')

%plot(t, y)
title('Solution of van der Pol Equation (\mu = 1) with ODE45');
xlabel('Time t');
ylabel('Solution y');

legend('y_1','y_2')