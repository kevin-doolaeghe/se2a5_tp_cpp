#include "main.h"

using namespace std;

ObjMain::ObjMain() : btInc(&cptAff), btRaZ(&cptAff)
{

}

void ObjMain::run()
{
    while(true) {
        btInc.scrutation();
        btRaZ.scrutation();
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

