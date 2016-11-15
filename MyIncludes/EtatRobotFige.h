/*
 * EtatRobotFige.h
 *
 *  Created on: 14 nov. 2016
 *      Author: epu
 */

#ifndef ETATROBOTFIGE_H_
#define ETATROBOTFIGE_H_

#include "EtatRobot.h"
class EtatRobotFige:public EtatRobot {
private:
	static EtatRobotFige* singleton;
public:
	EtatRobotFige();
	virtual ~EtatRobotFige();

	EtatRobot* repartir();

	
	static EtatRobotFige* getSingleton();
};

#endif /* ETATROBOTFIGE_H_ */
