#include "robot.h"
#include "EtatRobot.h"
#include "EtatRobotFige.h"
#include "EtatRobotEnRoute.h"

#include <iostream>

using namespace std;

int main(){
	//création du robot
	//Robot(std::string direction,Position* pos,Plot* ptr_plot,EtatRobot* mon_etat,Objet* ptr_obj);
	Position p(0,0);
	Plot plot(0);
	
	Objet o(20);

	Robot robot("NORD", &p,&plot,&o);
	cout << "coucou" << endl;
	Afficheur a;
	a.addObservable(&robot);
	robot.addObserver(&a);

	

	return 0;
}