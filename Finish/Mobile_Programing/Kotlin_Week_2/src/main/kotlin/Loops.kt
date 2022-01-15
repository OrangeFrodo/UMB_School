public fun excersise_two() {
    // Task 1
    var y: Int = 0;

    repeat(3) {
        println("Jakub")
    }
    while (y != 3 ) {
        println("Daxner")
        y++
    }
    for (i in 1..3) {
        println("Oamk")
    }

    // Task 2
    repeat(10) {
        println("${it}")
    }

    for (i in 1..10) {
        println(i)
    }

    // Task 3
    for(i in 0..20 step 2) {
        println("Even ${i}")
    }

    repeat(10) {
        println("${it*2}")
    }

    // Task 4
    var inputValue: Int? = readLine()?.toInt()
    while (inputValue!! > 0) {
        inputValue = readLine()?.toInt()
    }

    // Task 5
    println("Task 5")
    var result: Int = 0
    var numOfIterations: Int? = readLine()?.toInt()

    for (i in 1..numOfIterations!!) {
        result += readLine()?.toInt()!!
    }
    println(result)

    // Task 6
    for (i in 1..10) {
        for(j in 1..10) {
            println(i*j)
        }
    }

    // Task 7
    println("Task 7")
    val oneNum: Int? = readLine()?.toInt() // 5
    val twoNum: Int? = readLine()?.toInt() // 20

    if (twoNum != null) {
        for (f in twoNum downTo oneNum!! step 3) {

                println(f)

        }
    }
}