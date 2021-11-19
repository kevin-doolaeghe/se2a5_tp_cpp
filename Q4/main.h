#ifndef OBJMAIN_H
#define OBJMAIN_H

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <unistd.h>
#include "emularduino.h"
//#include "signal.h"
#include "Afficheur.h"

class ObjMain
{
public:
    void run();
    void coucou() { cout << "Signal recu" << endl; }
    int compteur;
    Afficheur aff;
};

#endif
