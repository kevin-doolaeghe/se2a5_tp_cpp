#include "Voyant.h"

Voyant::Voyant(int _broche)
    : broche(_broche)
{
    DDRD |= broche;
    PORTD &= ~broche;
}

void Voyant::changeEtat()
{
    PORTD ^= broche;
}
