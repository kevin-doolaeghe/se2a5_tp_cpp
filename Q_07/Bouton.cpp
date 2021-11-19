#include "Bouton.h"

Bouton::Bouton(Compteur_afficheur *refCptAff)
{
    cptAff = refCptAff;
    DDRD &= ~0x01;
    etat = 0;
}

/*
bool Bouton::estAppuye()
{
    char val = PIND & 0x01;
    char tmp = etat;
    etat = val;
    return (val != 0 && tmp == 0);
}
*/

void Bouton::scrutation()
{
    char val = PIND & 0x01;
    if (val != 0 && etat == 0)
        cptAff->inc();
    etat = val;
}
