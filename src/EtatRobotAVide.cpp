#include "EtatRobotAVide.h"
#include "EtatRobotAVideFacePlot.h"

EtatRobotAVide* EtatRobotAVide::instance = new EtatRobotAVide;

/*EtatRobot* EtatAVide::tourner(){
	return this;
}
EtatRobot* EtatAVide::avancer() {
	return this;
}

EtatRobot* EtatAVide::rencontrerPlot() {
	return EtatAVideFacePlot::getSingleton();
}
*/

EtatRobotAVide* EtatRobotAVide::getSingleton() {
	return instance;
}

std::string EtatRobotAVide::getNom(){
	return "Etat à Vide";
}