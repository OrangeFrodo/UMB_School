package Main;

import Miesto.*;
import Zver.*;

public class App {


	public static void main(String[] args) {
		
		// Zver
		Pes p1 = new Pes(0.5f);
		Ryba r1 = new Ryba(5);
		Ryba r2 = new Ryba(6);
		
		// Miesta
		Klietka klietka1 = new Klietka();
		Bazen bazen1 = new Bazen();
		
		
		bazen1.umiestniZviera(p1);
		bazen1.umiestniZviera(r1);
		bazen1.umiestniZviera(r2);
		
		
		klietka1.umiestniZviera(p1);
		
		Zoo zooZah = new Zoo("Bratislavská");
		// zooZah.pridajZviera(p1);
		
		zooZah.pridajMiesto(bazen1);
		
		zooZah.opis();
	}
}
