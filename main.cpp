#include <iostream>
#include "Avion.h"
#include "Torre.h"
#include "Avioneta.h"
#include "Jet.h"

using namespace std;

int main()
{
    Torre *A =new Torre;
    Avioneta *A1 = new Avioneta;
    Jet *A2 = new Jet;
    A->agregar(A1);
    A->agregar(A2);

    A->send_msg();
}
