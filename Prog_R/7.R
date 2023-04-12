
data <- read.table("iris.data", header = T, sep = ",")
head(data)

install.packages("kohonen")
require(kohonen)

# Deep learning somka
trenovacie <- as.matrix(data[,1:4])
siet <- somgrid(xdim = 8, ydim = 8, topo = "hexagonal")
somka <- som(trenovacie, grid = siet, rlen = 100)

plot(somka, "changes")
plot(somka, "count")
plot(somka, "mapping")
plot(somka, "quality")
plot(somka, "dist.neighbours")


data <- read.table("data.txt", header = F, sep = ",")
head (data)

data <- data[,2:65]
head(data)
summary(data)
trenovacie <- as.matrix(data)
siet <- somgrid(xdim = 20, ydim = 10, topo = "rectangular")
somka <- som(trenovacie, grid = siet, rlen = 100)

plot(somka, "changes")
plot(somka, "changes")
plot(somka, "changes")
plot(somka, "count")
plot(somka, "mapping")
plot(somka, "quality")

siet <- somgrid(xdim = 10, ydim = 5, topo = "rectangular")
somka <- som(trenovacie, grid = siet, rlen = 100)
plot(somka, "changes")
plot(somka, "count")
summary(somka)