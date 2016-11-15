/*
 * EtatRobotEnChargeFacePlot.h
 *
 *  Created on: 14 nov. 2016
 *      Author: epu
 */

#ifndef ETATROBOTENCHARGEFACEPLOT_H_
#define ETATROBOTENCHARGEFACEPLOT_H_

#include "EtatRobotEnRoute.h"

class EtatRobotEnChargeFacePlot:public EtatRobotEnRoute {
public:
	EtatRobotEnChargeFacePlot();
	virtual ~EtatRobotEnChargeFacePlot();

	virtual EtatRobot peser();
	virtual EtatRobot poser();
	virtual EtatRobot evaluerPlot();
	virtual EtatRobot tourner();
};

#endif /* ETATROBOTENCHARGEFACEPLOT_H_ */
