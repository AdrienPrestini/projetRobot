#ifndef _COMMANDE_POSER_H
#define _COMMANDE_POSER_H

#include "CommandeRobot.h"
#include "Objet.h"


class CommandePoser: public CommandeRobot {

	private:
		static CommandePoser maCommande;
		Objet * obj;
	
	public: 

	CommandePoser(string c) : CommandeRobot(c) {}
    
    virtual void execute();
    virtual void desexecute();
    virtual bool reversable();
	virtual Commande* constructeurVirtuel(string c, LecteurCommande* lc);
};
#endif //_COMMANDE_POSER_H