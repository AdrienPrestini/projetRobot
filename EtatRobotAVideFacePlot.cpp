/*
 * EtatRobotAVideFacePlot.cpp
 *
 *  Created on: 14 nov. 2016
 *      Author: epu
 */

#include "MyIncludes/EtatRobotAVideFacePlot.h"
#include "MyIncludes/EtatRobotEnChargeFacePlot.h"

EtatRobotAVideFacePlot* EtatRobotAVideFacePlot::singleton = new EtatRobotAVideFacePlot;

EtatRobot* EtatRobotAVideFacePlot::saisir(){
	return EtatRobotEnChargeFacePlot::getSingleton();
}

EtatRobotAVideFacePlot* EtatRobotAVideFacePlot::getSingleton(){
	return singleton;
}