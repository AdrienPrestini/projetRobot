#ifndef _COMMANDEFIGER_H
#define _COMMANDEFIGER_H

#include "CommandeRobot.h"


class CommandeFiger: public CommandeRobot {

	private:
		static CommandeFiger maCommande;
	
	public: 

	CommandeFiger(string c) : CommandeRobot(c) {}
    
    virtual void execute();
    virtual void desexecute();
    virtual bool reversable();
	virtual Commande* constructeurVirtuel(string c, LecteurCommande* lc);
};

#endif //_COMMANDEFIGER_H