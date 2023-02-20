#include <iostream>
#include "fecha.h"

using namespace std;

int main(){

    CFecha fecha01();

    CFecha::fecha01.obtenerFecha(8, 11, 2002);
    cout << "Fecha de cumpleaños: " << fecha01.dia, fecha01.mes, fecha01.anyo << endl;

    return 0;
}
