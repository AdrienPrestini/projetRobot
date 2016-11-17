#ifndef ETAT_ROBOT_A_VIDE_FACE_PLOT_H
#define ETAT_ROBOT_A_VIDE_FACE_PLOT_H

#include "EtatRobotEnRoute.h"
#include "EtatRobotEnChargeFacePlot.h"

class EtatRobotAVideFacePlot : public EtatRobotEnRoute
{

private:
	static EtatRobotAVideFacePlot* singleton;
	EtatRobotEnChargeFacePlot* chargefaceplot_singleton=EtatRobotEnChargeFacePlot::getSingleton();
public:
	virtual EtatRobot* saisir();
	static EtatRobotAVideFacePlot* getSingleton();
};

EtatRobotAVideFacePlot* EtatRobotAVideFacePlot::singleton=nullptr;

#endif