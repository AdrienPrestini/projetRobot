#include "EtatRobotFige.h"

EtatRobotFige* EtatRobotFige::instance = new EtatRobotFige;

void EtatRobotFige::putEtatPrecedent(EtatRobotEnRoute* e){
	etatPrecedent = e;
}

EtatRobotFige* EtatRobotFige::getSingleton(){
	return instance;
}
std::string EtatRobotFige::getNom(){
	return "Etat Figé";
}