#include "CommandeAvancer.h"

bool CommandeAvancer::reversable(){
	return true;
}

void CommandeAvancer::execute(){
	robot->avancer(x,y);
	lastX = x;
	lastY = y;
	if(reversable())
		pileCommandes.push(this);
}
void CommandeAvancer::desexecute(){
	lastX = robot->getPosition()->getX();
	lastY = robot->getPosition()->getY();
	robot->avancer(lastX,lastY);
}
Commande* CommandeAvancer::constructeurVirtuel(string d, LecteurCommande* lc){
	if(d == "AVANCER"){
		throw string("Erreur fatale : la commande dans Avancer n'est pas 'AVANCER'. ");
		exit(-1);
	}
	x = lc->readInt();
	y = lc->readInt();

	return this;
}
