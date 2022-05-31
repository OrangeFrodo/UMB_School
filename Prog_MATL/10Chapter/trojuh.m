function[P, o] = trojuh(a, b, c)
% [P,o] = trojuh(a, b, c)
% Funkce pro výpočet obvodu a obsahu trojúhelníka
% a, b, c - délky stran
% P - obsah, o - obvod

o = a+b+c;
s = o/2;
P = sqrt(s*(s-a)*(s-b)*(s-c));
  
end
