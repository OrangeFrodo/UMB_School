package Figures;

public abstract class Figure {
	
	private int x;
	private int y;
	private String color;
	
	public Figure(int posX, int posY,String color) {
		this.x = posX;
		this.y = posY;
		this.color = color;
	}
	
	public abstract String printYourSelf();

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

	public void setColor(String color) {
		this.color = color;
	}

	public String getColor() {
		return color;
	}
}
