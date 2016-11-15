#ifndef ETAT_ROBOT_A_VIDE_FACE_PLOT_H
#define ETAT_ROBOT_A_VIDE_FACE_PLOT_H

#include "EtatRobotEnRoute.h"

class EtatRobotAVideFacePlot : public EtatRobotEnRoute
{

private:
	static EtatRobotAVideFacePlot* singleton;
public:
	virtual EtatRobot* saisir();

	static EtatRobotAVideFacePlot* getSingleton();
};

#endif