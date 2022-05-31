package Game;

import Figures.*;

public class App {

	public static void main(String[] args) {
		// Board
		Board b1 = new Board(16, 16);
		
		// Kamene
		Rock r1 = new Rock(4, 4, "Black");
		Rock r2 = new Rock(4, 5, "White");
		Rock r3 = new Rock(4, 3, "White");
		Rock r4 = new Rock(3, 4, "White");
		Rock r5 = new Rock(5, 4, "White");
		
		b1.printBoard();
		
		// Vkladanie kameňov
		b1.toBoard(r1);
		b1.toBoard(r2);
		b1.toBoard(r3);
		b1.toBoard(r4);
		b1.toBoard(r5);
		
		// System.out na rozdelenie boardov
		System.out.println();
		b1.printBoard();
		b1.validateBoard();
		
		System.out.println();
		b1.printBoard();
	}

}
