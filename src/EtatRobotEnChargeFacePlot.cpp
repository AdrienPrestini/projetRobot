#include "EtatRobotEnChargeFacePlot.h"
#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotEnCharge.h"

EtatRobotEnChargeFacePlot* EtatRobotEnChargeFacePlot::instance = new EtatRobotEnChargeFacePlot;


EtatRobotEnChargeFacePlot* EtatRobotEnChargeFacePlot::getSingleton(){
	return instance;
}


/*EtatRobot* EtatRobotEnChargeFacePlot::poser(){
	return EtatRobotAVideFacePlot::getSingleton();
}

EtatRobot* EtatRobotEnChargeFacePlot::peser(){
	 return this;
}


EtatRobot* EtatRobotEnChargeFacePlot::evaluerPlot(){
	 return this;
}*/