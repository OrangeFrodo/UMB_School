package Zver;
import java.util.Date;

import Interfaces.Behajuce;

public class Zirafa extends Zviera implements Behajuce{
	
	private int dlzkaKrku;
	
	public Zirafa(int d) {
		// TODO Auto-generated constructor stub
		// super (h);
		this.dlzkaKrku = d;
	}
	
	
	@Override
	public void bez() {
		// TODO Auto-generated method stub
		System.out.print("Zirafa bezi");
	}
	
	public String opis() {
		return "Zirafa s krkom dlhym " + this.dlzkaKrku;
	}

}
