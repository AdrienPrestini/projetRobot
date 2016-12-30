#include "CommandeAvancer.h"

CommandeAvancer CommandeAvancer::maCommande("AVANCER");

bool CommandeAvancer::reversable(){
	return true;
}

void CommandeAvancer::execute(){
	
	lastX = CommandeRobot::robot->getPosition()->getX();
	lastY = CommandeRobot::robot->getPosition()->getY();
	CommandeRobot::robot->avancer(x,y);
	if(reversable())
		Commande::pileCommandes->push(this);
}
void CommandeAvancer::desexecute(){
	int tmpX =CommandeRobot::robot->getPosition()->getX();
	int tmpY =CommandeRobot::robot->getPosition()->getY();
	CommandeRobot::robot->avancer(lastX,lastY);
	lastX=tmpX;
	lastY=tmpY;
	if(reversable())
		Commande::pileCommandes->push(this);	
}
Commande* CommandeAvancer::constructeurVirtuel(string d, LecteurCommande* lc){
	return new CommandeAvancer(d, lc->readInt(), lc->readInt() );
}
