dataset <- read.table("iris.data", header = TRUE, sep = ",")

library(DAAG)
library(party)
library(rpart)
library(rpart.plot)
library(caret)
library(tree)
library(pROC)

# Tree
vzorka <- sample(2, nrow(dataset), replace = T, prob = c(0.5, 0.5))
trenovacie <- dataset[vzorka == 1,]
testovacie <- dataset[vzorka == 2,]

summary(trenovacie)

stromec <- rpart(trieda~., data = trenovacie)
summary(stromec)

rpart.plot(stromec)

pred <- predict(stromec, testovacie, type = 'class')

table(pred, testovacie$trieda)

# Random forest
lesik <- randomForest(as.factor(trieda)~., data = trenovacie)

pred <- predict(lesik, dataset, type = 'class')
table(pred, dataset$trieda)

lesik <- randomForest(as.factor(trieda)~., data = trenovacie, ntree = 10000)

pred <- predict(lesik, dataset, type = 'class')
table(pred, dataset$trieda)
