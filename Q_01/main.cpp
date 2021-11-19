#include "main.h"

using namespace std;

void ObjMain::run()
{
    Signal s;
    s.connect(this, ObjMain::coucou);
    DDRA = 0x7F;
    DDRB = 0x7F;
    cout << "Entree pour avancer d'un pas" << endl;
    while(true)
        for (int i = 0; i < 10; i++)
        {
            PORTA = codeAff[i];
            PORTB = codeAff[9-i];
            getchar();
            s.emet();
        }
}

int main()
{
    cout << "Hello world!" << endl;

    initEmulArduino(APPLI_2Seg_4Bt_2Voyant);

    ObjMain obj;
    obj.run();

    return 0;
}

