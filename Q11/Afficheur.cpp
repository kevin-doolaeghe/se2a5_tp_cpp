#include "Afficheur.h"

Afficheur::Afficheur()
{
    DDRA = 0x7F;
    DDRB = 0x7F;
    PORTA = codeAff[0];
    PORTB = codeAff[0];
}

Afficheur::~Afficheur()
{

}

void Afficheur::affiche(int val)
{
    PORTA = codeAff[val / 10 % 10];
    PORTB = codeAff[val % 10];
}
