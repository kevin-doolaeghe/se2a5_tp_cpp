#include "Compteur_afficheur.h"

Compteur_afficheur::Compteur_afficheur()
{
    cpt = 0;
}

void Compteur_afficheur::inc() {
    cpt++;
    aff7Seg.affiche(cpt);
}
