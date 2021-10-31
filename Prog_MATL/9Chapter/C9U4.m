% 3D Graphs
% mesh fun
% surf fun

x = 0: 0.05: 1;
y = 0: 0.05: 1;

[X, Y] = meshgrid(x, y);
Z = sin(pi*(X+Y));

mesh(X, Y, Z)
surf(X, Y, Z)

% 