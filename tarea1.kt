import java.io.*
import java.net.HttpURLConnection
import java.net.URL

fun PortArduino(): String{
    var pro = ProcessBuilder("arduino-cli","board","list").start()
    val inputStream = pro.getInputStream()
    val inputStreamReader = InputStreamReader(inputStream)
    val bufferedReader = BufferedReader(inputStreamReader)

    var response = bufferedReader.readText()


    return response
}

fun UploadIno(sketch: String, Arduino: String): String{
    var uplo = ProcessBuilder("arduino-cli","upload","-b","arduino:avr:uno","-p",Arduino,"-v",sketch).start()
    val inputStream = uplo.getErrorStream()
    val inputStreamReader = InputStreamReader(inputStream)
    val bufferedReader = BufferedReader(inputStreamReader)

    var response = bufferedReader.readText()


    return response

}

fun CompileIno(sketch: String): String{
    var uplo = ProcessBuilder("arduino-cli","compile","-b","arduino:avr:uno",sketch).start()
    val inputStream = uplo.getErrorStream()
    val inputStreamReader = InputStreamReader(inputStream)
    val bufferedReader = BufferedReader(inputStreamReader)

    var response = bufferedReader.readText()


    return response

}
fun main(){
    var compiled = CompileIno("/home/saroui/Documentos/blink.ino")
    var response = UploadIno("/home/saroui/blink.ino","/dev/ttyACM0")

    println(compiled)
}
