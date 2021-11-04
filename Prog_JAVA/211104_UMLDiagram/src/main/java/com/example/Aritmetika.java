package com.example;

/**
 * Hello world!
 *
 */
public class Aritmetika {

  // Atributes
  int a;
  int b;

  public void nastav(int a, int b) {
    this.a = a;
    this.b = b;
  }

  // Methods
  public int scitaj() {
    int answer = this.a;
    answer += this.b;
    return answer;
  }

  public int odcitaj(){
      int answer = this.a;
      answer -= this.b;
      return answer;
  }
}
