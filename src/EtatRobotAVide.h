#ifndef _ETAT_ROBOT_A_VIDE_H_
#define _ETAT_ROBOT_A_VIDE_H_

#include "EtatRobotEnRoute.h"

class EtatRobotAVide : public EtatRobotEnRoute {

private:
	static EtatRobotAVide* instance;

public:
	//virtual EtatRobot* tourner();

	//virtual EtatRobot* avancer();

	//virtual EtatRobot* rencontrerPlot();

	static EtatRobotAVide* getSingleton();
};

#endif