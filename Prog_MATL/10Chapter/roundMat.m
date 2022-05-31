% Matrix

s = input("Num of marks ")

% ARRAY CONTAINING 
% a = string and 2x2 random matrix
c = {'a string', rand(2, 2), "F"};

c{1};
c{2};

disp("Press 3 ")
if s <= 3
    c{1:s}
else 
    disp('Not an 3')
end