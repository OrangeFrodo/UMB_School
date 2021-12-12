package Zver;
import java.util.Date;

import Interfaces.Plavajuce;

public class Ryba extends Zviera implements Plavajuce{

	private int vydrz;
	
	public Ryba( int v) {
		// TODO Auto-generated constructor stub
		// super(h);
		this.vydrz = v;
	}
	
	@Override
	public void plavaj() {
		// TODO Auto-generated method stub
		System.out.print("Ryba plava");
	}
	
	public String opis() {
		return "Ryba s vydrzou " + this.vydrz;
	}

}
