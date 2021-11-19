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
    void ecoute_INT0();
    void ecoute_INT1();
    void ecoute_INT2();
private:
    Compteur_aff_reset cptAff;
    BoutonInc btInc;
    BoutonRaZ btRaZ;
    //BoutonVoyant btVoyant;
    // vector<Bouton *> table;
    // Signal s;
    Voyant voyant;
};

#endif
