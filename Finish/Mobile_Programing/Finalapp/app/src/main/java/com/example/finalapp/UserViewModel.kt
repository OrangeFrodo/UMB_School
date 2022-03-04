package com.example.finalapp

import androidx.compose.runtime.mutableStateOf
import androidx.lifecycle.ViewModel
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase

// Can be called from comp
class UserViewModel: ViewModel() {
    var username = mutableStateOf("")

    // Login function
    fun loginUser(
        email: String,
        password: String
    ) {
        Firebase.auth
            .signInWithEmailAndPassword(email, password)
            .addOnSuccessListener {
                username.value = email
            }
    }

    // Logout function
    fun logOutUser() {
        Firebase.auth
            .signOut()

        username.value = ""
    }
}