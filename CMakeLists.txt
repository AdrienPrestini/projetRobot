#Déclaration du projet

project(Robot)



#Déclaration de l'exécutable

add_executable(

        main.exe

        src/Robot.cpp

        src/Plot.cpp

        src/Objet.cpp

        src/Main.cpp

        src/EtatRobotFige.cpp

        src/EtatRobotEnRoute.cpp

        src/EtatRobotEnChargeFacePlot.cpp

        src/EtatRobot.cpp

        src/MyIncludes/Robot.h

        src/MyIncludes/Plot.h

        src/MyIncludes/Objet.h

        src/MyIncludes/EtatRobotFige.h

        src/MyIncludes/EtatRobotEnRoute.h

        src/MyIncludes/EtatRobotEnChargeFacePlot.h

        src/MyIncludes/EtatRobot.h

)
