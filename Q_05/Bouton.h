#ifndef BOUTON_H
#define BOUTON_H

#include "emularduino.h"

class Bouton
{
    public:
        Bouton();
        bool estAppuye();
    private:
        char etat;
};

#endif // BOUTON_H
