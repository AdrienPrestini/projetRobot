#include "robot.h"
#include "EtatRobot.h"
#include "EtatRobotFige.h"
#include "EtatRobotEnRoute.h"
#include "LecteurCommande.h"

#include <iostream>

using namespace std;

int main(){ 
	//création du robot, son état de départ est EtatRobotAVideFacePlot, direction "Nord"
	Robot robot;
	//création de l'afficheur qui va écouter le comportement du robot
	Afficheur a;
	a.addObservable(&robot);
	robot.addObserver(&a);
	//affichons l'état du robot avant toute action
	a.afficher();
	// //le robot se fige
	// robot.figer();
	// //le robot repart
	// robot.repartir();
	// //le robot saisit l'objet o
	// Objet o(10);	
	// robot.saisir(&o);

	LecteurCommande lc("commandes.txt");
	lc.nextCommand();


	return 0;
}