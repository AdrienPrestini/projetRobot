#include "CommandeDefaire.h"


CommandeDefaire CommandeDefaire::maCommande("DEFAIRE");

bool CommandeDefaire::reversable(){
	return false;
}

void CommandeDefaire::execute() {
	cout << "DEFAIRE la commande précédente" << endl;
	if(!Commande::pileCommandes->empty()){
		Commande* c = Commande::pileCommandes->top();
		Commande::pileCommandes->pop();
		c->desexecute();
	}
}

void CommandeDefaire::desexecute() {
	//STUB
}

Commande* CommandeDefaire::constructeurVirtuel(string c, LecteurCommande* lc) {
	return new CommandeDefaire(c);
}