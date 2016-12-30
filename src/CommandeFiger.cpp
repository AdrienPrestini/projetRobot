#include "CommandeFiger.h"

CommandeFiger CommandeFiger::maCommande("FIGER");

bool CommandeFiger::reversable(){
	return true;
}

void CommandeFiger::execute() {
	CommandeRobot::robot->figer();
}

void CommandeFiger::desexecute() {
	CommandeRobot::robot->repartir();
}

Commande* CommandeFiger::constructeurVirtuel(string c, LecteurCommande* lc) {
	return new CommandeFiger(c);
}