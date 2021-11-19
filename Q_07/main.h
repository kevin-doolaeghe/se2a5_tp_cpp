#ifndef OBJMAIN_H
#define OBJMAIN_H

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <unistd.h>
#include "emularduino.h"
#include "Compteur_aff_reset.h"
#include "BoutonInc.h"
#include "BoutonRaZ.h"

class ObjMain
{
public:
    ObjMain();
    void run();
    Compteur_aff_reset cptAff;
    BoutonInc btInc;
    BoutonRaZ btRaZ;
};

#endif
