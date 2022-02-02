package com.example.week4test

import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.material.*
import androidx.compose.runtime.*

@Composable
fun Ex1() {
    var info: String by remember { mutableStateOf("") }
    var textEdit: String by remember { mutableStateOf("") }
    var numPressed: Int by remember { mutableStateOf(0) }
    
    
    Column() {
        Text(text = textEdit)
        TextField(value = textEdit, onValueChange = { textEdit = it })

        // Button 
        Button(onClick = {
            numPressed++
        }) {
            // Name of btn
            Text(text = "Press me")
        }

        // Repeat for every press
        repeat (numPressed) {
            Text(text = textEdit)
        }
    }
}

@Composable
fun Ex2() {
    var checked: Boolean by remember { mutableStateOf(false) }
    
    Column() {
        // To order it in row
        Row() {
            Text(text = "Already registered")
            Checkbox(checked = checked, onCheckedChange = {checked = it})
        }
        if(!checked) {
            TextFieldComp("First name")
            TextFieldComp("Last name")
        }
        TextFieldComp(label = "Username")
        TextFieldComp(label = "Password")
    }

}

@Composable
fun TextFieldComp(label: String) {
    OutlinedTextField(
        value = "",
        onValueChange = {},
        label = {
            Text(text = label)
        })
}