#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotEnChargeFacePlot.h"


EtatRobotAVideFacePlot* EtatRobotAVideFacePlot::getSingleton(){
	return  EtatRobotAVideFacePlot::singleton;
}

EtatRobot* EtatRobotAVideFacePlot::saisir(){
	return chargefaceplot_singleton;
}
