#include "BoutonVoyant.h"

BoutonVoyant::BoutonVoyant() : Bouton(0x04), voyant(0x10)
{

}

void BoutonVoyant::declencher()
{
    cout << "BoutonVoyant::declencher()" << endl;
    voyant.changeEtat();
}
