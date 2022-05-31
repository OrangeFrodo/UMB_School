package Miesto;

import Interfaces.*;
import Zver.*;

public class Bazen extends Miesto {
	
	
	public void umiestniZviera (Plavajuce p) {
		zverVBazene.add((Plavajuce) p);
	}
	
	// Cvicenie
	@Override
	public String opis() {
		StringBuffer sb = new StringBuffer();
		for(Plavajuce p : zverVBazene) {
			sb.append(", " + ((Zviera)p).opis());
		}
		
		String ryby = sb.toString();
		if(ryby.length() > 1) {
			ryby = ryby.substring(2);
		}
		
		return "bazen: " + sb.toString();
	}
	
	// Moje riesenie
	/*
	public String opis() {
		if (zverVBazene == null) {
			return "Prazdna klietka";
		} else {
			System.out.print("Bazen kde si ");
			
			for(int i = 0; i < zverVBazene.size(); i++) {
				Zviera z1 = zverVBazene.get(i);
				System.out.print(z1.opis() + ", "); 
			}
			
			return "plávajú spoločne.";
		}
	}
	*/
		
}
