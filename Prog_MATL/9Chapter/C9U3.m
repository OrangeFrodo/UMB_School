% Subplot func

x = 0: 0.01 : 1;
y1 = sin(pi*x);
y2 = sin(2*pi*x);
y3 = sin(3*pi*x);
y4 = sin(4*pi*x);

subplot(2, 2, 1)
plot(x, y1, 'r')
subplot(2, 2, 2)
plot(x, y2, 'b')
subplot(2, 2, 3)
plot(x, y3, 'g')
subplot(2, 2, 4)
plot(x, y4, 'k')