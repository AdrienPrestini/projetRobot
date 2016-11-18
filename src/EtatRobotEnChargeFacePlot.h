#ifndef ETAT_ROBOT_ENCHARGE_FACE_PLOT_H
#define ETAT_ROBOT_ENCHARGE_FACE_PLOT_H

#include "EtatRobotEnRoute.h"


class EtatRobotEnChargeFacePlot : public EtatRobotEnRoute
{

private:
	static EtatRobotEnChargeFacePlot* instance;
public:
	// virtual EtatRobot* poser();
	// virtual EtatRobot* peser();
	// virtual EtatRobot* evaluerPlot();
	// virtual EtatRobot* tourner();
	static EtatRobotEnChargeFacePlot* getSingleton();


};
#endif

