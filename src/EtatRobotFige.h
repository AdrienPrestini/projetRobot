
#ifndef ETAT_ROBOT_FIGE_H
#define ETAT_ROBOT_FIGE_H

#include "EtatRobot.h"
class EtatRobotEnRoute;

class EtatRobotFige : public EtatRobot
{

private:
	EtatRobotEnRoute* etatPrecedent;
	static EtatRobotFige* instance;
public:
	
	//EtatRobot* repartir();
	void putEtatPrecedent(EtatRobotEnRoute* e);
	static EtatRobotFige* getSingleton();


};

#endif

