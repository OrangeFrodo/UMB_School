% 2021.12.08
% Obdĺžnikova metóda
% Jakub Daxner
% Zdroj
% https://home.saske.sk/~hcencar/pics/PocitacovaFyzikaAModelovanie.pdf


% Obdlznikova metoda
% Používame na vypocitanie hodnoty urciteho integralu


format long

% Funkcia 
% Presnosť závysí od množstva hodnôt v X
X = [-1 : 0.05 :1];
Y = e.^X;

% Transponovani matic X a Y
v=[X' Y'];

% Interval
a = min(X); 
b = max(X);

fa = 1;
fb = max(size(X));

n = fb - fa; % Náš počet delení
w = v(fa:fb,:); % Vloženie do matice w

delta = abs(w(2,1) - w(1,1)); % Veľkosť rozdielu medzi jednotlivými hodnotami
Int_o = 0;

for k=1:n
%   0      = 0 + 0.05 * 0.3678
%   0.0183 = 0183 + 0.05 * 0.3867
%   Vypočítame hodnotu 1. štvorca a následne
%   pripočítame ďalšie, všetkých 40
    Int_o = Int_o + delta*w(k,2);
endfor

display('Výsledná hodnota pre stvorec je : '), Int_o, n