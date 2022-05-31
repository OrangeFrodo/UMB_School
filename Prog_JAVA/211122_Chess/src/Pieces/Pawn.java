package Pieces;

public class Pawn extends Piece {

	private boolean firstTimeMoved = true;
	
	public Pawn(int posX, int posY, String color, boolean fm) {
		super(posX, posY, color);
		this.setFirstTimeMoved(fm);
	}

	@Override
	public String printYourSelf() {
		if(this.getColor() == "Black") {
			return "♙";
		}
		if(this.getColor()  == "White") {
			return "♟";
		}
		return null;
	}

	public boolean isFirstTimeMoved() {
		return firstTimeMoved;
	}

	public void setFirstTimeMoved(boolean firstTimeMoved) {
		this.firstTimeMoved = firstTimeMoved;
	}

}
