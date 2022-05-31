package Game;

import java.util.*;
import Game.*;
import Pieces.*;

public class Board{
	
	@SuppressWarnings("unchecked")
	private Piece[][] Board = new Piece[8][8];
	
	private int xSize = 8;
	private int ySize = 8;
			
	
	// GAME METHODS
	public boolean changePosition(int prevX, int prevY, int newX, int newY, String color, String figure) {
		
		boolean figureUpFront = false;
		boolean nonIleagalMove = false;
		
		// PAWN
		if(Board[prevX][prevY] != null && 
				prevY == newY &&
				figure == "P" ) 
		{	
			
			Pawn pawn = (Pawn) Board[prevX][prevY];
			
			if(pawn.isFirstTimeMoved()) {
				
				if(prevX + 2 <  newX && color == "White") {
					throw new Error();
				} if (prevX - 2 >  newX && color == "Black") {
					throw new Error();
				} else {
					pawn.setFirstTimeMoved(false);
					Board[prevX][prevY].setX(newX);
					Board[prevX][prevY].setY(newY);
					
					// Board[newX][newY] = new Pawn(newX, newY, color);
					Board[newX][newY] = Board[prevX][prevY];
					Board[prevX][prevY] = null;
					return true;
				}
			}
			
			if(!pawn.isFirstTimeMoved()) {
				
				if(prevX + 1 <  newX && color == "White") {
					throw new Error();
				} if (prevX - 1 >  newX && color == "Black") {
					throw new Error();
				} else {
					Board[prevX][prevY].setX(newX);
					Board[prevX][prevY].setY(newY);
					
					// Board[newX][newY] = new Pawn(newX, newY, color);
					Board[newX][newY] = Board[prevX][prevY];
					Board[prevX][prevY] = null;
					
					return true;
				}
			}
		}
		
		// QUEEN 
		if(Board[prevX][prevY] != null && 
				figure == "Q" && (
				(prevX - prevY) == (newX - newY) ||
				(prevX + prevY) == (newX + newY) ||
				newX == prevX ||
				newY == prevY
				))
		{
			nonIleagalMove = true;
			
			if((prevX - prevY) == (newX - newY)) {
				// 7 4 == 5 2
				//
				//
				for(int i = prevX; i >= newX; i--) {
					for(int j = prevY; j >= newY; j--) {
						if(Board[i][j] != null && ((prevX - prevY) == (i - j)) && (i != prevX && j != prevY)) {
							figureUpFront = true;
							throw new Error();
						}
					}
				}
			}

			if((prevX + prevY) == (newX + newY)) {
				for(int i = prevX; i >= newX; i--) {
					// System.out.print("\n IN HERE i \n" + i );
					for(int j = prevY; j <= newY; j++) {
						// System.out.print("\n IN HERE j \n" + i + " " + j);
						if(Board[i][j] != null && ((prevX + prevY) == (i + j)) && (i != prevX && j != prevY)) {
							figureUpFront = true;
							throw new Error();
							// System.out.print("\n WRONG \n");
						}
					}
				}
			}
			

			if((prevX + prevY) == (newX + newY)) {
				for(int i = prevX; i <= newX; i++) {
					// System.out.print("\n IN HERE i \n" + i );
					for(int j = prevY; j >= newY; j--) {
						// System.out.print("\n IN HERE j \n" + i + " " + j);
						if(Board[i][j] != null && ((prevX + prevY) == (i + j)) && (i != prevX && j != prevY)) {
							figureUpFront = true;
							throw new Error();
							// System.out.print( i + " " + j + "\n WRONG \n");
						}
					}
				}
			}

			if((prevX - prevY) == (newX - newY)) {
				for(int i = prevX; i <= newX; i++) {
					// System.out.print("\n IN HERE i \n" + i );
					for(int j = prevY; j <= newY; j++) {
						// System.out.print("\n IN HERE j \n" + i + " " + j);
						if(Board[i][j] != null && ((prevX - prevY) == (i - j)) && (i != prevX && j != prevY)) {
							figureUpFront = true;
							throw new Error();
							// System.out.print( i + " " + j + "\n WRONG \n");
						}
					}
				}
			}
			
			if(newX == prevX) {
				if(newY > prevY)
					for(int i = prevX; i <= newX; i++)
						if(Board[prevX][i] != null) {
							figureUpFront = true;
							throw new Error();
						}

				if(newY < prevY)
					for(int i = prevX; i >= newX; i--)
						if(Board[prevX][i] != null) {
							figureUpFront = true;
							throw new Error();
						}
				
			}
			
			if(newY == prevY) {
				if(newX > prevX)
					for(int i = prevY; i <= newY; i++)
						if(Board[prevX][i] != null){
							figureUpFront = true;
							throw new Error();
						}
				if(newX < prevX)
					for(int i = prevY; i >= newY; i--)
						if(Board[prevX][i] != null) {
							figureUpFront = true;
							throw new Error();
						}
				
				System.out.print("\n 5 \n");
			}
			
			if (!figureUpFront && nonIleagalMove) {
				Board[prevX][prevY].setX(newX);
				Board[prevX][prevY].setY(newY);
				
				Board[newX][newY] = Board[prevX][prevY];
				Board[prevX][prevY] = null;
				
				return true;
			}
			
			else {
				throw new Error();
			}
		} else {
			throw new Error();
		}
	}
	
	public void fillBoard() { 
		for(int i = 0; i < xSize; i++) {
			for(int j = 0; j < ySize; j++) {
				
				
				// PAWNS
				if(i == 1) {
					Pawn pawn = new Pawn(i, j, "White", true);
					Board[i][j] = pawn;
				}
				if(i == 6) {
					Pawn pawn = new Pawn(i, j, "Black", true);
					Board[i][j] = pawn;
				}
				
				
				// QUEENS
				if(i == 0  && j == 3) {
					Queen queen = new Queen(i, j, "White");
					Board[i][j] = queen;
				}
				if(i == 7  && j == 4) {
					Queen queen = new Queen(i, j, "Black");
					Board[i][j] = queen;
				}
				
				
				// KINGS
				if(i == 0  && j == 4) {
					King king = new King(i, j, "White");
					Board[i][j] = king;
				}
				if(i == 7  && j == 3) {
					King king = new King(i, j, "Black");
					Board[i][j] = king;
				}
				
				
				// ROOKS
				if((i == 0  && j == 0) || (i == 0 && j == 7)) {
					Rook rook = new Rook(i, j, "White");
					Board[i][j] = rook;
				}
				if((i == 7  && j == 0) || (i == 7 && j == 7)) {
					Rook rook = new Rook(i, j, "Black");
					Board[i][j] = rook;
				}
				
				
				// KNIGHTS
				if((i == 0  && j == 1) || (i == 0 && j == 6)) {
					Knight knight = new Knight(i, j, "White");
					Board[i][j] = knight;
				}
				if((i == 7  && j == 1) || (i == 7 && j == 6)) {
					Knight knight = new Knight(i, j, "Black");
					Board[i][j] = knight;
				}
				
				
				// BISHOP
				if((i == 0  && j == 2) || (i == 0 && j == 5)) {
					Bishop bishop = new Bishop(i, j, "White");
					Board[i][j] = bishop;
				}
				if((i == 7  && j == 2) || (i == 7 && j == 5)) {
					Bishop bishop = new Bishop(i, j, "Black");
					Board[i][j] = bishop;
				}
			}
		}
	}
	
	public void printBoard() {
		for(int i = 0; i < xSize; i++) {
			for(int j = 0; j < ySize; j++) {
				// WHITE
				if(Board[i][j] != null) {
					System.out.print(Board[i][j].printYourSelf());
				}
				else {
					System.out.print(" ");
				}
			}
			System.out.println();
		}
	}
}
