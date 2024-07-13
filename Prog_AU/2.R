# Load the data
data <- read.table('abalone.csv', header = TRUE,  sep = ',')
summary(data)
library(ggplot2)

# Plot the data
ggplot(data, aes(x = Diameter)) + geom_bar() + theme_bw()
ggplot(data, aes(x = Diameter)) + geom_bar(color = "red") + theme_bw()
ggplot(data, aes(x = Diameter)) + geom_bar(color = "red", fill= "blue") + theme_bw()
ggplot(data) + geom_bar(aes(x = Height), fill = "steelblue") + theme_bw()

# Boxplot
ggplot(data, aes(x = Height)) + geom_boxplot() + theme_bw()
ggplot(data, aes(y = Height)) + geom_boxplot() + theme_bw()

