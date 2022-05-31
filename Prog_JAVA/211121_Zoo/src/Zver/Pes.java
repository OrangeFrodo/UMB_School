package Zver;

import Interfaces.Behajuce;
import Interfaces.Plavajuce;

import java.util.Date;

public class Pes extends Zviera implements Behajuce, Plavajuce {
	private float poslusnost;
	
	public Pes(float p) {
		// TODO Auto-generated constructor stub
		// super(h);
		this.poslusnost = p;
	}

	@Override
	public void plavaj() {
		// TODO Auto-generated method stub
		System.out.print("Pes plava");
	}

	@Override
	public void bez() {
		// TODO Auto-generated method stub
		System.out.print("Pes bezi");
	}
	
	public String opis() {
		return "Pes s poslusnostou " + poslusnost;
	}
	
}
