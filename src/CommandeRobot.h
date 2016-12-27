#ifndef _COMMANDE_ROBOT_H
#define _COMMANDE_ROBOT_H

#include "Commande.h"
#include "robot.h"
#include <string>

using std::string;

class CommandeRobot : public Commande {
protected:
	static Robot robot;
	CommandeRobot(string name): Commande(name){}
};

#endif