#include "CommandeRepartir.h"

CommandeRepartir CommandeRepartir::maCommande("REPARTIR");

bool CommandeRepartir::reversable(){
	return true;
}
void CommandeRepartir::execute() {
	CommandeRobot::robot->repartir();
}

void CommandeRepartir::desexecute() {
	CommandeRobot::robot->figer();
}


Commande* CommandeRepartir::constructeurVirtuel(string c, LecteurCommande* lc) {
	return new CommandeRepartir(c);
}