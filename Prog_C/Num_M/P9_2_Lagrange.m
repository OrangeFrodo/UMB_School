% 2021.11.28
% Lagrangeov interpolačný polynóm
% Jakub Daxner

% Funkcia
x = [0 1 2 3 4];
Y = x.^2 + x + 5;

% Lagrangeov function

% Interval pre zistenie interpolacie
interval = -10 : 0.5 : 10;

% Jednotková matica do ktorej budeme vkladať hodnoty
n = size(x, 2);
M = ones(n, size(interval, 2));

for i = 1: n
    p = 1;
    for j = 1: n
        if(i != j)
            % p(x) = y0 φ0(x) + y1 φ1(x) + ···+ yn φn (x)

            % (x −x0) / (xi −x0)

            M(i, :) = M(i, :) .* (interval-x(j)) / (x(i) - x(j));
        endif
    endfor

    y = 0;
    M;

    % Výsledné hodnoty pre y na intervale
    % (Interpolácia)
    for k = 1 : n
        y = y + Y(k) * M(k, :);
    endfor
endfor

y
plot(x, Y, "go", interval, y, 'r.')
