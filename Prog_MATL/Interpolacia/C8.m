% Interpolačný polynom
% Newtonov tvar
% Str. 74 pr.10

% Vectory
x = [0; 3; 4];
y = [2; 1; 5];

format rat
n = length(x);

% Diference 0. radu
df0 = y

% Diference 1. radu
for i = 1: n-1, df1(i) = (df0(i+1)-df0(i)) / (x(i+1)-x(i)), end

% Diference 2. radu
for i = 1: n-2, df2(i) = (df1(i+1)-df1(i)) / (x(i+2)-x(i)), end

format short
xg = x(1) : 0.01 : x(3);
yg = df0(1) + df1(1)*(xg-x(1)) + df2 (1)*(xg -x(1)).*(xg-x(2))

plot(x, y, 'go')
hold on
plot(xg, yg)
legend('uzly', 'interpolacni polynom')