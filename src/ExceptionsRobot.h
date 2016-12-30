#ifndef _EXCEPTIONS_ROBOT_H_
#define _EXCEPTIONS_ROBOT_H_

#include <stdexcept>
class ExceptionsRobot{
public:

	class Mauvaise_Direction_Exception: public std::exception
    {
    public:
        const char* what() const throw () {return "erreur Mauvaise_Direction_Exception";}
    };


	class Avancer_Exception : public std::exception
    {
    public:
        const char* what() const throw () {return "erreur Avancer_Exception";}
    };
	

	class Tourner_Exception : public std::exception
    {
    public:
        const char* what() const throw () {return "erreur Tourner_Exception";}
    };
	

	class Saisir_Exception : public std::exception
    {
    public:
        const char* what() const throw () {return "erreur Saisir_Exception";}
    };
	

	class Poser_Exception: public std::exception
    {
    public:
        const char* what() const throw () {return "erreur Poser_Exception";}
    };
	

	class RencontrerPlot_Exception : public std::exception
    {
    public:
        const char* what() const throw () {return "erreur RencontrerPlot_Exception";}
    };

    
	class Peser_Exception : public std::exception
    {
    public:
        const char* what() const throw () {return "erreur Peser_Exception";}
    };
	

	class EvaluerPlot_Exception : public std::exception
    {
    public:
        const char* what() const throw () {return "erreur EvaluerPlot_Exception";}
    };
	

	class Figer_Exception : public std::exception
    {
    public:
        const char* what() const throw () {return "erreur Figer_Exception";}
    };
	

	class Repartir_Exception : public std::exception
    {
    public:
        const char* what() const throw () {return "erreur Repartir_Exception";}
    };
};

#endif