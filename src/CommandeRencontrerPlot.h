#ifndef _COMMANDE_RENCONTRER_PLOT_H
#define _COMMANDE_RENCONTRER_PLOT_H

#include "CommandeRobot.h"


class CommandeRencontrerPlot: public CommandeRobot {

	private:
		static CommandeRencontrerPlot maCommande;
		int hauteur;
	
	public: 

	CommandeRencontrerPlot(string c) : CommandeRobot(c) {}
    CommandeRencontrerPlot(string c, int _hauteur) : CommandeRobot(c), hauteur(_hauteur) {} 
    virtual void execute();
    virtual void desexecute();
    virtual bool reversable();
	virtual Commande* constructeurVirtuel(string c, LecteurCommande* lc);
};

#endif //_COMMANDE_RENCONTRER_PLOT_H