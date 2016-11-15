/*
 * EtatRobot.h
 *
 *  Created on: 14 nov. 2016
 *      Author: Adrien Prestini & Antoine Rabenandrasana
 *      Version : version 1
 */

#ifndef ETATROBOTENROUTE_H_
#define ETATROBOTENROUTE_H_

#include <stdexcept>
#include <cstddef>
#include <string>

#include "Plot.h"
#include "Objet.h"
#include "EtatRobot.h"

class EtatRobotEnRoute:public EtatRobot{
private:
	
public:
	virtual EtatRobot* figer();

	
};

#endif /* ETATROBOTENROUTE_H_ */
