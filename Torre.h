#ifndef TORRE_H
#define TORRE_H
#include<vector>
#include<iostream>
#include "Avion.h"

using namespace std;

class Torre : public Avion
{
    private:
        vector<Avion *> A;
    public:
        void agregar(Avion *a){A.push_back(a);}
        void send_msg()
        {
            for(int i=0;i!=A.size();i++)
                this ->A[i] -> msg();
        }
};

#endif // TORRE_H
