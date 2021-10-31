% 
% 

A = round(14 * rand(5, 6) - 7)
A1 = A(:, 2:2:6)
A2 = A(:, 2:2:size(A,2))

[r, sl] = size(A1)
A3 = A1(:, [1 3 2])

A4 = flipud(A)

A5 = diag(diag(A))