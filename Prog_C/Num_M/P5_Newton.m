% 2021.11.24
% Newtonová metóda
% Jakub Daxner

% Podmienky
% 1. f′ je nenulový na intervale (a, b)
% 2. f′′ nemení znamienko na intervale (a, b)
% 3. f (a) · f (b) < 0
% 4. Podiel f a f′ medzi intervalmi nesmie byť mänší ako rozdiel b - a;


% Funkcia f
f = @(x) x-4 * cos(x).^2;
% f = @(x) x-cos(x);


% Intervali ktoré vyhovujú podmienke
a = 3.4;
b = 3.6;
% a = 0.5;
% b = 1;


% Derivácie funkcie f
df  = @(x)1+8 * cos(x).* sin(x);
dff = @(x) -8 * sin(x).^2 + 8 * cos(x).^2;

%df  = @(x) 1 + sin(x);
%dff = @(x) cos(x);

% Vypocitanie intervalu pre derivacie
x = a : 0.01 : b;

% Podmienky 1. a 2.
for i = a : 0.01 : b;
  if(df(i) * df(i-0.01) < 0)
    disp("Nesplnená 1. podniekna")
    return
   endif
   if(dff(i) * dff(i-0.01) < 0)
    disp("Nesplnená 2. podmienka")
    return
   endif
endfor

anZero = f(a) * f(b);

% Podmienky 3. a 4.
if (anZero > 0) 
    disp("Nesplnená podmienka 3.")
    return
elseif ( abs(f(a)/df(a)) > b - a)
    disp("Nesplnená 4. podmienka podla A")
    return
elseif ( abs(f(b)/df(b)) > b - a)
    disp("Nesplnená 4. podmienka podla B")
    return
endif

% Algorithm
format long;
x0 = a; % Intreval a v x0
x = b;  % Interval b v x

error = 10^-8;
i = 0;

while (abs(x0 - x) > error)
  x0 = x;
  x = x0 - f(x0) / df(x0);
  i = i + 1;

  fprintf('Iterácia %d: ', i)
  x

endwhile

fplot(f, [-1, 5], "b--")
hold on
plot(x, 0, "r*")
plot(x, 0, "go")

grid on