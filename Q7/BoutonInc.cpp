#include "BoutonInc.h"

BoutonInc::BoutonInc(Compteur_aff_reset *refCptAff)
{
    cptAff = refCptAff;
    DDRD &= ~0x01;
    etat = 0;
}

void BoutonInc::scrutation()
{
    char val = PIND & 0x01;
    if (val != 0 && etat == 0)
        cptAff->inc();
    etat = val;
}
