#ifndef _COMMANDE_H
#define _COMMANDE_H

#include <iostream>

class Commande {
public:
	virtual void execute() = 0;
	virtual void undo() = 0;
};

#endif