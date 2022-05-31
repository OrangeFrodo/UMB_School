% INTERVALS
a = -1;
b = 4;

% Y0 ; pravá strana rovnice
c = 1;
l = 0;

% Function
f=@(x,y)(sin(x));


% Function ode45
ode45(f,[a,b],c)
[x,y]= ode45(f,[a,b],c)

ode23(f,[a,b],l)
[x,y]= ode45(f,[a,b],l)

