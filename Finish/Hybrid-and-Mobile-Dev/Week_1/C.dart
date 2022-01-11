// Lotto number generator
import 'dart:math';

class LottoNumbers {
  final int numbers = 7; // how many numbers
  final int maxLottoNumber = 38; // max value for random

  List<int> getRandoms() {
    var randomNumber = Random(); // Random object
    var allNumbers = <int>[];    // All random numbers

    for (var i = 0; i < numbers; i++) {
      int randomizedNumber = randomNumber.nextInt(maxLottoNumber) + 1;  // Genereted number
      // do not generate same number twice
      if (allNumbers.contains(randomizedNumber) == false) {
        allNumbers.add(randomizedNumber);
      } else {
        print('Note: $randomizedNumber was already picked. Ignoring...');
      }
    }
    return allNumbers;
  }
}

void main(List<String> arguments) {
  List<int> numbers = LottoNumbers().getRandoms(); // call getRandoms function in class
  numbers.sort(); // Sort list of numbers
  numbers.forEach((element) => print(element));   // Print every ellement in array
}