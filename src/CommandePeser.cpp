#include "CommandePeser.h"

CommandePeser CommandePeser::maCommande("PESER");

bool CommandePeser::reversable(){
	return false;
}

void CommandePeser::execute() {
	CommandeRobot::robot->peser();
}

void CommandePeser::desexecute() {
	
}

Commande* CommandePeser::constructeurVirtuel(string c, LecteurCommande* lc) {
	return new CommandePeser(c);
}