import java.util.*;


public class Person {

	private String fName;
	private String lName;
	
	public Person(String f, String l) {
		this.fName = f;
		this.lName = l;
	}
	
	/*
	@Deprecated
	void printInf() {
		System.out.print(this.fName + ", " + this.lName);
	}
	*/
	
	// New method GETER
	public String returnLName() {
		return this.lName;
	}
	
	public void setLName(String l) {
		this.lName = l;
	}
	
	@Override
	public boolean equals(Object o) {
		if (this == o) return true;
		if (this == null || getClass() != o.getClass()) return false;
		Person osoba = (Person) o;
		return 	Objects.equals(fName, osoba.fName) &&
				Objects.equals(lName, osoba.lName);
				
	}
	
	@Override
	public int hashCode() {
		return Objects.hash(fName, lName);
	}
	
	@Override
	public String toString() {
		return "Osoba "
				+ "{ meno: " + this.fName
				+ "{ priezvisko: " + this.lName 
				+ "};"
			;
	}
	
	
	
}
