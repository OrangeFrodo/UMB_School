package Pieces;

public class Knight extends Piece {

	public Knight(int posX, int posY, String color) {
		super(posX, posY, color);
		// TODO Auto-generated constructor stub
	}

	@Override
	public String printYourSelf() {
		// TODO Auto-generated method stub
		if(this.getColor() == "Black") {
			return "♘";
		}
		if(this.getColor() == "White") {
			return "♞";
		}
		return null;
	}

}
