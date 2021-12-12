% 9. Kapitola "Práca s grafikou"

% Nakreslete graf funkce f1(x) = x2 pro x ∈[−2,2]. Graf řádně otitulkujte.
% Červeně přikreslete graf funkce f2(x) = x4.
% Do nového grafického okna nakreslete tyto grafy vedle sebe.

x = linspace(-2, 2);

subplot(1, 2, 1)
plot(x, x.^2)
title('Graf 2. mocniny')
xlabel('Os x')
ylabel('Os y')

y = x.^4;
subplot(1, 2, 2)
plot(x, y, "r");
