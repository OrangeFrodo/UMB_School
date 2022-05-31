package com.example.week5

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.*
import androidx.compose.material.*
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.navigation.NavController
import androidx.navigation.NavHostController
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import com.example.week5.ui.theme.Week5Theme
import kotlinx.coroutines.launch

@Composable
fun MainView() {

    val navControler = rememberNavController()
    val scState = rememberScaffoldState( rememberDrawerState(DrawerValue.Closed) )

    Scaffold(
        topBar = { MyTopBar(scState) },
        scaffoldState = scState,
        bottomBar = { MyBottomBar(navControler) },
        drawerContent = { MyDrawerLayout(navControler, scState) }
    ) {
        NavHost(navController = navControler, startDestination = "home") {
            composable(route = "hearing") {
                /*
                Box(modifier = Modifier
                    .fillMaxWidth()
                    .background(Color.Cyan)
                )
                 */
                Text(text = "Hearing")
            }
            composable(route = "home") {
                /*
                Box(modifier = Modifier
                    .fillMaxWidth()
                    .background(Color.LightGray)
                )
                 */
                Text(text = "Home")
            }
            composable(route = "lock") {
                /*
                Box(modifier = Modifier
                    .fillMaxWidth()
                    .background(Color.Yellow)
                )
                 */
                Text(text = "Lock")
            }
        }
    }
}

@Composable
fun MyDrawerLayout(navControler: NavHostController, scState: ScaffoldState) {
    // Coroutine
    val scope = rememberCoroutineScope()

    Column(
        modifier = Modifier
            /*
            .width(200.dp)
            .height(400.dp)
                 */
            .fillMaxSize()
            .background(Color.Red)
    ) {
        Row() {
            Text(
                text = "Wifi settings",
                fontSize = 24.sp,
                modifier = Modifier
                    .clickable {
                        navControler.navigate("hearing")
                        scope.launch {
                            scState.drawerState.close()
                        }
                    }
            )
        }
    }
}

@Composable
fun MyBottomBar(navController: NavHostController) {
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .height(50.dp)
            .background(Color(0xFFD8A24)),
        horizontalArrangement = Arrangement.SpaceEvenly,
        verticalAlignment = Alignment.CenterVertically
    ) {
        // Icon hearing nav
        Icon(
            painter = painterResource(R.drawable.ic_baseline_hearing_24),
            contentDescription = "Icon",
            modifier = Modifier
                .clickable {
                    navController.navigate("hearing")
                }
        )
        // Icon home nav
        Icon(
            painter = painterResource(R.drawable.ic_baseline_home_24),
            contentDescription = "Icon",
            modifier = Modifier
                .clickable {
                    navController.navigate("home")
            }
        )
        // Icon locked nav
        Icon(
            painter = painterResource(R.drawable.ic_baseline_https_24),
            contentDescription = "Icon",
            modifier = Modifier
                .clickable {
                    navController.navigate("lock")
            }
        )
    }
}

@Composable
fun MyTopBar(scState: ScaffoldState) {
    // Coroutine
    val scope = rememberCoroutineScope()

    // Top bar
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .height(60.dp)
            .background(Color(0xFFD8A24)),
        horizontalArrangement = Arrangement.SpaceEvenly,
        verticalAlignment = Alignment.CenterVertically
    ) {

        // Text to change outlined text field
        var text by remember {
            mutableStateOf("")
        }

        // Hamburger menu
        Icon(
            painter = painterResource(R.drawable.ic_baseline_menu_24),
            contentDescription = "Icon",
            modifier = Modifier.clickable {
                scope.launch {
                    scState.drawerState.open()
                }
            }
        )

        // Search
        OutlinedTextField(
            value = text,
            onValueChange = {
                text = it
            },
            trailingIcon = {
                Icon(
                    painter = painterResource(R.drawable.ic_baseline_search_24),
                    contentDescription = ""
                )
            },
            label = { Text("Label") },
        )
    }
}

@Composable
fun MainContent() {
    // Content
    Column(
        modifier = Modifier
            .fillMaxSize()
            .background(Color(0xFFD8A24))
    ) {
        Text("HEEEEEE")
    }
}