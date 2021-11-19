#include "Bouton.h"

Bouton::Bouton(int _broche)
    : broche(_broche)
{
    // DDRD |= broche;  == SET
    // DDRD &= ~broche; == CLEAR
    // DDRD ^= broche;  == TOGGLE
    DDRD &= ~broche;
    etat = PIND;
}

void Bouton::scrutation()
{
    char val = PIND & broche;
    if (val != 0 && etat == 0)
        declencher();
    etat = val;
}
