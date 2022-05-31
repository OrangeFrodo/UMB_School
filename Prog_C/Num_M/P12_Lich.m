% 2021.12.08
% Lichobežníková metóda
% Jakub Daxner
% Zdroj
% https://home.saske.sk/~hcencar/pics/PocitacovaFyzikaAModelovanie.pdf


format long

% H a presnosť merania
h = 1;
error = 0.000001;

% Interval
a = 0; b = 1;

f_Intl = 0;
s_Intl = 0;

do
    s_Intl = f_Intl;

    % X-ová os
    h = h /2;
    X = [a : h : b];

    % Funkcia 
    % Presnosť závysí od množstva hodnôt v X
    % Y = X.^3 + 1;
    Y = 2.^X;

    % Transponovani matic X a Y
    v=[X' Y'];

    fa = 1;
    fb = max(size(X)); 

    n = fb-fa; % Náš počet delení založrný na počte X hodnôt
    w = v(fa:fb,:); % Vloženie do matice w

    sizeOfBetweenValues = abs(w(2,1) - w(1,1)); % Veľkosť rozdielu medzi jednotlivými hodnotami

    % LICHOBEŽNÍK
    %   S = v/2*(a + c)
    Int_l = (sizeOfBetweenValues/2) * (v(fa,2) + v(fb,2));

    for k=1:n
        Int_l = Int_l + sizeOfBetweenValues*w(k,2);
    endfor

    f_Intl = Int_l;
    thisIterationError = f_Intl - s_Intl;

until (error > abs(thisIterationError))


display('Výsledná hodnota pre lichobeznikovu metodu je : '), Int_l, n
display('+- : '), error