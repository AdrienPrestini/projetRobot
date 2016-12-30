#ifndef _COMMANDE_TOURNER_H
#define _COMMANDE_TOURNER_H

#include "CommandeRobot.h"


class CommandeTourner: public CommandeRobot {

	private:
		static CommandeTourner maCommande;
		string new_direction, last_direction;
	
	public: 

	CommandeTourner(string c) : CommandeRobot(c) {}
    CommandeTourner(string c, string direction) : CommandeRobot(c), new_direction(direction) {}
    
    virtual void execute();
    virtual void desexecute();
    virtual bool reversable();
	virtual Commande* constructeurVirtuel(string c, LecteurCommande* lc);
};

#endif //_COMMANDE_TOURNER_H