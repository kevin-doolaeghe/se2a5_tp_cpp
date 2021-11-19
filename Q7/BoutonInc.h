#ifndef BOUTONINC_H
#define BOUTONINC_H

#include "emularduino.h"
#include "Compteur_aff_reset.h"

class BoutonInc
{
    public:
        BoutonInc(Compteur_aff_reset *refCptAff);
        void scrutation();
    protected:
        char etat;
        Compteur_aff_reset *cptAff;
};

#endif // BOUTONINC_H
