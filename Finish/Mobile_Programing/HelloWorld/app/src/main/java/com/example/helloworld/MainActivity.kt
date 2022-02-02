package com.example.helloworld

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.padding
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Surface
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.helloworld.ui.theme.HelloWorldTheme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)


        setContent {
            HelloWorldTheme {
                MyMainView()
            }
        }
    }
}


// Creating own component
@Composable
fun MyMainView() {
    Text(
        text = "Hello Android Worl",
        color = Color.Blue,
        fontSize = 20.sp,
        modifier = Modifier
            .padding(10.dp)
            .background(Color.Green)
    )
}

// How does specific part of application looks like
@Preview(showBackground = true)
@Composable
fun DefaultPreview() {
    HelloWorldTheme {
        MyMainView()
    }
}