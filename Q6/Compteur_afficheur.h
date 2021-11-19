#ifndef COMPTEUR_AFFICHEUR_H
#define COMPTEUR_AFFICHEUR_H

#include "Afficheur.h"

class Compteur_afficheur
{
    public:
        Compteur_afficheur();
        void inc();
        Afficheur aff7Seg;
    private:
        int cpt;
};

#endif // COMPTEUR_AFFICHEUR_H
