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
public:
	EtatRobotFige();
	virtual ~EtatRobotFige();

	EtatRobot repartir();
};

#endif /* ETATROBOTFIGE_H_ */
