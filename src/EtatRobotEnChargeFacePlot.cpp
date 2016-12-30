#include "EtatRobotEnChargeFacePlot.h"
#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotEnCharge.h"


EtatRobotEnChargeFacePlot* EtatRobotEnChargeFacePlot::getSingleton(){
	static EtatRobotEnChargeFacePlot* instance = new EtatRobotEnChargeFacePlot();
    return instance;
}


EtatRobot* EtatRobotEnChargeFacePlot::poser(){
	return EtatRobotAVideFacePlot::getSingleton();
}

EtatRobot* EtatRobotEnChargeFacePlot::peser(){
	 return getSingleton();
}


EtatRobot* EtatRobotEnChargeFacePlot::evaluerPlot(){
	 return getSingleton();
}


EtatRobot* EtatRobotEnChargeFacePlot::tourner(){
	return getSingleton();
}
std::string EtatRobotEnChargeFacePlot::getNom(){
	return "Etat En Charge En Face d'un Plot";
}