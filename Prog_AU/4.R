# pca <- prcomp(data, scale = TRUE)
install.packages("ggfortify")
install.packages("rgl")
require(ggfortify)
require(rgl)
pca <- prcomp(data[,2:9], scale = TRUE)

pca$rotation <- pca$rotation*-1
pca$x <- -1*pca$x

biplot(pca, scale = 0, cex = .5)
# biplot(pca, scale = 0, cex = .5, col = "steelblue")
autoplot(pca) + theme_classic()
tride <- as.data.frame(pca$x)

plot3d(tride[,1:3])
plot3d(tride[,1:3], col = "yellow")

farby <- ifelse(data$Pohlavie == "M", "steelblue", ifelse(data$Pohlavie == "F", "darkorange", "lightgreen"))
farby
plot3d(tride[,1:3], col = farby)

require(vegan) 
require(umap)
require(tsne)

mapa <- isomap(dist(data[1:1000,2:9]), ndim = 2, epsilon = 4)
plot(mapa, cex = 0.5)

mapa2 <- umap(data[,2:9])

farby <- ifelse(data$Pohlavie == "M", "steelblue", ifelse(data$Pohlavie == "F", "darkorange", "lightgreen"))
plot(mapa2$layout, col = farby)

mapa3 <- tsne(data[,2:9], initial_dims = 2, max_iter = 10)

plot(mapa3, cex = 0.5, col = farby)

mapa3 <- tsne(data[,2:9], initial_dims = 2, max_iter = 100)

plot(mapa3, cex = 0.5, col = farby)

require(ggplot2)
ggplot(data, aes(x = Diameter, y = Dlzka)) + geom_point() + theme_classic()
ggplot(data, aes(x = Diameter, y = Dlzka)) + geom_point() + theme_classic() + geom_smooth(method = lm)
