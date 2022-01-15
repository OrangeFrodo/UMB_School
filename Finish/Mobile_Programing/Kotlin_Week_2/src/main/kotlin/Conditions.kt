// Conditions
public fun excersise_one() {

    // Task 1
    val num1: Int? = 1;
    val num2: Int? = 2;

    if (num1 != null && num2 != null) {
        if (num1 > num2)
            println("Num1 is bigger")
        else if (num1 == num2)
            println("They are same")
        else
            println("Num2 is bigger")
    }

    // Task 2
    val age: Int? = readLine()?.toInt()
    if (age!! >= 18) {
        println("Adult")
    } else {
        println("Child")
    }

    // Task 3 && Task 5
    val num3: Int = 101
    val range: IntRange = 1..100

    if (num3 in range) {
        when(num3) {
            1 -> println("One")
            2 -> println("Two")
            3 -> println("Three")
            else -> println("Unkown num")
        }
    } else {
        println("Not in range")
    }

    // Task 4
    val input: String = readLine().toString()
    val result = when(input) {
        "yes" -> "lets goo"
        "no" -> "shutting down"
        else -> "Wrong input"
    }
    println(result)

    // Task 6
    val numOfChild: Int? = readLine()?.toInt()
    val range2: IntRange = 1..3
    if( numOfChild in range2 ) {
        when(numOfChild) {
            1, 2, 3 -> println("Avarage family")
        }
    } else if (numOfChild!! > 3) {
        println("Big family")
    } else {
        println("No children")
    }

    // Task 7
    val bankAccount: Int? = readLine()?.toInt()
    if (bankAccount!! > 10) {
        val answer: String = readLine().toString()
        when(answer) {
            "yes" -> println("How much?")
            "no" -> println("Okey than")
        }
    } else {
        println("GG")
    }
}