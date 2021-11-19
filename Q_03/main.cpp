#include "main.h"

using namespace std;

void ObjMain::run()
{
    Signal s;
    s.connect(this, ObjMain::coucou);
    DDRA = 0x7F;
    DDRB = 0x7F;
    DDRD = 0x00;
    cout << "Appuyer sur le bouton PD0" << endl;
    compteur = 0;
    char pd0_old = 0;
    char pd0_new = 0;
    PORTA = codeAff[0];
    PORTB = codeAff[0];
    while(true) {
        pd0_new = PIND & 0x01;
        if (pd0_new != 0 && pd0_old == 0) {
            compteur++;
            affiche();
            s.emet();
        }
        pd0_old = pd0_new;
    }
}

void ObjMain::affiche()
{
    PORTA = codeAff[compteur / 10 % 10];
    PORTB = codeAff[compteur % 10];
}

int main()
{
    cout << "Début(PIND & 0x01) du programme" << endl;

    initEmulArduino(APPLI_2Seg_4Bt_2Voyant);

    ObjMain obj;
    obj.run();

    return 0;
}

