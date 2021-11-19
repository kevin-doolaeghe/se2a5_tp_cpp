#include "Compteur_aff_reset.h"

Compteur_aff_reset::Compteur_aff_reset()
{

}

Compteur_aff_reset::~Compteur_aff_reset()
{

}

void Compteur_aff_reset::remiseAZero()
{
    cpt = 0;
    aff7Seg.affiche(cpt);
}
