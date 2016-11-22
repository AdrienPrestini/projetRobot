#include "EtatRobotFige.h"

EtatRobotFige* EtatRobotFige::instance = new EtatRobotFige;

void EtatRobotFige::putEtatPrecedent(EtatRobot* e){
	etatPrecedent = e;
}

EtatRobotFige* EtatRobotFige::getSingleton(){
	return instance;
}

EtatRobot* EtatRobotFige::repartir(){
	return etatPrecedent;
}
std::string EtatRobotFige::getNom(){
	return "Etat Figé";
}