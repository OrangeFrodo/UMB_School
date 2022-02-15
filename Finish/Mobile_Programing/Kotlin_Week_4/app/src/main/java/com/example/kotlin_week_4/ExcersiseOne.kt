package com.example.kotlin_week_4

<<<<<<< HEAD
import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.*
import androidx.compose.material.OutlinedTextField
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.*
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp

@Composable
fun MyView() {
    FormFor()
}

@Composable
fun Squares() {
    Row(
        modifier = Modifier.fillMaxSize(),
        horizontalArrangement = Arrangement.SpaceBetween
    ) {
        repeat(5) {
            Text(text = "Hey")
            Box(modifier = Modifier.background(Color.Red))
        }
    }
}

@Composable
fun FormFor() {
    Column(
        modifier = Modifier
            .fillMaxWidth()
            .height(250.dp)
            .padding(10.dp)
            .border(width = 1.dp, color = Color.Black)
            .padding(horizontal = 10.dp),

        horizontalAlignment = Alignment.CenterHorizontally,
        verticalArrangement = Arrangement.SpaceEvenly,
    ) {
        TextInput(label = "First Name")
        TextInput(label = "Last Name")
        TextInput(label = "Age")
    }
}

@Composable
fun TextInput(label: String) {
    Row(
        modifier = Modifier.fillMaxWidth(),
        horizontalArrangement = Arrangement.SpaceBetween,
        verticalAlignment = Alignment.CenterVertically
    ) {
        Text(text = label)
        OutlinedTextField(value = "", onValueChange = {})
    }
}
=======
>>>>>>> ca1d65b9cfad4f0b323e2cf29c8f59d47d283fb1
