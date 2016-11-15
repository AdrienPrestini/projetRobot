/*
 * EtatRobotAVideFacePlot.h
 *
 *  Created on: 14 nov. 2016
 *      Author: Adrien Prestini & Antoine Rabenandrasana
 */

#ifndef ETATROBOTAVIDEFACEPLOT_H_
#define ETATROBOTAVIDEFACEPLOT_H_

#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"

class EtatRobotAVideFacePlot : public EtatRobotEnRoute {
public:


	virtual EtatRobot evaluerPlot();
	virtual EtatRobot saisir();
	virtual EtatRobot tourner();

};

#endif /* ETATROBOTAVIDEFACEPLOT_H_ */
