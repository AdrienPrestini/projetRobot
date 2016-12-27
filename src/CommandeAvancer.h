#ifndef _COMMANDE_AVANCER_H
#define _COMMANDE_AVANCER_H

#include "CommandeRobot.h"
#include <iostream>

class CommandeAvancer : public CommandeRobot {
private:
	static CommandeAvancer maCommande;
	int lastX;
	int lastY;
	int x;
	int y;
public:
	
	CommandeAvancer(string c) : CommandeRobot(c) {}
	CommandeAvancer(string c,int xq, int yq): CommandeRobot(c), x(xq), y(yq){}
	virtual void execute();
	virtual void desexecute();
	virtual bool reversable();
	virtual Commande* constructeurVirtuel(string d, LecteurCommande& lc);
	
};

#endif