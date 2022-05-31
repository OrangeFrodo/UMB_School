
public class App {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Person o1 = new Person("Jakub", "Daxner");
		Person o2 = new Person("Daniel", "Anton");
		
		String printIt = o1.returnLName();
		System.out.println(printIt);
		
		o1.setLName("Jozef");
		printIt = o1.returnLName();
		System.out.println(printIt);
		
		
		
	}

}
