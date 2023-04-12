dataset <- read.table("iris.data", header = TRUE, sep = ",")
cor(dataset[,1:4])

install.packages("dplyr")
install.packages("broom")
install.packages("ggpubr")
install.packages("DAAG")
install.packages("party")
install.packages("rpart")
install.packages("tree")
install.packages("rpart.plot")
install.packages("caret")

library(ggplot)
library(ggplot2)
library(dplyr)
library(broom)
library(ggpubr)

# Graf
graf <- ggplot(dataset, aes(x=petal.dlzka,y=sepal.dlzka)) + geom_point() + theme_bw()
graf

# Linearna regresia - linear regression
lr1 <- lm(sepal.dlzka ~ petal.dlzka, data = dataset)

summary(lr1)

nove <- data.frame(petal.dlzka = 5)
predict(lr1, newdata = nove)

nove <- data.frame(petal.dlzka = 3)
predict(lr1, newdata = nove)

nove <- data.frame(petal.dlzka = 3.5)
predict(lr1, newdata = nove)

ggplot(dataset, aes(x=petal.dlzka,y=sepal.dlzka)) + geom_point() + theme_bw()
graf <- ggplot(dataset, aes(x=petal.dlzka,y=sepal.dlzka)) + geom_point() + theme_bw()

# Linearna regresia - linear regression
graf + geom_smooth(method = "lm", col = "red")
graf + geom_smooth(method = "lm", col = "red") + stat_regline_equation()

graf + geom_smooth(method = "loess", col = "red") + stat_regline_equation()

# Locally weighted regression
lr2 <- loess(sepal.dlzka ~ petal.dlzka, data = dataset)

nove <- data.frame(petal.dlzka = 5)
predict(lr2, newdata = nove)

nove <- data.frame(petal.dlzka = 3)
predict(lr2, newdata = nove)

graf + geom_smooth(method = "loess", col = "blue")