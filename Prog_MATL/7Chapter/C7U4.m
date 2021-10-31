% POLYNOMS

p = [2 -3 0 5 -4]; %  p(x) = 2x4 −3x3 + 5x −4

y1 = polyval(p, 1)
y2 = polyval(p, -1:1)

% Matica
A = [-1 0; 1 2];
Y1 = polyval(p, A)

% Roots
k = roots([1 0 -1])

p1 = poly([-1 1])

% Derivacia 
pd = polyder(p)