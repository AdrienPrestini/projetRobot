#include "robot.h"
#include "EtatRobot.h"
#include "EtatRobotFige.h"
#include "EtatRobotEnRoute.h"
#include "AfficheurTexte.h"

#include <iostream>

using namespace std;

int main(){ 
	//création du robot, son état de départ est EtatRobotAVideFacePlot, direction "Nord"
	Robot robot;
	//création de l'afficheur qui va écouter le comportement du robot
	AfficheurTexte a;
	//a.addObservable(&robot);
	robot.addObserver(&a);
	//le robot se fige
	robot.figer();
	//le robot repart
	robot.repartir();
	//le robot saisit l'objet o
	Objet o(10);	
	robot.saisir(&o);

	

	return 0;
}