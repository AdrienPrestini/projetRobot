#ifndef _AFFICHEUR_H
#define _AFFICHEUR_H

#include <iostream>
#include <cstddef>
class Robot;

class Afficheur {
private:
	Robot* observable;
public:
	Afficheur():observable(NULL){}
	void afficher();
	void update(Robot* r);
	void addObservable(Robot* r);
};

#endif