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

std::string EtatRobotAVideFacePlot::getNom(){
	return "Etat à Vide en Face d'un Plot";
}