package Game;

import java.io.*;
import java.util.*;

public class App {


	public static void main(String[] args) throws IOException, InterruptedException {
		// TODO Terminal loading
		// BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		
		boolean finishBool = true;
		
		Board chessBoard = new Board();
		chessBoard.fillBoard();
		
		while(finishBool) {
			chessBoard.printBoard();
			finishBool = chessBoard.changePosition(1, 4, 2, 4, "White", "P");
			System.out.print("\n");
			
			//Thread.sleep(4000);
			
			chessBoard.printBoard();
			finishBool = chessBoard.changePosition(2, 4, 3, 4, "White", "P");
			System.out.print("\n");
			
			/*
			chessBoard.printBoard();
			chessBoard.changePosition(1, 2, 3, 2, "White", "P");
			System.out.print("\n");
			
			//Thread.sleep(4000);
			
			
			chessBoard.printBoard();
			chessBoard.changePosition(6, 3, 4, 3, "Black", "P");
			System.out.print("\n");
			
			//Thread.sleep(4000);
			
			
			chessBoard.printBoard();
			chessBoard.changePosition(0, 3, 1, 2, "White", "Q");
			System.out.print("\n");
			*/
			//Thread.sleep(4000);
			
			chessBoard.printBoard();
			finishBool = chessBoard.changePosition(0, 3, 1, 4, "White", "Q");
			System.out.print("\n");
			
			chessBoard.printBoard();
			finishBool = false;
		}
		
	}

}
