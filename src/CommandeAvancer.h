#ifndef _COMMANDE_AVANCER_H
#define _COMMANDE_AVANCER_H

#include "CommandeRobot.h"
#include "LecteurCommande.h"
#include <string>

class CommandeRobot;
class LecteurCommande;

using std::string;

class CommandeAvancer : public CommandeRobot {
private:
	int lastX;
	int lastY;
	int x;
	int y;
public:
	CommandeAvancer();
	virtual void execute();
	virtual void desexecute();
	virtual bool reversable();
	virtual Commande* constructeurVirtuel(string d, LecteurCommande lc);
	
};

#endif