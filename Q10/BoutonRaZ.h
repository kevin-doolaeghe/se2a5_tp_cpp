#ifndef BOUTONRAZ_H
#define BOUTONRAZ_H

#include "emularduino.h"
#include "Bouton.h"
#include "Compteur_aff_reset.h"
#include <iostream>

class BoutonRaZ : public Bouton
{
    public:
        BoutonRaZ(Compteur_aff_reset *cpt_asso);
    protected:
        void declencher();
        Compteur_aff_reset *cptAff;
    private:
        Signal s;
};

#endif // BOUTONRAZ_H
