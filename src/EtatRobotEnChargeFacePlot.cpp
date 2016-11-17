#include "EtatRobotEnChargeFacePlot.h"
#include "EtatRobotAVideFacePlot.h"

EtatRobotEnChargeFacePlot* EtatRobotEnChargeFacePlot::getSingleton(){
	return  EtatRobotEnChargeFacePlot::singleton;
}


EtatRobot* EtatRobotEnChargeFacePlot::poser(){
	return avidefaceplot_singleton;
}

EtatRobot* EtatRobotEnChargeFacePlot::peser(){
	 return singleton->getSingleton();
}


EtatRobot* EtatRobotEnChargeFacePlot::evaluerPlot(){
	 return singleton->getSingleton();
}