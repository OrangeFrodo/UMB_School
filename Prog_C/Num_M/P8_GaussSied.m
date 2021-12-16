% 2021.12.07
% Gauss-Seidel
% Jakub Daxner


% Inicializačný vektor Y
Y = [0 0 0];

% Error
error = 0.0000001;
errorStart = 1;

% Iterácia
i = 0; 
 
while errorStart > error

    k = 1;
    i++

    % Sústava lineárnych rovníc
    % Iteračný tvar
    x(1) = 1/7*(14 - 2*Y(2) + 3*Y(3));
    x(2) = 1/10*(20 - x(1) - 2*Y(3));
    x(3) = -1/8*(16 - 4*x(1) - 3*x(2))

    % withoutMax = abs(x -Y);
    errorStart = max(abs(x -Y));
    Y = x;

endwhile

