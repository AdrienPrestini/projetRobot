#ifndef _COMMANDE_POSER_H
#define _COMMANDE_POSER_H

#include "CommandeRobot.h"
#include "LecteurCommande.h"
#include <string>

class CommandeRobot;
class LecteurCommande;

using std::string;

class CommandePoser : public CommandeRobot {
private:
	//static CommandePoser comPos;
public:
	CommandePoser();
	virtual void execute();
	virtual void desexecute();
	virtual bool reversable();
	virtual Commande* constructeurVirtuel(string d, LecteurCommande* lc);
	
};

#endif