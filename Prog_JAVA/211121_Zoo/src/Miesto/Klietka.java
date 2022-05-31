package Miesto;

import Interfaces.*;
import Zver.*;

public class Klietka extends Miesto {
	
	public void umiestniZviera (Lietajuce l) {
		this.zver = (Zviera)l;
	}
	
	public void umiestniZviera (Behajuce b) {
		this.zver = (Zviera)b;
	}
	
	@Override
	public String opis() {
		if (zver == null) {
			return "Prazdna klietka";
		} else {
			return "V tejto klietke je " + zver.opis();
		}
	}
	
}
