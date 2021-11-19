#include "BoutonRaZ.h"

BoutonRaZ::BoutonRaZ(Compteur_aff_reset *cpt_asso) : Bouton(0x02)
{
    cptAff = cpt_asso;
    s.connect(cptAff, Compteur_aff_reset::inc);
}

void BoutonRaZ::declencher()
{
    cout << "BoutonRaZ::declencher()" << endl;
    // cptAff->remiseAZero();
    s.emet();
}
