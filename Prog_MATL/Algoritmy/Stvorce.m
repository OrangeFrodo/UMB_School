% 2021.12.07
% Metóda najmenších štvorcov
% Jakub Daxner

% https://lms.umb.sk/pluginfile.php/168348/mod_resource/content/1/NumMatMatlab.pdf#section.9.2

% Prípad a // Lineaárna aproximácia

% Hodnoty
%x=[-2.3 -1.3 0.6 1.5 2.8 3.3 4.6 5.9 7.8 9.3];
%y=[-51 -15 8 31 -47 -11 -101 -110 -223 -307];

x = [0 1 2 3 4 5]
y = [1 3 4 2 4 6]

% Definicia funkcií
f1=@(x)sin(x);
f2=@(x)x.^2;

% Pre výpočet potrebujeme maticu Ga sústavy normálnich rovníc
% s vektorom pravej strany da
Ga=[sum(f1(x).^2) sum(f1(x).*f2(x));sum(f2(x).*f1(x)) sum(f2(x).^2)]
da=[sum(f1(x).*y);sum(f2(x).*y)]

%Sústavu rovníc vyriešime metodou v Octave
c=Ga\da


% Prípad b // BEST FIT LINE

%Definicia funkcií
p1=@(x)x.^0;
p2=@(x)x;

% Pre výpočet potrebujeme maticu Ga sústavy normálnich rovníc
% s vektorom pravej strany da
Gb=[sum(p1(x).^2) sum(p1(x).*p2(x));sum(p2(x).*p1(x)) sum(p2(x).^2)]
db=[sum(p1(x).*y);sum(p2(x).*y)]

%Sústavu rovníc vyriešime metodou v Octave
d=Gb\db


% Porovnanie aproximacií
f=@(x)c(1)*f1(x)+c(2)*f2(x);
p=@(x)d(1)*p1(x)+d(2)*p2(x);

% Výpočet pre f a p
sum((f(x)-y).^2)
sum((p(x)-y).^2)

%Graph
x1 = -2.3:0.1:9.3;
plot(x, y, 'go', x1, f(x1), 'b-', x1, p(x1), 'k-')      % "go" = zelené body
legend('zadane data', 'aproximacia f', 'aproximacia p') % Legenda