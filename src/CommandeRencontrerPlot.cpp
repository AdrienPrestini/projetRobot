#include "CommandeRencontrerPlot.h"

CommandeRencontrerPlot CommandeRencontrerPlot::maCommande("RENCONTRERPLOT");

bool CommandeRencontrerPlot::reversable(){
	return true;
}

void CommandeRencontrerPlot::execute() {
	Plot * p = new Plot(hauteur);
	CommandeRobot::robot->rencontrerPlot(p);
}

void CommandeRencontrerPlot::desexecute() {
	int i = 0;
}

Commande* CommandeRencontrerPlot::constructeurVirtuel(string c, LecteurCommande* lc) {
	return new CommandeRencontrerPlot(c, lc->readInt());
}