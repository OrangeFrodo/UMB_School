%VECTORS
xu = [0; 3; 4];
yu = [2; 1; 5];

% Sestavíme matici 
% soustavu lineárních rovnic a tuto soustavu vyřešíme.
M = [ones(3,1) xu xu.^2]

a = M\yu

% Koeficienty ai jsou zjevne racionální čísla, 
% a proto si je vypíšeme ve tvaru zlomku.
format rat
a

format short
p = @(x) a(1) + a(2)*x + a(3)*x.^2

% Pro vykreslení grafu nalezeného polynomu p2(x)
xg = xu(1) : 0.01: xu(end)
yg = p(xg)

% PRINT GRAP
hold on
plot(xu, yu, 'o')
plot(xg, yg)
legend('uzly','interpolacni polynom')