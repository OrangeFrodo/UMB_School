% 2021.11.28
% Lagrangeov interpolačný polynóm
% Jakub Daxner


% Hodnoty
x = [0 1 2 3 4 5]
y = [1 3 4 2 4 6]

% Interval všetkých čísel na osi X a f(x)
xNew = min(x) : 0.005 : max(x);
yNew = interp1(x, y, xNew, 'cubic');

plot(x, y, 'o', xNew, yNew, '.');