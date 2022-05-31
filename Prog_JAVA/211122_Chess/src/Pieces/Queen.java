package Pieces;

public class Queen extends Piece{

	public Queen(int posX, int posY, String color) {
		super(posX, posY, color);
	}
	
	@Override
	public String printYourSelf() {
		if(this.getColor()  == "Black") {
			return "♕";
		}
		if(this.getColor() == "White") {
			return "♛";
		}
		return null;
	}
}
