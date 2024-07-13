data <- read.table("abalone_v2.data", header = T, sep = ",")
summary(data)

cor(data$Dlzka, data$Diameter)
cor(data$Dlzka, data$Diameter, method = "spearman")

install.packages("corrplot")
corrplot(cor(data[,2:9]))
corrplot(cor(data[,2:9]), method = "color")
corrplot(cor(data[,2:9], method = "spearman"), method = "number", tl.col = "black")
plot(data)

ggplot(data, aes(x = Diameter, y = Vyska)) + geom_point()
ggplot(data, aes(x = Diameter, y = Vyska)) + geom_point() + theme_bw()

graf1 <- ggplot(data, aes(x = Diameter, y = Vyska)) + geom_point(aes(color = Pohlavie), size = 1) + theme_bw()
graf1 + theme_classic()

ggplot(data, aes(x = Diameter)) + geom_line(aes(y = Vyska), color = "steelblue") + theme_bw()+ geom_line(aes(y = Hmot_cely), color = "orange")