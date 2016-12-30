#include "CommandeSaisir.h"
#include "Objet.h"
#include <iostream>
CommandeSaisir CommandeSaisir::maCommande("SAISIR");

bool CommandeSaisir::reversable(){
	return true;
}

void CommandeSaisir::execute() {
	Objet* o = new Objet(poids);
	CommandeRobot::robot->saisir(o);
}

void CommandeSaisir::desexecute() {
	CommandeRobot::robot->poser();
}


Commande* CommandeSaisir::constructeurVirtuel(string c, LecteurCommande* lc) {
	return new CommandeSaisir(c, lc->readInt());
}