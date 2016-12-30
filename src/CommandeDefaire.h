#ifndef _COMMANDE_DEFAIRE_H
#define _COMMANDE_DEFAIRE_H

#include "CommandeRobot.h"
#include <iostream>
using namespace std;

class CommandeDefaire: public CommandeRobot {

	private:
		static CommandeDefaire maCommande;	
	public: 

	CommandeDefaire(string c) : CommandeRobot(c) {}
       
    virtual void execute();
    virtual void desexecute();
    virtual bool reversable();
	virtual Commande* constructeurVirtuel(string c, LecteurCommande* lc);
};

#endif //_COMMANDE_DEFAIRE_H