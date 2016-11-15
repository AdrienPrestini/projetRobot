/*
 * EtatRobotFige.cpp
 *
 *  Created on: 14 nov. 2016
 *      Author: epu
 */

#include "MyIncludes/EtatRobotFige.h"


EtatRobotFige* EtatRobotFige::singleton = new EtatRobotFige;
EtatRobotFige::EtatRobotFige() {
	// TODO Auto-generated constructor stub

}

EtatRobotFige::~EtatRobotFige() {
	// TODO Auto-generated destructor stub
}

EtatRobot* EtatRobotFige::repartir(){

	
}
EtatRobotFige* EtatRobotFige::getSingleton(){
	return singleton;
}