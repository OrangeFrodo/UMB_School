class Car(
    val name: String = "BMW",
    val price: Int = 0,
    var maxSpeed: Int = 0,
) {
    fun throttle() {
        maxSpeed += 10
    }

    fun info() {
        print(name + maxSpeed + price)
    }

    fun copy(name: String = this.name, price: Int = this.price, maxSpeed: Int = this.maxSpeed) = Car(name, price, maxSpeed)
}