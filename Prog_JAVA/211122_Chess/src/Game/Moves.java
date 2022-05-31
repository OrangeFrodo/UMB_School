package Game;

import Pieces.Pawn;

public class Moves extends Board {
	
	/*
	public boolean pawnMoves(int prevX, int prevY, int newX, int newY, Class<Board[][]> Board, String color) {
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
	*/
}
