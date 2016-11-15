/*
 * EtatRobot.cpp
 *
 *  Created on: 14 nov. 2016
 *      Author: epu
 */

#include "MyIncludes/EtatRobot.h"


EtatRobot* EtatRobot::avancer(){throw erreur();}
EtatRobot* EtatRobot::tourner(){throw erreur();}
EtatRobot* EtatRobot::saisir(){throw saisirException();}
EtatRobot* EtatRobot::poser(){throw erreur();}
EtatRobot* EtatRobot::peser(){throw erreur();}
EtatRobot* EtatRobot::rencontrerPlot(){throw erreur();}
EtatRobot* EtatRobot::figer(){throw erreur();}
EtatRobot* EtatRobot::afficher(){throw erreur();}
