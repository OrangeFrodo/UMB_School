fun ex1 () {
    val num1: Double = 1.5
    val num2: Double = 2.5

    var result: Double = 0.0

    result = num1 + num2
    println(result)

    result = num1 - num2
    println(result)

    result = num1 % num2
    println(result)

    result = num1 * num2
    println(result)
}

fun ex2 () {
    var str2: String? = null
    var str: String? = "null"
    var lngStr: Int? = null

    lngStr = str?.length
    println(lngStr)

    /*
    lngStr = str2!!.length
    println(lngStr)
     */
}