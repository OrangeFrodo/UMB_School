data <- read.table('iris.data', header = TRUE,  sep = ',')

head(data, n = 5)

# Chceme iba číselné hodnoty
dataset <- data[,1:4]

# 3. Korelačná matica
cor(dataset, method = "pearson")

# 4. Vizualizácia
plot(dataset)

install.packages("ggplot2")