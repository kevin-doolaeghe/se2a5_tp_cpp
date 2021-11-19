#ifndef BOUTONRAZ_H
#define BOUTONRAZ_H

#include "emularduino.h"
#include "Compteur_aff_reset.h"
#include "BoutonInc.h"

class BoutonRaZ : public BoutonInc
{
    public:
        BoutonRaZ(Compteur_aff_reset *refCptAff);
        void scrutation();
};

#endif // BOUTONRAZ_H
