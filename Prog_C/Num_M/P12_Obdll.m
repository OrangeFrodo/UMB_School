% 2021.12.08
% Obdĺžnikova metóda
% Jakub Daxner
% Zdroj
% https://home.saske.sk/~hcencar/pics/PocitacovaFyzikaAModelovanie.pdf


% Obdlznikova metoda
% Používame na vypocitanie hodnoty urciteho integralu


format long

% H a presnosť merania
h = pi/2;
error = 0.000001;

% Interval
a = 0; b = pi/2;

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
    % Y = e.^X;
    Y = sin(X);

    % Transponovani matic X a Y
    v=[X' Y'];


    fa = 1;
    fb = max(size(X));

    n = fb - fa;    % Náš počet delení
    w = v(fa:fb,:); % Vloženie do matice w

    sizeOfBetweenValues = abs(w(2,1) - w(1,1)); % Veľkosť rozdielu medzi jednotlivými hodnotami
    Int_o = 0;

    for k=1:n
    %   0      = 0 + 0.05 * 0.3678
    %   0.0183 = 0183 + 0.05 * 0.3867
    %   Vypočítame hodnotu 1. štvorca a následne
    %   pripočítame ďalšie, všetkých 40
        Int_o = Int_o + sizeOfBetweenValues*w(k,2);
    endfor

    f_Intl = Int_o;
    thisIterationError = f_Intl - s_Intl;

until (error > abs(thisIterationError))


display('Výsledná hodnota pre obdlznikovu metodu je : '), Int_o, n
display('+- : '), error