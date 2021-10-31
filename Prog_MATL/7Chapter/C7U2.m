% Vyhodnocení výrazu 
% x2 + xy + 1 v bodech x = 2, y = 3 
% pomocí symbolického výrazu

f = sym('x^2+x*y+1')
z = subs(f , 3, 2)

% z1 = subs('sin(x)', 'x', pi/2)