#include "BoutonRaZ.h"

BoutonRaZ::BoutonRaZ(Compteur_aff_reset *refCptAff) : BoutonInc(refCptAff)
{
    DDRD &= ~0x02;
}

void BoutonRaZ::scrutation()
{
    char val = PIND & 0x02;
    if (val != 0 && etat == 0)
        cptAff->remiseAZero();
    etat = val;
}
