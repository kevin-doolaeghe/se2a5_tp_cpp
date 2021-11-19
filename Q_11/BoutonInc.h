#ifndef BOUTONINC_H
#define BOUTONINC_H

#include "emularduino.h"
#include "Bouton.h"
#include "Compteur_aff_reset.h"
#include <iostream>

class BoutonInc : public Bouton
{
    public:
        BoutonInc(Compteur_aff_reset *cpt_asso);
    protected:
        void declencher();
        Compteur_aff_reset *cptAff;
    private:
        Signal s;
};

#endif // BOUTONINC_H
