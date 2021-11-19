#ifndef OBJMAIN_H
#define OBJMAIN_H

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <unistd.h>
#include <vector>
#include "emularduino.h"
#include "Compteur_aff_reset.h"
#include "BoutonInc.h"
#include "BoutonRaZ.h"
#include "BoutonVoyant.h"

class ObjMain
{
public:
    ObjMain();
    void run();
private:
    Compteur_aff_reset cptAff;
    BoutonInc btInc;
    BoutonRaZ btRaZ;
    BoutonVoyant btVoyant;
    vector<Bouton *> table;
    Signal s;
};

#endif
