/*
 * EtatRobotFige.h
 *
 *  Created on: 14 nov. 2016
 *      Author: epu
 */

#ifndef ETATROBOTFIGE_H_
#define ETATROBOTFIGE_H_

#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"
class EtatRobotFige:public EtatRobot {
private:
	EtatRobotEnRoute* etatPrecedent;
	static EtatRobotFige* singleton;
public:

	EtatRobot* repartir();


	void setEtatPrecedent(EtatRobotEnRoute* e);
	static EtatRobotFige* getSingleton();

	EtatRobotFige(){}
	virtual ~EtatRobotFige(){}
};

#endif /* ETATROBOTFIGE_H_ */
