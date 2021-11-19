#include "main.h"

using namespace std;

Signal sig_INT0;
Signal sig_INT1;
Signal sig_INT2;

void irq_INT0() {
    cout << "INT0 triggered" << endl;
    sig_INT0.emet();
}

void irq_INT1() {
    cout << "INT1 triggered" << endl;
    sig_INT1.emet();
}

void irq_INT2() {
    cout << "INT2 triggered" << endl;
    sig_INT2.emet();
}

ObjMain::ObjMain() : btInc(&cptAff), btRaZ(&cptAff), voyant(0x10) //, table({ &btInc, &btRaZ, &btVoyant }) // Only since C++11
{
    /*
    table.push_back(&btInc);
    table.push_back(&btRaZ);
    table.push_back(&btVoyant);
    */
    /*
    s.connect(&btInc, Bouton::scrutation);
    s.connect(&btRaZ, Bouton::scrutation);
    s.connect(&btVoyant, Bouton::scrutation);
    */

    EIMSK |= 0x0F; //0x07; // INT0, INT1 et INT2
    EICRA |= 0xFF; //0x3F; // Rising-edge
}

void ObjMain::ecoute_INT0() // PD0
{
    cptAff.inc();
}

void ObjMain::ecoute_INT1() // PD1
{
    cptAff.remiseAZero();
}

void ObjMain::ecoute_INT2() // PD2
{
    voyant.changeEtat();
}

void ObjMain::run()
{
    while (true) {
        /*
        for (vector<Bouton *>::iterator it = table.begin() ; it != table.end(); ++it)
            (*it)->scrutation();
        */
        // for (auto it:table) it->scrutation(); // Only since C++11
        // s.emet();
        sleep();
    }
}

void test() {
    cout << "test" << endl;
}

int main()
{
    cout << "Début du programme" << endl;

    initEmulArduino(APPLI_2Seg_4Bt_2Voyant);

    defIRQ(INT0, irq_INT0);
    defIRQ(INT1, irq_INT1);
    defIRQ(INT2, test); // Bug
    defIRQ(INT3, irq_INT2);

    ObjMain obj;
    sig_INT0.connect(&obj, ObjMain::ecoute_INT0);
    sig_INT1.connect(&obj, ObjMain::ecoute_INT1);
    sig_INT2.connect(&obj, ObjMain::ecoute_INT2);
    obj.run();

    return 0;
}

