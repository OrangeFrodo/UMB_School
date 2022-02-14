fun ifSt() {
    val nm1: Int = 2
    val nm2: Int = 5

    if(nm1 > nm2) println("Num 1 is bigger")
    if(nm1 < nm2) println("Num 2 is bigger")
    if(nm1 == nm2) println("Equal")
}

fun ifSt2() {
    val age: Int = readLine()?.toInt() ?: 0

    if(age >= 18) {
        println("Adult")
    } else {
        println("Not")
    }
}

fun ifSt3() {
    val n: Int = 2

    when(n) {
        1 -> println("One")
        2 -> println("Two")
        3 -> println("Three")
        else -> println("Unknown number")
    }
}

fun ifSt4() {
    val n: String = readLine().toString()

    println() {
        when(n) {
            "ano" -> "Lets goo"
            "no" -> "shutting"
            else -> "Fk"
        }
    }
}

fun ifSt5() {
    val n: Int = 1

    if (n in 0..100) {
        when(n) {
            1 -> println("One")
            2 -> println("Two")
            3 -> println("Three")
            else -> println("Unknown number")
        }
    }
}


fun ifSt6() {
    val n: Int? = readLine()?.toInt()

    when(n) {
        1,2,3 -> println("Average family")
        else -> {
            if (n != null) {
                if(n < 1) {
                    println("none")
                }
                else
                    println("A lot")
            }
        }
    }
}

fun ifSt7() {
    println("What is your bank account balance?")
    var balance: Double? = readLine()?.toDouble()

    if (balance != null) {
        if(balance<10){
            println("Do you want to take loan?")
            val takeLoan: String = readLine().toString()
            if(takeLoan == "y"){
                println("How much?")
                balance += readLine()?.toDouble() ?: 0.0
            } else {
                println("Yoar choice")
            }
        }
    }

    println("Balance now $balance euros.")
}