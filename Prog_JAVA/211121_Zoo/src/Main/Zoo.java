package Main;

import java.util.*;


import Miesto.*;
import Interfaces.*;

public class Zoo {
	
	private String nazov;
	private List<Miesto> miesto = new ArrayList<>();
	
	// 2
	private List<Behajuce> behajuce = new LinkedList<>();
	private List<Lietajuce> lietajuce = new LinkedList<>();
	private List<Plavajuce> plavajuce = new LinkedList<>();
	
	public Zoo(String n) {
		this.nazov = n;
	
	}
	
	/*
	void pridajBazen() {
		miesto.add(new Bazen());
	}
	
	void pridajKlietku() {
		miesto.add(new Klietka());
	}
	
	private void kontrolaDuplicity(Zviera z) {
		for(Miesto m : miesto)
	}
	
	void umiestniZvieraDoBazenu(int por, Plavajuce p) {
		for (Miesto x : miesto) {
			if (x instanceof Bazen) {
				if (por == 0) {
					((Bazen) x).umiestniZviera(p);
					return;
				}
				por--;
			}
		}
	}
	
	
	// Funguje len pre klietku
	
	void umiestniZvieraDoKlietky(int por, Behajuce p) {
		for (Miesto x : miesto) {
			if (x instanceof Bazen) {
				if (por == 0) {
					((Klietka) x).umiestniZviera(p);
					return;
				}
				por--;
				}
			}
		}
	}
	*/
	
	
	public void pridajMiesto(Miesto m) {
		
		for(Miesto x: miesto) {
			if(x.getZviera() == m.getZviera()) {
				throw new RuntimeException("Zviera" + m.getZviera() + " uz mame!");
			} 
		}
		
		miesto.add(m);
		
		if(m.getZviera() instanceof Plavajuce) {
			plavajuce.add((Plavajuce) m.getZviera());
		}
		
		// listKdelietame.add((Lietajuce) m.zvieratka);
		/*
		if(m.zvieratka != null) {
			listKdeplavame.add((Zviera) m.zvieratka);
		} if(m.zver != null) {
			listKdebezime.add((Behajuce) m.zver);
		} else {
			System.out.print("Trash");
		}
		*/
			
	} 

	public void opis() {
		System.out.println("Tu máme Zoo " + this.nazov );
		System.out.println("Je tu ");
		for(Miesto m : miesto) {
			System.out.println(m.opis());
		}
	}

}
