fun lps1 () {
    repeat(3){ println("Jakub") }
}

fun lps2 () {
    repeat(10){
        println(it+1)
    }
}

fun lps4 () {
    var num: Int = 0

    if (num != null) {
        while(num >= 0){
            num = readLine()?.toInt()!!
        }
    }
}

fun lps5 () {
    var n: Int? = readLine()?.toInt()
    var sum: Int = 0

    for(i in 0 until n!!){
        sum += readLine()?.toInt() ?: 0
    }

    println(sum)
}


fun lps6(){
    for (i in 1..9){
        for (j in 1..9){
            print("$i*$j ")
        }
        println()
    }
}

fun lps7(){
    println("Give big num:")
    val big: Int = readLine()?.toInt()!!

    println("Give small num:")
    val small: Int = readLine()?.toInt()!!

    for(i in big downTo small step 3){
        print("$i ")
    }
}
