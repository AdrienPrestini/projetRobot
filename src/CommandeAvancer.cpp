#include "CommandeAvancer.h"

CommandeAvancer CommandeAvancer::maCommande("AVANCER");

bool CommandeAvancer::reversable(){
	return true;
}

void CommandeAvancer::execute(){
	
	lastX = x;
	lastY = y;
	CommandeRobot::robot.avancer(x,y);
	// if(reversable())
	// 	pileCommandes.push(this);
}
void CommandeAvancer::desexecute(){
	CommandeRobot::robot.avancer(lastX,lastY);
}
Commande* CommandeAvancer::constructeurVirtuel(string d, LecteurCommande& lc){
	return new CommandeAvancer(d, lc.readInt(), lc.readInt() );
}
