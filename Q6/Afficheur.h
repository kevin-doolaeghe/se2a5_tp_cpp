#ifndef AFFICHEUR_H
#define AFFICHEUR_H

#include "emularduino.h"

const unsigned char codeAff[10] =
	{ 0b0111111, 0b0000110,
	  0b1011011, 0b1001111,
	  0b1100110, 0b1101101,
	  0b1111101, 0b0000111,
	  0b1111111, 0b1101111 };

class Afficheur
{
    public:
        Afficheur();
        virtual ~Afficheur();
        void affiche(int val);

    protected:

    private:
};

#endif // AFFICHEUR_H
