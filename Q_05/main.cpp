#include "main.h"

using namespace std;

void ObjMain::run()
{
    Signal s;
    s.connect(this, ObjMain::coucou);

    compteur = 0;

    while(true) {
        if (bt.estAppuye()) {
            compteur++;
            aff.affiche(compteur);
            s.emet();
        }
    }
}

int main()
{
    cout << "Début du programme" << endl;
    cout << "Appuyer sur le bouton PD0 pour incrémenter le compteur" << endl;

    initEmulArduino(APPLI_2Seg_4Bt_2Voyant);

    ObjMain obj;
    obj.run();

    return 0;
}

