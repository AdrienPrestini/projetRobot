#ifndef ETAT_ROBOT_A_VIDE_FACE_PLOT_H
#define ETAT_ROBOT_A_VIDE_FACE_PLOT_H

#include <string>
#include "EtatRobotEnRoute.h"

class EtatRobotAVideFacePlot : public EtatRobotEnRoute
{

private:
	static EtatRobotAVideFacePlot* instance;
	//EtatRobotEnChargeFacePlot* chargefaceplot_singleton=EtatRobotEnChargeFacePlot::getSingleton();
public:
	virtual EtatRobot* saisir();
	static EtatRobotAVideFacePlot* getSingleton();
	virtual std::string getNom();
};

//EtatRobotAVideFacePlot* EtatRobotAVideFacePlot::singleton=nullptr;

#endif