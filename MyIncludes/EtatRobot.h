/*
 * EtatRobot.h
 *
 *  Created on: 14 nov. 2016
 *      Author: Adrien Prestini & Antoine Rabenandrasana
 *      Version : version 1
 */

#ifndef ETATROBOT_H_
#define ETATROBOT_H_

#include <stdexcept>
#include <cstddef>
#include <string>

#include "Plot.h"
#include "Objet.h"

class EtatRobot {
public:
	class erreur : public std::exception
	{
	public:
		const char* what() const throw () {return "erreur d'état";}
	};

	class saisirException : public std::exception
	{
	public:
		const char* what() const throw () {return "je ne peux pas saisir";}
	};
	EtatRobot();
	virtual ~EtatRobot();

	//ces fonctions vont lever les exceptions dans EtatRobot:
	virtual EtatRobot* avancer();
	virtual EtatRobot* tourner();
	virtual EtatRobot* saisir();
	virtual EtatRobot* poser();
	virtual EtatRobot* peser();
	virtual EtatRobot* rencontrerPlot();
	virtual EtatRobot* figer();
	virtual EtatRobot* afficher();
};

#endif /* ETATROBOT_H_ */
