x = 0:100;
 params = [-1 0 50];
 y1 = trimf(x, params);
 params = [0 50 100];
 y2 = trimf(x, params);
 params = [50 100 101];
 y3 = trimf(x, params);
 figure('NumberTitle', 'off', 'Name', 'trimf demo');
 plot(x, y1, 'r;params = [-1 0 50];', 'LineWidth', 2)
 hold on;
 plot(x, y2, 'b;params = [0 50 100];', 'LineWidth', 2)
 hold on;
 plot(x, y3, 'g;params = [50 100 101];', 'LineWidth', 2)
 ylim([-0.1 1.2]);
 xlabel('Crisp Input Value', 'FontWeight', 'bold');
 ylabel('Degree of Membership', 'FontWeight', 'bold');
 grid;