/* --------------------------- 
Laboratoire : 02
Auteur(s) : Naël Currat
Date : 23.09.26
But : Calcul du temps de trajet 
Remarque(s) :
--------------------------- */

#include <iostream>
#include <cmath>

int main() {

    //Initialisation des variables connues
    const double dx = 3; //en km
    const double dy = 10; //en km
    const double L1 = 6.0; //en km
    const double s1 = 5.0; // en km/h
    const double s2 = 2.0; //en km/h

    //Calcul du segment Z
    const double z = dy - L1; //en km
    //Calcul de l'hypoténuse à l'aide des cotés dx et z
    double L2 = std::sqrt((dx * dx) + (z * z)); //en km
    //Calcul le temps mis par le robot sur le segment 1
    double T1 = L1 / s1; //en heure
    //Calcul le temps mis par le robot sur le segment 2
    double T2 = L2 / s2; //en heure
    //Calcul le temps total mis par le robot
    double tTotal = T1 + T2; // en heure
    //Affichage de la réponse final
    std::cout << tTotal << std::endl;
}