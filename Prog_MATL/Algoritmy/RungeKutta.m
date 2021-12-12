% 2021.11.30
% Runge-Kutta
% Jakub Daxner


% Interval
a = -1;
b = 4;

% Funkcia a hodnota funkcie "pravej strany"
f=@(x,y)(sin(x)+cos(3*y))
c = 1;

% Krok h + n
h = 1;
n = (b-a) / h;

%Interval (hodnoty) Xi
x = a:h:b

% Potrebujeme hodnoty Yi
% y0    = 1 ! Z pravej strany "c"
% i - n = Nutné vypočítať pre každé i
%           k1, k2, k3, k4 a potom hodnoty yi
% Potom vypočítame y1

y(1) = c;
for i = 1:n;
    k1 = h*f(x(i), y(i));
    k2 = h*f(x(i) + h/2, y(i) + k1/2);
    k3 = h*f(x(i) + h/2, y(i) + k2/2);
    k4 = h*f(x(i+1), y(i) + k3);
    y(i+1) = y(i) + 1/6*(k1 + 2*k2 + 2*k3 + k4)
endfor 

% Tabulka 
[x;y]

% Graf
subplot(2, 1, 1)
plot(x, y, '.-', y, 'pr')


% Príklad 19 str. 97

x1 = x;
y1 = y;
clear x y n h

% h = 0.5
h=0.5, n=(b-a)/h;
x = a:h:b;

% y0 a y1
y(1) = c;
for i = 1:n;
    k1 = h*f(x(i), y(i));
    k2 = h*f(x(i) + h/2, y(i) + k1/2);
    k3 = h*f(x(i) + h/2, y(i) + k2/2);
    k4 = h*f(x(i+1), y(i) + k3);
    y(i+1) = y(i) + 1/6*(k1 + 2*k2 + 2*k3 + k4)
endfor 

[x;y]

x05 = x; 
y05 = y;
clear x y n h

% h = 0.1
h=0.1, n=(b-a)/h;
x = a:h:b;

% y0 a y1
y(1) = c;
for i = 1:n;
    k1 = h*f(x(i), y(i));
    k2 = h*f(x(i) + h/2, y(i) + k1/2);
    k3 = h*f(x(i) + h/2, y(i) + k2/2);
    k4 = h*f(x(i+1), y(i) + k3);
    y(i+1) = y(i) + 1/6*(k1 + 2*k2 + 2*k3 + k4)
endfor 

[x;y]

x01 = x;
y01 = y;

% GRAF

f = [0, 6]; % Pre krásu grafu

subplot(2, 1, 2)
plot(f, 0, x1, y1 ,'b.-', x05, y05, 'g.-', x01, y01, 'r.-')
legend('h=1', 'h=0.5', 'h=0.1')


% Príkaz ode45

a = -1;
b = 4;
c = 1;

f=@(x,y)(sin(x)+cos(3*y));
ode45(f,[a,b],c)

[x,y]= ode45(f,[a,b],c)