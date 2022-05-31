% 2021.12.07
% Lagrangeov interpolačný polynóm
% Jakub Daxner

% Body x a odpovedajúca funkcia y = f(x)
x = [-2 -1 0 2];
y = [-2 1 2 1];

% Podmienka unykátnych bodov v X;
if length(x(1, :)) != length(unique(x(1, :)))
  disp("Je nutné mať unykátne uzly");
  return;
endif

% Interval 
interval = -2 : 0.1 : 5;

% Cubic spline
Y = spline(x, y, interval);

% Linear Interpolation
K = interp1(x, y, interval);

% Graf
plot(x, y, 'o', interval, Y, '-r', interval, K, '-b')
legend("Body", "Cubic", "Linear")