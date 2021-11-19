#ifndef COMPTEUR_AFF_RESET_H
#define COMPTEUR_AFF_RESET_H

#include "Compteur_afficheur.h"

class Compteur_aff_reset : public Compteur_afficheur
{
    public:
        Compteur_aff_reset();
        virtual ~Compteur_aff_reset();
        void remiseAZero();
};

#endif // COMPTEUR_AFF_RESET_H
