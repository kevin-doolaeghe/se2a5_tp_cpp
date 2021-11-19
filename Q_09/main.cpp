#include "main.h"

using namespace std;

ObjMain::ObjMain() : btInc(&cptAff), btRaZ(&cptAff), table({ &btInc, &btRaZ, &btVoyant }) // Only since C++11
{
    /*
    table.push_back(&btInc);
    table.push_back(&btRaZ);
    table.push_back(&btVoyant);
    */
}

void ObjMain::run()
{
    while (true) {
        /*
        for (vector<Bouton *>::iterator it = table.begin() ; it != table.end(); ++it)
            (*it)->scrutation();
        */
        for (auto it:table) it->scrutation(); // Only since C++11
    }
}

int main()
{
    cout << "Début du programme" << endl;

    initEmulArduino(APPLI_2Seg_4Bt_2Voyant);

    ObjMain obj;
    obj.run();

    return 0;
}

