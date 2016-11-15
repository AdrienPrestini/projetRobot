/*
 * EtatRobotFige.cpp
 *
 *  Created on: 14 nov. 2016
 *      Author: epu
 */

#include "MyIncludes/EtatRobotFige.h"


EtatRobotFige* EtatRobotFige::singleton = new EtatRobotFige;


EtatRobot* EtatRobotFige::repartir(){

	
}
EtatRobotFige* EtatRobotFige::getSingleton(){
	return singleton;
}