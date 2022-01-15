// Task 1
fun myName(fName: String = "Joe", lName: String = "Doe") {
    println("Welcome ${fName}  ${lName}")
}

// Task 2
fun myLength(str: String) : Int? {
    val strLng : Int = str.length
    return strLng
}

// Task 3
fun biggest(n1 : UInt = 0u, n2 : UInt = 0u, n3 : UInt = 0u): UInt? {
    val arrayStuff: Array<UInt> = arrayOf(n1, n2, n3)
    arrayStuff.sort()

    return arrayStuff[2]
}

