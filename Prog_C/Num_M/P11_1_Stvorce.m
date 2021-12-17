% 2021.12.07
% Metóda najmenších štvorcov
% Jakub Daxner

% https://lms.umb.sk/pluginfile.php/168348/mod_resource/content/1/NumMatMatlab.pdf#section.9.2

% Prípad a // Lineaárna aproximácia

% Hodnoty
x=[-2.3 -1.3 0.6 1.5 2.8 3.3 4.6 5.9 7.8 9.3];
y=[-51 -15 8 31 -47 -11 -101 -110 -223 -307];

%x = [0 1 2 3 4 5];
%y = [1 3 4 2 4 6];

% Získame koeficient pomocou funkcie polyfit

% Vracia koeficienty polynómu p(x) stupňa n, 
% ktorý najlepšie zodpovedá (v zmysle najmenších štvorcov) pre údaje v y. 

% n = určuje "plinulosť funkcie"
k = polyfit(x, y, 1);

% Samozrejme takto nevieme 

% Nová os X kde máme 50 bodo
xNew = linspace(min(x), max(x), 100);
yNew = polyval(k , xNew);


plot(x, y, 'go', xNew, yNew, 'r-'); 
grid on;

