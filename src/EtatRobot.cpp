#include "EtatRobot.h"
#include "ExceptionsRobot.h"

//EtatRobot* EtatRobot::avancer(){throw ExceptionsRobot::Avancer_Exception();}
//EtatRobot* EtatRobot::tourner(){throw ExceptionsRobot::Tourner_Exception();}
EtatRobot* EtatRobot::saisir(){throw ExceptionsRobot::Saisir_Exception();}
//EtatRobot* EtatRobot::poser(){throw ExceptionsRobot::Poser_Exception();}
// EtatRobot* EtatRobot::peser(){throw ExceptionsRobot::Peser_Exception();}
// EtatRobot* EtatRobot::rencontrerPlot(){throw ExceptionsRobot::RencontrerPlot_Exception();}
EtatRobot* EtatRobot::figer(){throw ExceptionsRobot::Figer_Exception();}

//EtatRobot* EtatRobot::afficher(){return this ;}

EtatRobot* EtatRobot::repartir(){throw ExceptionsRobot::Repartir_Exception();}