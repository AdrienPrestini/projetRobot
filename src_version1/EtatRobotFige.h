
#ifndef ETAT_ROBOT_FIGE_H
#define ETAT_ROBOT_FIGE_H

#include <string>
#include "EtatRobot.h"
class EtatRobotEnRoute;

class EtatRobotFige : public EtatRobot
{

private:
	EtatRobot* etatPrecedent;
	static EtatRobotFige* instance;
public:
	
	virtual EtatRobot* repartir();
	void putEtatPrecedent(EtatRobot* e);
	static EtatRobotFige* getSingleton();
	virtual std::string getNom();

};

#endif

