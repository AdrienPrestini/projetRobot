#include "CommandePoser.h"

bool CommandePoser::reversable(){
	return true;
}

void CommandePoser::execute(){
	robot->poser();
	
	if(reversable())
		pileCommandes.push(this);
}
void CommandePoser::desexecute(){
	
	robot->saisir(NULL);
}
Commande* CommandePoser::constructeurVirtuel(string d, LecteurCommande* lc){
	if(d == "POSER"){
		throw string("Erreur fatale : la commande dans Poser n'est pas 'POSER'. ");
		exit(-1);
	}
	

	return this;
}
