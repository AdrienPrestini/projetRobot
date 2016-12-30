#include "CommandeEvaluerPlot.h"

CommandeEvaluerPlot CommandeEvaluerPlot::maCommande("EVALUERPLOT");

bool CommandeEvaluerPlot::reversable(){
	return true;
}
void CommandeEvaluerPlot::execute() {
	CommandeRobot::robot->evaluerPlot();
}

void CommandeEvaluerPlot::desexecute() {
	
}

Commande* CommandeEvaluerPlot::constructeurVirtuel(string c, LecteurCommande* lc ) {
	return new CommandeEvaluerPlot(c);
}