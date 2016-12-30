#ifndef _COMMANDE_PESER_H
#define _COMMANDE_PESER_H

#include "CommandeRobot.h"


class CommandePeser: public CommandeRobot {

	private:
		static CommandePeser maCommande;
	
	public: 

	CommandePeser(string c) : CommandeRobot(c) {}
    
    virtual void execute();
    virtual void desexecute();
    virtual bool reversable();
	virtual Commande* constructeurVirtuel(string c, LecteurCommande* lc);
};

#endif //_COMMANDE_PESER_H