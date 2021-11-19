#ifndef BOUTONVOYANT_H
#define BOUTONVOYANT_H

#include "emularduino.h"
#include "Bouton.h"
#include "Voyant.h"
#include <iostream>

class BoutonVoyant : public Bouton
{
    public:
        BoutonVoyant();
    protected:
        void declencher();
        Voyant voyant;
};

#endif // BOUTONVOYANT_H
