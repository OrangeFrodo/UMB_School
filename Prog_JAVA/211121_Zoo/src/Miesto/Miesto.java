package Miesto;

import java.util.ArrayList;
import java.util.List;

import Zver.*;
import Interfaces.*;

public abstract class Miesto {

	public Zviera zver;	// Klietka
	public List<Plavajuce> zverVBazene = new ArrayList<>();	// Bazen

	public abstract String opis();
	
	public Zviera getZviera() {
		return zver;
	}
}
