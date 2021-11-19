#ifndef BOUTON_H
#define BOUTON_H

#include "emularduino.h"
#include "Compteur_afficheur.h"

class Bouton
{
    public:
        Bouton(Compteur_afficheur *refCptAff);
        //bool estAppuye();
        void scrutation();
    private:
        char etat;
        Compteur_afficheur *cptAff;
};

#endif // BOUTON_H
