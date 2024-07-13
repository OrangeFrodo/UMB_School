
library(magrittr)
library(ade4)
library(FactoMineR)
library(factoextra)
library(ggplot2)
set.seed(2)
x <- 1:100
ex <- rnorm(100, 0, 30)
ey <- rnorm(100, 0, 30)
y <- 30 + 2 * x
x_obs <- x + ex
y_obs <- x + ey
P <- data.frame(x_obs=x_obs, y_obs=y_obs)
summary(P)
par(mfrow=c(1,2))
hist(P$x_obs)
hist(P$y_obs)
Mx<- scale(P, center=TRUE, scale=FALSE)
(svd(Mx)$d / sqrt(max(1, c(dim(Mx)- 1))))^2
MCov <- cov(Mx) 
eigen(MCov)       
eigenvalues <-eigen(MCov)$values
eigenVectors<-eigen(MCov)$vectors
prcomp(P)
prcomp(P)$sdev^2 
print("$v right singular vectors of svd of centered matrix")
svd(Mx)$v
print("eigen of covariance matrix")
eigen(MCov)$vectors  
print("prcomp of centered but not scaled (default options) matrix")
prcomp(P)$rotation
plot(P,asp=1,col=1) #plot points
points(x=mean(x_obs),y=mean(y_obs),col="orange", pch=19) #show center
lines(x_obs,eigenVectors[2,1]/eigenVectors[1,1]*Mx[x]+mean(y_obs),col=8)