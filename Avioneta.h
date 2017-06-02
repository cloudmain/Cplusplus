#ifndef AVIONETA_H
#define AVIONETA_H
#include<iostream>
#include "Avion.h"

using namespace std;

class Avioneta : public Avion
{
    private:
        string desc;
    public:
        Avioneta(){desc = "esto es una avioneta";}
        void msg(){cout<<"Bienvenida avioneta"<<endl;}
};

#endif // AVIONETA_H
