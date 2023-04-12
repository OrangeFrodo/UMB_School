dataset <- read.table("iris.data", header = TRUE, sep = ",")

require(ggplot2)
require(gridExtra)

data1 <- ggplot(dataset, aes(petal.sirka))
data1

data1 <- ggplot(dataset, aes(x = petal.sirka, y = sepal.sirka)) + geom_line()
data1

data2 <- ggplot(dataset, aes(x = petal.dlzka, y = sepal.dlzka)) + geom_line
data2 <- ggplot(dataset, aes(x = petal.dlzka, y = sepal.dlzka)) + geom_line()

grid.arrange(data1, data2, ncol = 2)

# Point
data1 <- ggplot(dataset, aes(x = petal.sirka, y = sepal.sirka)) + geom_point()
data2 <- ggplot(dataset, aes(x = petal.dlzka, y = sepal.dlzka)) + geom_point()

grid.arrange(data1, data2, ncol = 2)

data1 <- ggplot(dataset, aes(x = petal.sirka, y = sepal.sirka)) + geom_point() + ggtitle("Náš 1 graf")
data2 <- ggplot(dataset, aes(x = petal.dlzka, y = sepal.dlzka)) + geom_point() + ggtitle("Náš 2 graf")

grid.arrange(data1, data2, ncol = 2)

# Labels
data1 + xlab("Petal sirka") + ylab("Sepal sirka")
data1 <- data1 + xlab("Petal sirka") + ylab("Sepal sirka")
grid.arrange(data1, data2, ncol = 2)
data1 <- data1 + theme_bw()
data1