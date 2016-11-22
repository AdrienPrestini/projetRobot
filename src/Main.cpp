#include "robot.h"
#include "EtatRobot.h"
#include "EtatRobotFige.h"
#include "EtatRobotEnRoute.h"

#include <iostream>

using namespace std;

int main(){
	//création du robot
	//Robot(std::string direction,Position* pos,Plot* ptr_plot,EtatRobot* mon_etat,Objet* ptr_obj);

	Robot robot;
	Afficheur a;
	a.addObservable(&robot);
	robot.addObserver(&a);

	a.afficher();

	robot.figer();
	robot.repartir();
	Objet o(10);	
	robot.saisir(&o);

	

	return 0;
}