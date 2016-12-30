#include "EtatRobot.h"
#include "EtatRobotAVide.h"
#include "ExceptionsRobot.h"

EtatRobot* EtatRobot::premierEtat;
EtatRobot* EtatRobot::avancer(){throw ExceptionsRobot::Avancer_Exception();}
EtatRobot* EtatRobot::tourner(){throw ExceptionsRobot::Tourner_Exception();}
EtatRobot* EtatRobot::saisir(){throw ExceptionsRobot::Saisir_Exception();}
EtatRobot* EtatRobot::poser(){throw ExceptionsRobot::Poser_Exception();}
EtatRobot* EtatRobot::peser(){throw ExceptionsRobot::Peser_Exception();}
EtatRobot* EtatRobot::rencontrerPlot(){throw ExceptionsRobot::RencontrerPlot_Exception();}
EtatRobot* EtatRobot::figer(){throw ExceptionsRobot::Figer_Exception();}
EtatRobot* EtatRobot::evaluerPlot(){throw ExceptionsRobot::EvaluerPlot_Exception();}

EtatRobot* EtatRobot::afficher(){return this ;}

EtatRobot* EtatRobot::repartir(){throw ExceptionsRobot::Repartir_Exception();}

EtatRobot* EtatRobot::getPremier(){
	premierEtat = EtatRobotAVide::getSingleton();
	return premierEtat;
}

std::string EtatRobot::getNom(){
	return "";
}