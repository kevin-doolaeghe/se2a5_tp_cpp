#include <vector>

using namespace std;

class AppelMembreObj
{
public:
    virtual void emet()=0;
};

template <class Y,class X>
class AppelMembreObjDedie : public AppelMembreObj
{
public:
    AppelMembreObjDedie(Y *pthis, void (X::* fonctionALier)() ) {
        objet = pthis;
        membreObj = fonctionALier;
    }
    virtual void emet()
    {
        (objet->*membreObj)();
    }
private:
    Y * objet;
    void (X::*membreObj)(void) ;
};

class Signal
{
public:
    template <class Y,class X>
    void connect(Y * obj, void (X::*func)())
    {
        listeSlot.push_back(new AppelMembreObjDedie<Y,X>(obj,func));
    };
    void emet()
    {
        for (vector<AppelMembreObj *>::iterator it=listeSlot.begin(); 
	it != listeSlot.end(); ++it)
            (*it)->emet();
    }
private:
    vector<class AppelMembreObj *> listeSlot;
};
