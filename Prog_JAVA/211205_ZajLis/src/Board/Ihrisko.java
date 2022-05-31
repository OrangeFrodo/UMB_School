package Board;

import java.util.*;

import Zvierata.*;

public class Ihrisko {
	
	private int sizeX;
	private int sizeY;
	
	private String[][] Yard = new String[9][9];
	
	private List<Zajac> listZajac = new ArrayList<Zajac>();  
	private List<Liska> listLiska = new ArrayList<Liska>();  
	
	private int predators;
	private int prey;
	
	public Ihrisko(int x, int y, int numOfPredators, int numOfPrey, int maxAge) {
		this.sizeX = x;
		this.sizeY = y;
		
		this.predators = numOfPredators;
		this.prey = numOfPrey;
		
		generateAnimals(maxAge, numOfPredators, numOfPrey);
	}
	
	public void generateAnimals(int ma, int predators, int prey) {
		
		Random rnd = new Random();
		
		for(int i = 0; i < prey; i++) {
			int x = (int) (Math.random()*(8-2)) + 1;
			int y = (int) (Math.random()*(8-2)) + 1;
			
			Zajac z = new Zajac(x, y, ma);
			z.setPos_x(x);
			z.setPos_y(y);
			
			listZajac.add(z);
			Yard[x][y] = z.returnSelf();
		}
		
		
		for(int i = 0; i < predators; i++) {
			int x = (int) (Math.random()*(8-2)) + 1;
			int y = (int) (Math.random()*(8-2)) + 1;
			
			Liska l = new Liska(x, y, ma);
			l.setPos_x(x);
			l.setPos_y(y);
			
			listLiska.add(l);
			Yard[x][y] = l.returnSelf();
		}
		

	}
	
	public void printMatrix() {
		for(int i = 0; i < sizeX; i++) {
			for (int j = 0; j < sizeY; j++) {
				if(Yard[i][j] != null)
					System.out.print(Yard[i][j]);
				else 
					System.out.print(".");
			}
			System.out.print("\n");
		}
		System.out.print("\n");
	}
	
    public void moveAnimals() {
        for (int i = 0; i < listZajac.size(); i++) {
        	Zver z = listZajac.get(i);
        	
        	int newX = z.getPos_x();
        	int newY = z.getPos_y();
        	Yard[newX][newY] = null;
        	
        	z.moveRnd(sizeX - 1, sizeY - 1);
        	
        	newX = z.getPos_x();
        	newY = z.getPos_y();
        	
        	// System.out.print(newX + " " + newY + "\n");
        	if(newX == 9 || newY == 9) {
            	z.setPos_x(newX - 1);
            	z.setPos_y(newY - 1);
        	}
        	if(newX == -1 || newY == -1) {
            	z.setPos_x(newX + 1);
            	z.setPos_y(newY + 1);
        	}
        	newX = z.getPos_x();
        	newY = z.getPos_y();
        	
        	Yard[newX][newY] = z.returnSelf();
        }
        
        for (int i = 0; i < listLiska.size(); i++) {
        	Zver l = listLiska.get(i);
        	
        	int newX = l.getPos_x();
        	int newY = l.getPos_y();
        	Yard[newX][newY] = null;
        	
        	l.moveRnd(sizeX - 1, sizeY - 1);
        	
        	newX = l.getPos_x();
        	newY = l.getPos_y();
        	
        	// System.out.print(newX + " " + newY + "\n");
        	Yard[newX][newY] = l.returnSelf();
        }
    }
    
    public void eat() {
    	for(int i = 0; i < prey; i++) {
    		int currentZX = listZajac.get(i).getPos_x();
    		int currentZY = listZajac.get(i).getPos_y();
    	
    		
    		for(int j = 0; j < predators; j++) {
        		int currentLX = listLiska.get(j).getPos_x();
        		int currentLY = listLiska.get(j).getPos_y();
        		
        		if(currentLX == currentZX && currentZY == currentLY) {
        			listZajac.remove(i);
        			Yard[currentLX][currentLY] = "L";
        			// System.out.print(listZajac);
        			prey--;
        			// listZajac.clear();
        			
        			
        			// Yard[currentLX][currentLY] = listLiska.get(i).returnSelf();
        			// System.out.print("\n Eaten \n");
        		}
    		}
    	}
    }
    
    public void multiple(int ma) {
    	int newPrey = prey;
    	List<Zajac> listZajacTemp = new ArrayList<Zajac>();  
    	
    	for(int i = 0; i < newPrey; i++) {
    		for(int j = 0; j < newPrey; j++){
    			if (listZajac.get(i) == listZajac.get(j) ) {
    				break;
    			}
        		int currentIX = listZajac.get(i).getPos_x();
        		int currentIY = listZajac.get(i).getPos_y();
        		
        		int currentZX = listZajac.get(j).getPos_x();
        		int currentZY = listZajac.get(j).getPos_y();
        		
        		if(currentIX == currentZX && currentIY == currentZY) {
        			Zajac zajac = new Zajac(currentIX, currentIY, ma);
        			listZajacTemp.add(zajac);
        			prey++;
        			// System.out.print("\n ADD \n");
        			break;
        		}
    		}
    	}
    	
    	listZajac.addAll(listZajacTemp);
    }
    
    public void decrementAge() {
    	for(int i = 0; i < prey; i++) {
    		Zajac z = listZajac.get(i);
    		int vek = z.getMaxVek();
    		z.setMaxVek(vek-1);
    		vek = z.getMaxVek();
    		
    		if(vek <= 0) {
    			listZajac.remove(i);
    			prey--;
    			int x = z.getPos_x();
    			int y = z.getPos_y();
    			
    			Yard[x][y] = ".";
    			
    			// System.out.print("\n DEAD \n");
    		}
    	}
    	for(int i = 0; i < predators; i++) {
    		Liska l = listLiska.get(i);
    		int vek = l.getMaxVek();
    			l.setMaxVek(vek-1);
    		vek = l.getMaxVek();
    		
    		if(vek <= 0) {
    			listLiska.remove(i);
    			predators--;
    			
    			int x = l.getPos_x();
    			int y = l.getPos_y();
    			
    			Yard[x][y] = ".";
    			
    			// System.out.print("\n DEAD \n");
    		}
    	}
    }
    
    public boolean returnEmpty() {
    	if(listZajac.size() == 0)
    		return false;
    	if(listLiska.size() == 0)
    		return false;
    	return true;
    }
}
