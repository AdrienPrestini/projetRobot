#include "CommandeTourner.h"

CommandeTourner CommandeTourner::maCommande("TOURNER");


bool CommandeTourner::reversable(){
	return true;
}
void CommandeTourner::execute() {
	last_direction = CommandeRobot::robot->getDirection();
	CommandeRobot::robot->tourner(new_direction);
}

void CommandeTourner::desexecute() {
	CommandeRobot::robot->tourner(last_direction);
}


Commande* CommandeTourner::constructeurVirtuel(string c, LecteurCommande* lc) {
	return new CommandeTourner(c, lc->readDirection());
}