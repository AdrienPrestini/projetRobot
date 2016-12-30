/**
 * Project Untitled
 */


#ifndef _COMMANDE_SAISIR_H
#define _COMMANDE_SAISIR_H

#include "CommandeRobot.h"


class CommandeSaisir: public CommandeRobot {

	private:
		static CommandeSaisir maCommande;
		int poids;
	public: 

	CommandeSaisir(string c) : CommandeRobot(c) {}
	CommandeSaisir(string c, int _poids) : CommandeRobot(c) {poids = _poids;}
    
    virtual void execute();
    virtual void desexecute();
    virtual bool reversable();
	virtual Commande* constructeurVirtuel(string c, LecteurCommande* lc);
};

#endif //_COMMANDESAISIR_H