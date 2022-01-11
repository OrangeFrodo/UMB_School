fun main(args: Array<String>) {
    val int1: Int = 5
    val int2: Int = 10

    var sum: Int = int1 + int2
    var dif: Int = int1 - int2
    val mult: Int = int1 * int2
    val div: Float = int1.toFloat() / int2.toFloat()

    print( "Results are:  ${sum} ${dif} ${mult} ${div} \n")
    sum = 5
    dif = 2000

    print( "Results are:  ${sum} ${dif} ${mult} ${div} \n")

    var nullStringVar: String? = null
    var int3: Int = (nullStringVar?.length ?: 0) as Int

    var int4: Int? = nullStringVar?.length

    print("Values ${nullStringVar} lengt ${int3} , is null in int4? there is ${int4} ")
}