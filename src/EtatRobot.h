#ifndef _ETAT_ROBOT_H_
#define _ETAT_ROBOT_H_

#include <string>
class EtatRobot{

private:
	static EtatRobot* premierEtat;
	
public:

	virtual EtatRobot* avancer();
	virtual EtatRobot* tourner();
	virtual EtatRobot* saisir();
	virtual EtatRobot* poser();
	virtual EtatRobot* peser();
	virtual EtatRobot* rencontrerPlot();
	virtual EtatRobot* figer();
	virtual EtatRobot* afficher();
	virtual EtatRobot* repartir();

	static EtatRobot* getPremier();
	virtual std::string getNom();
};



#endif
