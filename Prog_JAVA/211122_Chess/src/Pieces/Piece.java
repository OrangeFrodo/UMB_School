package Pieces;

public abstract class Piece {
	
	private int x;
	private int y;
	private String color;

	public Piece(int posX, int posY, String n) {
		this.x = posX;
		this.y = posY;
		
		this.color = n;
	}
	
	public abstract String printYourSelf();
	
	public String getColor() {
		return color;
	}


	public void setColor(String color) {
		this.color = color;
	}


	public int getX() {
		return x;
	}

	public void setX(int x) {
		this.x = x;
	}

	public int getY() {
		return y;
	}

	public void setY(int y) {
		this.y = y;
	}
	
}
