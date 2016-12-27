#include "robot.h"
#include "EtatRobot.h"
#include "EtatRobotFige.h"
#include "EtatRobotEnRoute.h"
#include "LecteurCommande.h"

#include <iostream>

using namespace std;

int main(){ 
	LecteurCommande lc("commandes.txt");
	lc.nextCommand();


	return 0;
}