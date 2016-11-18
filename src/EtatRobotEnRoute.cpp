#include "EtatRobotEnRoute.h"
#include "EtatRobotFige.h"

EtatRobot* EtatRobotEnRoute::figer(){
	EtatRobotFige::getSingleton()-> putEtatPrecedent(this);
	return EtatRobotFige::getSingleton();
}