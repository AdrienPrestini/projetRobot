#include "EtatRobotEnCharge.h"
#include "EtatRobotEnChargeFacePlot.h"


EtatRobot* EtatRobotEnCharge::avancer() {
	return getSingleton();
}

EtatRobot* EtatRobotEnCharge::peser() {
	return getSingleton();
}

EtatRobot* EtatRobotEnCharge::rencontrerPlot() {
	return EtatRobotEnChargeFacePlot::getSingleton();
}


EtatRobotEnCharge* EtatRobotEnCharge::getSingleton() {
	static EtatRobotEnCharge* instance = new EtatRobotEnCharge();
    return instance;
}

std::string EtatRobotEnCharge::getNom(){
	return "Etat En Charge";
}