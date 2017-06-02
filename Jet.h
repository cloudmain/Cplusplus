#ifndef JET_H
#define JET_H
#include<iostream>
#include "Avion.h"

using namespace std;

class Jet : public Avion
{
    private:
        string desc;
    public:
        Jet(){desc = "esto es un jet";}
        void msg(){cout<<"Bienvenido jet"<<endl;}
};

#endif // JET_H
