#ifndef _COMMANDE_H
#define _COMMANDE_H

#include <string>
#include <map>			  // std::map
// #include <stack>          // std::stack
#include "LecteurCommande.h"

using std::string;
using std::map;
// using std::stack;


class Commande {
protected:
	//bool reversable = true;
	//ajouter la pile de commande pour faire le desexecute
	//stack<Commande*> pileCommandes;
public:
	Commande(string commandeName);
	virtual bool reversable() = 0;
	virtual void execute() = 0;
	virtual void desexecute() = 0;
	virtual Commande* constructeurVirtuel(string d, LecteurCommande& lc) = 0;
	static map<string, Commande*>& cmdInscrites();
	static Commande* nouvelleCommande(string d,LecteurCommande& lc);
};

#endif