package Figures;

public class Rock extends Figure{

	public Rock(int x,int  y,String c) {
		super(x, y, c);
	}

	@Override
	public String printYourSelf() {
		// TODO Auto-generated method stub
		if(this.getColor() == "Black") {
			return "#";
		}
		if(this.getColor() == "White") {
			return "O";
			
		}
		return null;
	}
}
