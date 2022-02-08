package com.example.week4test

import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.foundation.verticalScroll
import androidx.compose.material.Button
import androidx.compose.material.Divider
import androidx.compose.material.Icon
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.MutableState
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp

@Composable
fun MyView() {

}

@Composable
fun View1() {

}

@Composable
fun View2() {

}

/*
@Composable
fun MyView() {
    val names = arrayOf("Sammy", "Sammy", "Sammy")
    val icons = arrayOf(
        R.drawable.ic_baseline_chat_24,
        R.drawable.ic_chat,
        R.drawable.ic_launcher_background
    )

    LazyColumn() {
        items(icons) {
            icon -> Img(icon)
        }
    }
}

@Composable
fun Img(res: Int) {
    Icon(
        painter = painterResource( res ),
        contentDescription = "",
    )
}


@Composable
fun TestView() {
    var chcecked = remember {
        mutableStateOf<Boolean>(false)
    }

    Column() {
        Icon(
            painter = painterResource( R.drawable.ic_chat ),
            contentDescription = "",
            modifier = Modifier
                .clickable { clicked(chcecked) }
                .size(100.dp),
        )
        if(chcecked.value) {
            Icon(
                painter = painterResource(R.drawable.ic_baseline_chat_24),
                contentDescription = "",
            )
        }
    }
}

fun clicked(boolVal: MutableState<Boolean>) {
    boolVal.value = !boolVal.value
}


@Composable
fun TestView() {
    Icon(
        painter = painterResource( R.drawable.ic_baseline_chat_24 ),
        contentDescription = "",
        modifier = Modifier
            .size(100.dp),
        tint = Color.Green
    )
    Spacer(modifier = Modifier.height(20.dp))
    Divider()
    Icon(
        painter = painterResource( R.drawable.ic_chat),
        contentDescription = "",
        modifier = Modifier
            .size(200.dp),
        tint = Color.Cyan
    )
}


@Composable
fun TestView() {
    var info = remember {
        mutableStateOf("---")
    }

    Column() {
        Text(
            text = info.value,
        )
        Something(info)
    }
}

@Composable
fun Something(info: MutableState<String>) {

    Button(onClick = {
        info.value = "${info.value} X"
    }) {
        Text(text = "Ok")
    }
}
 */