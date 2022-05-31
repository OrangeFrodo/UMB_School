void main() {
  var year = 1998;

  if (year <= 2000) {
    print('Year $year is equal or before 2000');
    // } else if (year > 2000) {
  } else {
    print('Year $year is after 2000');
  }

  for (int month = 1; month <= 12; month = month + 2) {
    print('Odd month: $month');
    print('Even month: ${month + 1}');
  }

  var maxYear = year + 5;
  while (year < maxYear) {
    year++;
    if (year <= 2000) {
      print('Year $year is equal or before 2000');
    } else if (year > 2000) {
      print('Year $year is after 2000');
    }
  }
}
