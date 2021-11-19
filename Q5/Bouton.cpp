#include "Bouton.h"

Bouton::Bouton()
{
    DDRD &= ~0x01;
    etat = 0;
}

bool Bouton::estAppuye()
{
    char val = PIND & 0x01;
    char tmp = etat;
    etat = val;
    return (val != 0 && tmp == 0);
}
