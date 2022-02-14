import kotlin.system.exitProcess

fun homeworkFun() {
    // Task 1
    val decNum1 : Int? = readLine()?.toInt()
    val decNum2 : Int? = readLine()?.toInt()

    // Task 2
    if (decNum1 != null && decNum2 != null) {
        if(decNum1 < 0 || decNum2 < 0) {
            exitProcess(0)
        }
    }

    // Task 3
    val opinion : String = readLine().toString()
    val result : Int? = when(opinion) {
        "sum" -> decNum1?.let { decNum2?.plus(it) }
        "multi" -> decNum1?.let { decNum2?.times(it) }
        else -> null
    }

    println(result)
}

fun homeworkFunction(n1: Int, n2: Int): Int? {
    val opinion : String = readLine().toString()
    val result : Int? = when(opinion) {
        "sum" -> n1?.let { n2?.plus(it) }
        "multi" -> n1?.let { n2?.times(it) }
        else -> null
    }

    return result
}

fun factorialFun(n1: Int): Int {
    var fact : Int = 1;
    for(i in 1..n1) {
        fact *= i
    }

    return fact
}