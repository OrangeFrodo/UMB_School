package Zvierata;

import java.util.Random;


public abstract class Zver {

	private int maxVek;
	SmerChodze smer = SmerChodze.DOLE;
	
	private int pos_x;
	private int pos_y;
	
	public Zver(int x, int y, int v) {
		this.pos_x = x;
		this.pos_y = y;
		
		this.maxVek = v;
	}

	public abstract String returnSelf(); 
	
    public void moveRnd(int maxX, int maxY) {
    	Random rnd = new Random();
    	boolean rndNext = rnd.nextBoolean();
    	
    	int thisX = this.getPos_x();
    	int thisY = this.getPos_y();
    	
        if (smer == SmerChodze.DOLE && !rndNext) {

            if (thisX == maxX - 1 || thisX == maxX) {
                smer = SmerChodze.HORE;
            }
            if (thisY == maxY - 1 || thisY == maxY){
            	this.setPos_y(thisY - 1); 
            } 
            else {
                this.setPos_x(thisX + 1);
                this.setPos_y(thisY + 1); 
                
            }
            return;
        }
        if (smer == SmerChodze.HORE && !rndNext) {

            if (thisX == 1) {
                smer = SmerChodze.DOLE;
            }
            if (thisY == maxY - 1 || thisY == maxY){
            	this.setPos_y(thisY - 1); 
            }
            else {
            	this.setPos_x(thisX - 1);
            	this.setPos_y(thisY + 1); 
            }
            return;
        }
        if (smer == SmerChodze.DOLE && rndNext) {
            if (thisX == maxX-1 || thisX == maxX) {
                smer = SmerChodze.HORE;
            }
            if (thisY == 1){
            	this.setPos_y(thisY + 1); 
            }
            else {
                this.setPos_x(thisX + 1);
                this.setPos_y(thisY - 1); 
            }
            return;
        }
        if (smer == SmerChodze.HORE && rndNext) {
            if (thisX == 1) {
                smer = SmerChodze.DOLE;
            }
            if (thisY == 1){
            	this.setPos_y(thisY + 2); 
            }
            else {
            	this.setPos_x(thisX - 1);
            	this.setPos_y(thisY - 1); 
            }
            return;
        }
    }
	
	public int getPos_x() {
		return pos_x;
	}

	public void setPos_x(int pos_x) {
		this.pos_x = pos_x;
	}

	public int getPos_y() {
		return pos_y;
	}

	public void setPos_y(int pos_y) {
		this.pos_y = pos_y;
	}

	public int getMaxVek() {
		return maxVek;
	}

	public void setMaxVek(int maxVek) {
		this.maxVek = maxVek;
	}

	
}
