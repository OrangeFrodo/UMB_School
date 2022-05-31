import java.util.*
import kotlin.system.exitProcess
import kotlin.system.measureTimeMillis

fun homework1(){

    val read = Scanner(System.`in`)
    print("Enter 1 number: ")
    var num = read.nextInt()
    print("Enter 2 number: ")
    var num1 = read.nextInt()

    if(num < 0 || num1 < 0){
        exitProcess(0)
    }
    print("If sum press 1 if muliplication press 2: ")
    var whatToDo: Int? = readLine()?.toInt()

    val result = when(whatToDo){
        1 -> num + num1
        2 -> num * num1
        else -> "Wrong input..."
    }
    println(result)


}
fun factorial() {

    // Do your task


    print("Enter number: ")
    var num: Int? = readLine()?.toInt()
    var factorial: Int = 1
    for (i in 1..num!!) {
        factorial *= i.toInt()

    }
    println("Factorial of $num = $factorial")



}