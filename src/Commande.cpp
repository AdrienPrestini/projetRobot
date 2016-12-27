#include "Commande.h"
#include <iostream>

Commande::Commande(string c){
	cmdInscrites()[c] = this;
}

map<string, Commande*>& Commande::cmdInscrites(){
	static map<string, Commande*>* cmdInscrites = new map<string, Commande*>; 
	return *cmdInscrites;
}
Commande* Commande::nouvelleCommande(string d,LecteurCommande& lc){
	return cmdInscrites()[d]->constructeurVirtuel(d,lc);
}

