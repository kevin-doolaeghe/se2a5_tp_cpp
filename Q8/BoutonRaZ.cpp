#include "BoutonRaZ.h"

BoutonRaZ::BoutonRaZ(Compteur_aff_reset *cpt_asso) : Bouton(0x02)
{
    cptAff = cpt_asso;
}

void BoutonRaZ::declencher()
{
    cout << "BoutonRaZ::declencher()" << endl;
    cptAff->remiseAZero();
}
