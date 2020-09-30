import java.io.*
import java.net.HttpURLConnection
import java.net.URL

fun PortArduino(): String{
    var pro = ProcessBuilder("arduino-cli","board","list").start()
    val inputStream = pro.getInputStream()
    val inputStreamReader = InputStreamReader(inputStream)
    val bufferedReader = BufferedReader(inputStreamReader)

    var response = bufferedReader.readText()


    if (response == "No boards found.\n"){
        return "No board on system.."
    }else{
        response = response.split("/dev/")[1]
        response = response.split(" Serial Port")[0]
        response

        return "/dev/" + response
    }

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
fun main() {
    var port = PortArduino()
    var compiled = CompileIno("/home/saroui/blink/blink.ino")
    println(compiled)
    if (!(compiled.isEmpty()) or (port == "No board on system..")) {
        println("Error compiling or uploading...")
    } else{
        var uploaded = UploadIno("/home/saroui/blink/blink.ino", port)
        println(uploaded)
    }

}
