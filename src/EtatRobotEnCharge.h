#ifndef _ETAT_EN_CHARGE_H_
#define _ETAT_EN_CHARGE_H_

#include "EtatRobotEnRoute.h"
#include <string>

class EtatRobotEnCharge : public EtatRobotEnRoute {
private:
	static EtatRobotEnCharge* instance;

public:
	EtatRobot* avancer();
	EtatRobot* peser();
	EtatRobot* rencontrerPlot();
	
	static EtatRobotEnCharge* getSingleton();
	virtual std::string getNom();
};

#endif