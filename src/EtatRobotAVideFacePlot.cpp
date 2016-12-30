#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotEnChargeFacePlot.h"
#include "EtatRobotAVide.h"


EtatRobotAVideFacePlot* EtatRobotAVideFacePlot::getSingleton(){
	static EtatRobotAVideFacePlot* instance = new EtatRobotAVideFacePlot();
    return instance;
}

EtatRobot* EtatRobotAVideFacePlot::saisir(){
	return EtatRobotEnChargeFacePlot::getSingleton();
}

std::string EtatRobotAVideFacePlot::getNom(){
	return "Etat à Vide en Face d'un Plot";
}