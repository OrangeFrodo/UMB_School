% 2021.12.08
% Lichobežníková metóda
% Jakub Daxner
% Zdroj
% https://home.saske.sk/~hcencar/pics/PocitacovaFyzikaAModelovanie.pdf


format long

% Funkcia 
% Presnosť závysí od množstva hodnôt v X
X = [2 : 0.0005 : 3];
Y = X.^3 + 1;

% Transponovani matic X a Y
v=[X' Y'];

% Interval
a = 2; 
b = 3;

fa = 1;
fb = max(size(X)); 

n = fb-fa; % Náš počet delení založrný na počte X hodnôt

w = v(fa:fb,:); % Vloženie do matice w
delta = abs(w(2,1) - w(1,1)); % Veľkosť rozdielu medzi jednotlivými hodnotami

%   S = v/2*(a + c)
Int_l = (delta/2) * (v(fa,2) + v(fb,2));

for k=1:n
    Int_l = Int_l + delta*w(k,2);
endfor

display('Výsledná hodnota pre stvorec je : '), Int_l, n