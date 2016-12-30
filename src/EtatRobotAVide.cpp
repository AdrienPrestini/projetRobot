#include "EtatRobotAVide.h"
#include "EtatRobotAVideFacePlot.h"
#include <iostream>



EtatRobot* EtatRobotAVide::tourner(){
	return getSingleton();
}
EtatRobot* EtatRobotAVide::avancer() {
	return getSingleton();
}

EtatRobot* EtatRobotAVide::rencontrerPlot() {
	return EtatRobotAVideFacePlot::getSingleton();
}


EtatRobotAVide* EtatRobotAVide::getSingleton() {
	static EtatRobotAVide* instance = new EtatRobotAVide();
    return instance;
}

std::string EtatRobotAVide::getNom(){
	return "Etat à Vide";
}