#include "CommandeAvancer.h"

bool CommandeAvancer::reversable(){
	return true;
}

void CommandeAvancer::execute(){
	return;
}
void CommandeAvancer::desexecute(){
	return;
}
Commande* CommandeAvancer::constructeurVirtuel(string d, LecteurCommande lc){
	return this;
}
