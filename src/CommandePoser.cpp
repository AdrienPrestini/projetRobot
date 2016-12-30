#include "CommandePoser.h"

CommandePoser CommandePoser::maCommande("POSER");

bool CommandePoser::reversable(){
	return true;
}

void CommandePoser::execute() {
	obj = CommandeRobot::robot->getObjet();
	CommandeRobot::robot->poser();
}

void CommandePoser::desexecute() {
	CommandeRobot::robot->saisir(obj);
}

Commande* CommandePoser::constructeurVirtuel(string c, LecteurCommande* lc) {
	return new CommandePoser(c);
}