//Package for this project
package com.example.helloworld

//Imports required packages
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Toast
import android.widget.Button
import android.widget.TextView
import RESTClient
import android.widget.EditText
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch

//MainActivity inherits from AppCompatActivity
class MainActivity : AppCompatActivity() {

    //Views for widgets
    lateinit var text: TextView
    lateinit var button: Button
    lateinit var editTextTextPersonName : EditText
    lateinit var editTextTextPassword : EditText
    lateinit var button2: Button

    //RESTClient object
    lateinit var restClient: RESTClient

    //Overrides onCreate method
    override fun onCreate(savedInstanceState: Bundle?) {
        //Calls parent's onCreate method
        super.onCreate(savedInstanceState)

        //Places UI on window
        setContentView(R.layout.activity_main)

        //Finds Views for widgets
        text = findViewById(R.id.textView) as TextView
        button = findViewById(R.id.button) as Button
        editTextTextPersonName = findViewById(R.id.editTextTextPersonName) as EditText
        editTextTextPassword = findViewById(R.id.editTextTextPassword) as EditText
        button2 = findViewById(R.id.button2) as Button

        //Creates RESTClient object
        restClient = RESTClient("http://192.168.1.5:8080")

        //Registers listener for onClick event of button through lambda expression
        button.setOnClickListener { view ->
            //API key
            val auth = "5f63823e3be54d3f553a5aa0"

            //Performs GET request to server
            restClient.httpGetAsync("/files?auth=$auth")

            //Launches coroutine to wait server response
            GlobalScope.launch {
                val response = restClient.wait()

                //Views of widgets can only be modified from UiThread
                runOnUiThread {
                    text.setText(response)
                }
            }


        }
        button2.setOnClickListener { view ->
            val user = editTextTextPersonName.getText()
            val password = editTextTextPassword.getText()

            //Performs GET request to server
            restClient.httpPostAsync("/create/user", "user=$user&password=$password")

            //Launches coroutine to wait server response
            GlobalScope.launch {
                val response = restClient.wait()
                println(response)
                //Views of widgets can only be modified from UiThread
                runOnUiThread {
                    text.setText(response)
                    Toast.makeText(getApplicationContext(), "Succesful register", Toast.LENGTH_SHORT).show()
                    if (response == "User already exists"){
                        Toast.makeText(getApplicationContext(), "User alredy exists", Toast.LENGTH_SHORT).show()
                    }
                }




            }


        }

    }


}
