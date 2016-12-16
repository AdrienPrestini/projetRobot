#ifndef _COMMANDE_ROBOT_H
#define _COMMANDE_ROBOT_H

#include "Commande.h"
#include "robot.h"
#include <string>

class Commande;
class Robot;
using std::string;

class CommandeRobot : public Commande {
protected:
	Robot* robot = NULL;
public:
	CommandeRobot(string name):Commande::Commande(name){robot = NULL;}
	void ajouterRobot(Robot* r);
	virtual void execute() = 0;
	virtual bool reversable() = 0 ;
	virtual void dexecute() = 0;
};

#endif