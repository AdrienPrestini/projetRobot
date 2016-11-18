SOURCES = Main.cpp robot.cpp position.cpp plot.cpp Objet.cpp EtatRobot.cpp EtatRobotFige.cpp EtatRobotEnRoute.cpp EtatRobotEnChargeFacePlot.cpp EtatRobotEnCharge.cpp EtatRobotAVideFacePlot.cpp EtatRobotAVide.cpp 
OBJECTS = $(SOURCES:.cpp=.o)



%: %.o
		$(LINK.cpp) -o $@ $^


executable_Robot : $(OBJECTS)
		g++ -o $@ $^
		rm -f *.o

###

clean:
		 rm -f *~ *.o *.bak

depend:
		makedepend $(SOURCES)


# Regles pour construire les .o

Main.o: robot.h EtatRobot.h plot.h position.h Objet.h
Main.o: EtatRobotAVide.h EtatRobotEnRoute.h EtatRobotFige.h
robot.o: robot.h EtatRobot.h plot.h position.h Objet.h
robot.o: EtatRobotAVide.h EtatRobotEnRoute.h EtatRobotFige.h
Objet.o: Objet.h
position.o: position.h
plot.o: plot.h

EtatRobot.o: EtatRobot.h EtatRobotAVide.h EtatRobotEnRoute.h EtatRobotFige.h
EtatRobotFige.o: EtatRobotFige.h EtatRobot.h EtatRobotAVide.h EtatRobotEnRoute.h
EtatRobotEnRoute.o: EtatRobotEnRoute.h EtatRobot.h EtatRobotFige.h
EtatRobotEnChargeFacePlot.o: EtatRobotEnChargeFacePlot.h EtatRobotEnRoute.h EtatRobot.h
EtatRobotEnChargeFacePlot.o: EtatRobotFige.h EtatRobotEnCharge.h EtatRobotAVideFacePlot.h
EtatRobotEnCharge.o: EtatRobotEnCharge.h EtatRobotEnRoute.h EtatRobot.h EtatRobotFige.h
EtatRobotEnCharge.o: EtatRobotEnChargeFacePlot.h
EtatRobotAVideFacePlot.o: EtatRobotAVideFacePlot.h EtatRobotEnRoute.h EtatRobot.h EtatRobotFige.h
EtatRobotAVideFacePlot.o: EtatRobotAVide.h EtatRobotEnChargeFacePlot.h
EtatRobotAVide.o: EtatRobotAVide.h EtatRobotEnRoute.h EtatRobot.h EtatRobotFige.h
EtatRobotAVide.o: EtatRobotAVideFacePlot.h