// Define a function.
import 'dart:convert';
import 'dart:io';
import 'dart:math';

void printInteger(int aNumber) {
  print(sqrt(aNumber).round()); // Round, sqrt
}

// This is where the app starts executing.
void main() {
  for (var i = 0; i < 7; i++) {
    var number = i * 50; // Declare and initialize a variable.
    printInteger(number); // Call a function.
  }

  print("Well, this is input \n");

  // Scanning number
  int? n = int.parse(stdin.readLineSync()!);

  for (var i = 0; i < 5; i++) {
    printInteger(n + (i * 50));
  }
}
