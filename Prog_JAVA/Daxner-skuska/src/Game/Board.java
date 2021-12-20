package Game;

import Figures.*;

public class Board {
	
	// Atributy
	private Figure[][] Board = new Figure[16][16];
	private int rowX;
	private int columY;
	
	public Board(int r, int c) {
		this.rowX = r;
		this.columY = c;
	}
	
	// Vpisovanie do boardu
	public void toBoard(Figure f) {
		int x = f.getX();
		int y = f.getY();
		
		if(Board[x][y] == null) {
			Board[x][y] = f;
		}
	}
	
	// Validovanie boardu
	public void validateBoard() {
		for (int i = 0; i < rowX; i++) {
			for(int j = 0; j < columY; j++) {
				if (Board[i][j] != null && 
					Board[i][j+1] != null && 
					Board[i][j-1] != null && 
					Board[i+1][j] != null &&
					Board[i-1][j] != null
					) {
					
					String thisColor = Board[i][j].getColor();
					// System.out.print(i + " " + j);
					String h = Board[i][j+1].getColor();
					String d = Board[i][j-1].getColor();
					String p = Board[i+1][j].getColor();
					String l = Board[i-1][j].getColor();
					
					if(thisColor != h && thisColor != d && thisColor != p && thisColor != l) {
						Board[i][j] = null;
					}
					
				}
			}
		}
	}
	
	// Print board
	public void printBoard() {
		for(int i = 0; i < rowX; i++) {
			for(int j = 0; j < columY; j++) {
				if(Board[i][j] != null) {
					System.out.print(Board[i][j].printYourSelf());
				}
				else {
					System.out.print(".");
				}
			}
			System.out.println();
		}
	}
}
