#ifndef _ETAT_ROBOT_H_
#define _ETAT_ROBOT_H_


class EtatRobot{

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
};



#endif
