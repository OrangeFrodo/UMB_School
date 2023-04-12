data <- read.table('iris.data', header = TRUE,  sep = ',')
#data

mean(data$sepal.sirka)
min(data$sepal.sirka)
max(data$sepal.sirka)
median(data$sepal.sirka)
sd(data$sepal.sirka)

# Korlácia
cor(data$sepal.sirka, data$sepal.dlzka, method = "pearson")
cor(data$sepal.sirka, data$sepal.dlzka, method = "spearman")
cor(data$sepal.sirka, data$petal.sirka, method = "pearson")
cor(data[,1:4], method = "pearson")