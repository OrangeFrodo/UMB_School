package com.example;

/**
 * Hello world!
 *
 */
public class Book {

  // Atributy
  String name;
  String author;
  int pageNum = 0;

  // Metody
  void changePage(int size) {
    this.pageNum = size;
  }

  void printPage() {
    System.out.println("\n");
    System.out.println(this.pageNum);
  }
}

// 2. Part
class SetBooks {
    Book [] number = new Book[10];

    void setBooksFunction(int i, String name, String autor, int pageNum) {
        number[i] = new Book();
        number[i].author = autor;
        number[i].name = name;

        number[i].changePage(pageNum);
        number[i].printPage();
    } 
}
