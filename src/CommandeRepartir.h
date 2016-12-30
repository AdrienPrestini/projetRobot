#ifndef _COMMANDE_REPARTIR_H
#define _COMMANDE_REPARTIR_H

#include "CommandeRobot.h"


class CommandeRepartir: public CommandeRobot {

	private:
		static CommandeRepartir maCommande;
	
	public: 

	CommandeRepartir(string c) : CommandeRobot(c) {}
    
    virtual void execute();
    virtual void desexecute();
    virtual bool reversable();
	virtual Commande* constructeurVirtuel(string c, LecteurCommande* lc);
};

#endif //_COMMANDE_REPARTIR_H