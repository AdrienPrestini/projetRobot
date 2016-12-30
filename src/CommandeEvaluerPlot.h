#ifndef _COMMANDE_EVALUER_PLOT_H
#define _COMMANDE_EVALUER_PLOT_H

#include "CommandeRobot.h"
#include <iostream>

class CommandeEvaluerPlot: public CommandeRobot{

private:
	static CommandeEvaluerPlot maCommande;

public: 

    CommandeEvaluerPlot(string c) : CommandeRobot(c) {}
    virtual void execute();
    virtual void desexecute();
    virtual bool reversable();
    
    virtual Commande* constructeurVirtuel(string c, LecteurCommande* lc);
};

#endif //_COMMANDE_EVALUER_PLOT_H