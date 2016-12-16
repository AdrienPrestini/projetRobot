#include "Commande.h"

Commande::Commande(string name){
	cmdInscrites()[name] = this;
}

map<string, Commande*>& Commande::cmdInscrites(){
	static map<string, Commande*>* cmdInscrites = new map<string,Commande*>(); 
	return *cmdInscrites;
}
Commande* Commande::nouvelleCommande(string d,LecteurCommande lc){
	return cmdInscrites()[d]->constructeurVirtuel(d,lc);
}