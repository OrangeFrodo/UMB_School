dataset <- read.table("iris.data", header = TRUE, sep = ",")

require(ggplot2)

ggplot(dataset, aes(x = sepal.sirka,y = sepal.dlzka))
ggplot(dataset, aes(x = sepal.sirka,y = sepal.dlzka)) + geom-point()
ggplot(dataset, aes(x = sepal.sirka,y = sepal.dlzka)) + geom_point()
ggplot(dataset, aes(x = sepal.sirka,y = sepal.dlzka)) + geom_point(aes(color = petal.dlzka))
ggplot(dataset, aes(x = sepal.sirka,y = sepal.dlzka)) + geom_point(aes(color = petal.dlzka, size = petal.sirka))

graf <- ggplot(dataset, aes(x = sepal.sirka,y = sepal.dlzka)) + geom_point(aes(color = petal.dlzka, size = petal.sirka))
graf
graf
graf + theme_bw()
graf + theme_bw() + ggtitle("Náš krásny graf")
graf <- graf + theme_bw() + ggtitle("Náš krásny graf")
graf

require(gridExtra)

# INSTALL GRID EXTRA
# install.packages("gridExtra")


graf2 <- ggplot(dataset, aes(x = petal.sirka, y = petal.dlzka)) + geom_point(aes(color = "red"))
graf2
grid.arrange(graf, graf2, ncol = 2)


ggplot(dataset, aes(sepal.dlzka)) + geom_bar()
ggplot(dataset, aes(x = factor(sepal.dlzka))) + geom_bar()
g1 <- ggplot(dataset, aes(sepal.dlzka)) + geom_bar()
g2 <- ggplot(dataset, aes(x = factor(sepal.dlzka))) + geom_bar()
grid.arrange(g1, g2)
g1
g2
g2 + theme_bw()

head(dataset, n=5)

ggplot(dataset, aes(x = factor(sepal.dlzka), fill = trieda)) + geom_bar()
g3 <- ggplot(dataset, aes(x = factor(sepal.dlzka), fill = trieda)) + geom_bar()
g3
g3 + geom_text(stat = count, aes(label = after_stat(count)))
g3 + geom_text(stat = "count", aes(label = after_stat(count)))
g3 + geom_text(stat = "count", aes(label = after_stat(count)), vjust = -1)
ggplot(dataset, aes(x = sepal.sirka, y = petal.dlzka)) + geom_line()
data <- sample(1:100, 50, replace=TRUE) 
data2 <- sample(1:20, 50, replace=TRUE) 
data2
data2
index <- seq(1:50)
data <- data.frame(index, data, data2)
data

ggplot() + geom_line
ggplot(data, aes(x = index, y = data)) + geom_line()
ggplot(data, aes(x = index, y = data2)) + geom_line()
ggplot(data, aes(x = index, y = data2)) + geom_line(linetype = "dashed")
ggplot(data, aes(x = index, y = data2)) + geom_line(linetype = "twodash")
ggplot(data, aes(x = index, y = data2)) + geom_line(linetype = "dotted")
ggplot(data, aes(x = index, y = data2)) + geom_line(color = "red")
ggplot(data, aes(x = index, y = data2)) + geom_line(color = "red") + geom_point()
ggplot(data, aes(x = index)) + geom_line(aes(y = data)) + geom_line(aes(y = data2))
ggplot(data, aes(x = index)) + geom_line(aes(y = data, color = "blue")) + geom_line(aes(y = data2))
ggplot(data, aes(x = index)) + geom_line(aes(y = data, color = "blue")) + geom_line(aes(y = data2, color = "red"))
ggplot(data, aes(x = index)) + geom_line(aes(y = data), linetype = "dashed") + geom_line(aes(y = data2))
ggplot(data, aes(x = index)) + geom_line(aes(y = data), linetype = "dashed") + geom_line(aes(y = data2), linetype = "doted")
ggplot(data, aes(x = index)) + geom_line(aes(y = data), linetype = "dashed") + geom_line(aes(y = data2))
ggplot(data, aes(x = index)) + geom_line(aes(y = data), linetype = "dashed") + geom_line(aes(y = data2), linetype = "dotted")
ggplot(data, aes(x = index)) + geom_line(aes(y = data), linetype = "dashed") + geom_line(aes(y = data2), linetype = "dotted") + theme_bw()