/*
 * EtatRobotAVideFacePlot.cpp
 *
 *  Created on: 14 nov. 2016
 *      Author: epu
 */

#include "MyIncludes/EtatRobotAVideFacePlot.h"



EtatRobot EtatRobotAVideFacePlot::saisir(){
	return new EtatRobotEnChargeFacePlot();
}