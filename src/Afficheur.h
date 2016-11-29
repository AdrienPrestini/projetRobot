#ifndef _AFFICHEUR_H
#define _AFFICHEUR_H

#include <iostream>
#include <cstddef>
class Robot;

class Afficheur {

public:
	
	virtual void afficher(Robot* observable) = 0;
	
};

#endif