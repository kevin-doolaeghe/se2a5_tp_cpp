#ifndef VOYANT_H
#define VOYANT_H

#include "emularduino.h"

class Voyant
{
    public:
        Voyant(int _broche);
        void changeEtat();
    private:
        int broche;
};

#endif // VOYANT_H
