data class Person(
    var name: String = "Dan",
    var age: Int
) {
    var id: String = "$name-$age"

    fun getInfo() : String {
        return "$id and $name"
    }
}