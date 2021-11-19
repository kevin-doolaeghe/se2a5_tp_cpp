#ifndef BOUTON_H
#define BOUTON_H

#include "emularduino.h"

class Bouton
{
    public:
        Bouton(int _broche);
        void scrutation();
    protected:
        virtual void declencher() = 0;
    private:
        char etat;
        int broche;
};

#endif // BOUTON_H
