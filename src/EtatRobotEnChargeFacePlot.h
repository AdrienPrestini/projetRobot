#ifndef ETAT_ROBOT_ENCHARGE_FACE_PLOT_H
#define ETAT_ROBOT_ENCHARGE_FACE_PLOT_H

#include "EtatRobotEnRoute.h"
#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotAVideFacePlot.cpp"

class EtatRobotEnChargeFacePlot : public EtatRobotEnRoute
{

private:
	static EtatRobotEnChargeFacePlot* singleton;
	EtatRobotAVideFacePlot* avidefaceplot_singleton=EtatRobotAVideFacePlot::getSingleton();
	// Constructeur/destructeur
	EtatRobotEnChargeFacePlot (){ }
	~EtatRobotEnChargeFacePlot () { }
public:
	virtual EtatRobot* poser();
	virtual EtatRobot* peser();
	virtual EtatRobot* evaluerPlot();
	virtual EtatRobot* tourner();
	static EtatRobotEnChargeFacePlot* getSingleton();


};
#endif

