% 2021.12.07
% Metóda najmenších štvorcov
% Jakub Daxner

# x = [-4 0 1 3];
# x = [0.2 0.5 0.9 1.6 2.0 2.9 3.5]
# y = [3 1 0 -7];

x = [0.2 0.5 0.9 1.6 2.0 2.9 3.5]
y = [16.58 19.33 18.12 20.94 20.90 24.66 24.5];

n = length(x)

% Inicializoanie premenných
X = 0;
Xpow2 = 0;
XY = 0;
Y = 0;
finalY = 0;
finalX = 0;

% Sum of 
for i = 1 : n;
    X = X + x(i);
    Xpow2 = Xpow2 + x(i)*x(i);
    % Xpow2 = Xpow2 + x(i)^2;
    Y = Y + y(i);
    XY = XY + x(i)*y(i);
endfor


% Riešením sústavy sú hodnoty :
% finalX = (n*XY - X*Y) / (n*Xpow2 - X.^2);
% finalY = (Y - Y*X) / (n*Xpow2 - X*X);

% Riešením sústavy sú hodnoty :
finalX = (n*XY - X*Y) / (n*Xpow2 - X*X);
finalY = (Y * Xpow2 - X*XY) / (n*Xpow2 - X*X);

disp("Equation = ")
finalX
finalY

% xInt = 0.2 : 0.1 : 3.5;

f = @(x) finalX*(x) + finalY;
yInt = f(x);

plot(x, y, "go")
hold on
plot(x, yInt, "r--")
title("Výsledný grag")