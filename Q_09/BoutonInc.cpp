#include "BoutonInc.h"

BoutonInc::BoutonInc(Compteur_aff_reset *cpt_asso) : Bouton(0x01)
{
    cptAff = cpt_asso;
}

void BoutonInc::declencher()
{
    cout << "BoutonInc::declencher()" << endl;
    cptAff->inc();
}
