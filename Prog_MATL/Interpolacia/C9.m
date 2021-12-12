% Interpolačný polynom
% Newtonov tvar
% Str. 76 pr.11

% ! POTREBNE JE MAT NACITANE DATA Z C8!

x = [x; 1,];
y = [y; 1.5,];

format rat;

n = length(x)

% 0. Diferencia
df0 = y;

% 1. Diferencia
for i = 1 :n-1, df1(i) = (df0(i+1)-df0(i)) / (x(i+1)-x(i)), end

% 2. Diferencia
for i = 1 :n-2, df2(i) = (df1(i+1)-df1(i)) / (x(i+2)-x(i)), end

% 3. Diferencia
for i = 1 :n-3, df3(i) = (df2(i+1)-df2(i)) / (x(i+3)-x(i)), end

% Rožšírenie interpolačného polynómu o ďalší člen
% následne sa spočítajú jeho hodnoty v bodoch xg
xg = min(x) :0.01 :max(x);
yg = df0(1) + df1(1) * (xg-x(1)) + df2(1) * (xg - x(1)).* (xg-x(2)) + df3(1) * (xg-x(1)).* (xg -x(2)).* (xg-x(3))

plot(x, y, 'go')
hold on
plot(xg, yg)
legend('uzly', 'interpolacni polynom')
