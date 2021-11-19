#include "main.h"

using namespace std;

void ObjMain::run()
{
    Signal s;
    s.connect(this, ObjMain::coucou);
    DDRD = 0x00;
    compteur = 0;

    char pd0_old = 0;
    char pd0_new = 0;

    while(true) {
        pd0_new = PIND & 0x01;
        if (pd0_new != 0 && pd0_old == 0) {
            compteur++;
            aff.affiche(compteur);
            s.emet();
        }
        pd0_old = pd0_new;
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

