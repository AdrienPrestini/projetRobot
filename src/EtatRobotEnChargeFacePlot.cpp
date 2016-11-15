/*
 * EtatRobotEnChargeFacePlot.cpp
 *
 *  Created on: 14 nov. 2016
 *      Author: epu
 */

#include "MyIncludes/EtatRobotEnChargeFacePlot.h"

EtatRobotEnChargeFacePlot* EtatRobotEnChargeFacePlot::singleton = new EtatRobotEnChargeFacePlot;



EtatRobotEnChargeFacePlot* EtatRobotEnChargeFacePlot::getSingleton(){
	return singleton;
}