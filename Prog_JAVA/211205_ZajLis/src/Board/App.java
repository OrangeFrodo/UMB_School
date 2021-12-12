package Board;

public class App {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		Ihrisko ihr = new Ihrisko(8, 8, 2, 4, 5);
		boolean extinction = true;
		
		while(extinction) {
			ihr.printMatrix();
			ihr.moveAnimals();
			
			Thread.sleep(1000);
			ihr.multiple(5);
			
			Thread.sleep(1000);
			ihr.eat();
			
			Thread.sleep(1000);
			ihr.decrementAge();
			
			extinction = ihr.returnEmpty();
		}
	}

}
