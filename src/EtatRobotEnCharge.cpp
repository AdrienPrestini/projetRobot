#include "EtatRobotEnCharge.h"
#include "EtatRobotEnChargeFacePlot.h"

EtatRobotEnCharge* EtatRobotEnCharge::instance = new EtatRobotEnCharge;

/*EtatRobot* EtatRobotEnCharge::avancer() {
	return this;
}

EtatRobot* EtatRobotEnCharge::peser() {
	return this;
}

EtatRobot* EtatRobotEnCharge::rencontrerPlot() {
	return EtatRobotEnChargeFacePlot::getSingleton();
}*/


EtatRobotEnCharge* EtatRobotEnCharge::getSingleton() {
	return instance;
}