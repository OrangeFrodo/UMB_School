// Lotto number generator
import 'dart:math';

class LottoNumbers {
  final int numbers = 7; // how many numbers
  final int maxLottoNumber = 38; // max value for random

  List<int> getRandoms() {
    var randomNumber = Random();
    var allNumbers = <int>[];
    for (var i = 0; i < numbers; i++) {
      int randomizedNumber = randomNumber.nextInt(maxLottoNumber) + 1;
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
  List<int> numbers = LottoNumbers().getRandoms();
  numbers.sort();
  numbers.forEach((element) => print(element));
}