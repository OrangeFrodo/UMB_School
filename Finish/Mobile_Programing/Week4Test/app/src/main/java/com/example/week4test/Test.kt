package com.example.week4test

import android.util.Log
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.*
import androidx.compose.material.Button
import androidx.compose.material.OutlinedTextField
import androidx.compose.material.Text
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp

@Composable
fun ButtonView() {

    var info2: MutableState<String> = remember { mutableStateOf("") }

    var info: String by remember {mutableStateOf("")}
    var num : Int by remember { mutableStateOf(0) }

    Log.d("--------------------", "Calling main composable")

    Column() {
        Text(text = info)
        Text(text = num.toString())

        // Text field
        OutlinedTextField(
            value = info,
            onValueChange = {info = it})
        
        ChildComp(info2 = info2)
        
        Button(onClick = {
            num++
            info = "Hey"
            Log.d("Tag for info 2", info2.toString())
            })
        {
            Text(text = "Hey ")
        }
    }
}


@Composable
fun ChildComp(info2: MutableState<String>) {
    info2.value = "Info 2 text in value"
}

@Composable
fun LayoutTest() {
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
        FormRow(text = "First name: ")
        FormRow(text = "Last name: ")
        FormRow(text = "Age: ")
    }
}

@Composable
fun FormRow(text: String) {
    Row(
        modifier = Modifier
            .fillMaxWidth(),
        horizontalArrangement = Arrangement.SpaceBetween,
        verticalAlignment = Alignment.CenterVertically,
    ) {
        Text(text = text, fontSize = 20.sp, fontWeight = FontWeight.Bold)
        OutlinedTextField(value = "", onValueChange = {}, modifier = Modifier.width(240.dp))
    }
}