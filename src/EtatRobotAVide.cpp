#include "EtatRobotAVide.h"
#include "EtatRobotAVideFacePlot.h"

EtatRobotAVide* EtatRobotAVide::instance = new EtatRobotAVide;

EtatRobot* EtatRobotAVide::tourner(){
	return this;
}
EtatRobot* EtatRobotAVide::avancer() {
	return this;
}

EtatRobot* EtatRobotAVide::rencontrerPlot() {
	return EtatRobotAVideFacePlot::getSingleton();
}


EtatRobotAVide* EtatRobotAVide::getSingleton() {
	return instance;
}

std::string EtatRobotAVide::getNom(){
	return "Etat à Vide";
}