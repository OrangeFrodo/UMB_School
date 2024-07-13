model <- lm(Dlzka ~ Diameter, data = data)
summary(model)

novy_vstup <- data.frame(Diameter = c(0.6,0.3,0.1,0.62))
predict(model, novy_vstup, se.fit = FALSE)

model <- loess(Kruhy ~ Dlzka, data = data)
predict(model, novy_vstup, se.fit = FALSE)

require(rpart.plot)
set.seed(917)

index <- sample(1:nrow(data), round(0.7*nrow(data)))
trenovacie <- data[index, ]
testovacie <- data[-index, ]

names(trenovacie)
i <- names(trenovacie)

vztah <- as.formula(paste("as.factor(pohlavie) ~", paste(i[!i %in% "pohlavie"], collapse="+")))

stromculik <- rpart(vztah, data = trenovacie)
summary(stromculik)
rpart.plot(stromculik)