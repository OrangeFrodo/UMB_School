% 2021.12.07
% Metóda najmenších štvorcov
% Jakub Daxner

x = [-3 -1 1 3];
y = [2 5 3 4];

n = length(x);

X = 0;
Xpow2 = 0;
XY = 0;
Y = 0;


for i = 1 : n;
    X = X + x(i);
    Xpow2 = Xpow2 + x(i)*x(i);
    Y = Y + y(i);
    XY = XY + x(i)*y(i);
endfor

finalY = 0;
finalX = 0;

finalX = (n*XY - X * Y) / (n* Xpow2 - X * X);
finalY = (Y - finalY*X) / n;


disp("Equation = ")
finalX
finalY

xInt = -3.5 : 0.1 : 3.5;
f = @(x) finalX*(x) + finalY;
yInt = f(xInt);

plot(xInt, yInt, "r--")