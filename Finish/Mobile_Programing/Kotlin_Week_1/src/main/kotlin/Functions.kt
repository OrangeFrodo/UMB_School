fun funcExercises(){
    //Ex 1
    fn1("Jakub")

    //Ex 2
    val len: Int = fn2("Jakub")

    //Ex 3
    val biggest = fn3(9u,8u,100u);
    val biggest2 = fn3(1u,60u)

    //Ex 4
    val me = fn4("Daxo", "Jakub", 20)

    println(me)
}

fun fn1(name: String = "John Doe"){
    println("Hello $name!")
}

fun fn2(text: String): Int{
    return text.length
}

fun fn3(
    x: UInt = 0u,
    y: UInt = 0u,
    z: UInt = 0u
) : UInt{

    //Get bigger of the first two
    var max: UInt = if(x>y) x else y

    //Return bigger of the previous bigger and z
    return if(max>z) max else z
}

fun fn4(
    nickname: String = "Joe Doe",
    name: String,
    age: Int
): String{
    return "Hey $name. You are $age years young and your nickname is $nickname."
}