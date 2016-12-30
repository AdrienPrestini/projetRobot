#include "EtatRobotFige.h"


void EtatRobotFige::putEtatPrecedent(EtatRobot* e){
	etatPrecedent = e;
}

EtatRobotFige* EtatRobotFige::getSingleton(){
	static EtatRobotFige* instance = new EtatRobotFige();
    return instance;
}

EtatRobot* EtatRobotFige::repartir(){
	return etatPrecedent;
}
std::string EtatRobotFige::getNom(){
	return "Etat Figé";
}