#include "Voyant.h"

Voyant::Voyant(int _broche)
    : broche(_broche)
{
    DDRD |= broche;
}

void Voyant::changeEtat()
{
    PORTD ^= broche;
}
