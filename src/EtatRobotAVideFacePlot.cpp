#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotEnChargeFacePlot.h"
#include "EtatRobotAVide.h"

EtatRobotAVideFacePlot* EtatRobotAVideFacePlot::instance = new EtatRobotAVideFacePlot;

EtatRobotAVideFacePlot* EtatRobotAVideFacePlot::getSingleton(){
	return instance;
}

EtatRobot* EtatRobotAVideFacePlot::saisir(){
	return EtatRobotEnChargeFacePlot::getSingleton();
}
