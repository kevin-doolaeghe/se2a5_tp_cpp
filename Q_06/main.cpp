#include "main.h"

using namespace std;

void ObjMain::run()
{
    Compteur_afficheur cptAff;
    Bouton bt(&cptAff);
    while(true) {
        bt.scrutation();
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

