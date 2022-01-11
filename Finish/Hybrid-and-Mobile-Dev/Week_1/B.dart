import 'dart:math';

main() {
  var randomNumber = Random();
  for (var i = 0; i < 5; i++) {
    print(randomNumber.nextInt(1000));
  }
}