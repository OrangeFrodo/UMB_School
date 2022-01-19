// 19.01 Collections && lambda

fun excersiseOne() {
    val numbers: MutableList<Int> = mutableListOf<Int>(1, 2, 3, 4, 5)

    numbers.add(7)
    numbers.add(0, -1)
    numbers[0] = 0
    numbers.add(6, 6)

    for(num in numbers) {
        println(num)
    }
}

fun excersiseTwo() {
    val clr: MutableList<Char> = ('a' .. 'g').toMutableList()
    clr.forEach {
        println(it)
    }
}

fun excersiseThree() {
    val users: MutableMap<Int, String> = mutableMapOf()

    repeat(5) { x ->
        println("Give the ID")
        val id: Int = readLine()?.toInt() ?: 0
        println("Give the nickname")
        val nickname: String = readLine().toString()

         users[x] = nickname
    }

    for (u in users) {
        println(u)
    }
}

fun excersiseFour() {
    val setOfStudents: MutableSet<String> = mutableSetOf()

    repeat(5) {
        val userName: String = readLine().toString()
        setOfStudents.add(userName)
    }

    setOfStudents.forEach{
        println(it)
    }
}

fun excersiseFive() {
    val listOfNums: List<Int> = listOf(1, 22, -52, 45)

    listOfNums.forEach{
        println(it)
    }

    val modified = listOfNums.map {it * -1}

    modified.forEach{
        println(it)
    }

    val filtered = listOfNums.filter { it in 1..10 }
    filtered.forEach{
        println(it)
    }

}

fun excersiseSixSeven() {
    val listOfFiveTexts: MutableList<String> = mutableListOf("a", "b", "c", "d", "e")
    repeat(5) {
        val x = readLine().toString()
        listOfFiveTexts[it] = x
    }

    println(listOfFiveTexts.firstOrNull())

    val p1 = Person(0, "Peter")
    val p2 = Person(1, "Adam")
    val p3 = Person(2, "Alt")

    val listOfThreePeople: List<Person> = listOf(p1, p2, p3)

    val idWeWant: Int = readLine()?.toInt() ?: 0
    listOfThreePeople.map {
        if (it.id == idWeWant) {
            it.name = "Jakub"
        } else {
            println("Not $idWeWant")
        }
    }

    listOfThreePeople.map {
        println(it.name)
    }
}