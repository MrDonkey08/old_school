#include <iostream>
#include "empleado.h"
#include <locale.h>

using namespace std;

void leerFecha(int &, int &, int&);
void visualizarFecha(CFecha& fecha);
void visualizarFechaTxt(CFecha& fecha);


int main(){
    setlocale(LC_ALL, "");

    CFecha fecha1, fecha2;
    int dd = 0, mm = 0, aaaa = 0;

    bool fechaValida = true;
    do{
        cout << "Introduce tu fecha de cumpleaños: \n\n";
        leerFecha(dd, mm, aaaa);
        fechaValida = fecha1.asignarFecha(dd, mm, aaaa);
        cout << "\n";
        system("pause");
        system("cls");
    } while (!fechaValida);

    cout << "Tu fecha de cumpleaños es el ";
    visualizarFechaTxt(fecha1);

    cout << "\nLa fecha del día de hoy es ";

    fecha2.asignarFecha(0, 0, 0);
    visualizarFechaTxt(fecha2);
    cout <<"\n";

    return 0;
}

void visualizarFecha(CFecha& fecha){
    int dd = 0, mm = 0, aaaa = 0;
    fecha.obtenerFecha(dd, mm, aaaa);
    cout << dd << "/" << mm << "/" << aaaa;
}


void visualizarFechaTxt(CFecha& fecha){
    int dd = 0, mm = 0, aaaa = 0;
    string mmTex;
    fecha.obtenerFecha(dd, mm, aaaa);

    switch (mm){
        case 1: mmTex = "enero"; break;
        case 2: mmTex = "febrero"; break;
        case 3: mmTex = "marzo"; break;
        case 4: mmTex = "abril"; break;
        case 5: mmTex = "mayo"; break;
        case 6: mmTex = "junio"; break;
        case 7: mmTex = "julio"; break;
        case 8: mmTex = "agosto"; break;
        case 9: mmTex = "septiembre"; break;
        case 10: mmTex = "octubre"; break;
        case 11: mmTex = "noviembre"; break;
        case 12: mmTex = "diciembre"; break;
    }

    cout << dd << " de " << mmTex;
}

void leerFecha(int& dia, int& mes, int& anyo){
    cout << "día: "; cin >> dia;
    cout << "mes: "; cin >> mes;
    cout << "año: "; cin >> anyo;
}

/*int main(){
    setlocale(LC_ALL, "");

    CFecha f1, f2;
    int dd = 0, mm = 0, aaaa = 0;

    f1.asignarFecha(8, 11, 2002);
    cout << "Mi fecha de nacimiento es el ";
    f1.visualizarFechaTxt();

    f2.asignarFecha(29, 2, 2023);
    cout << "Nos vemos el ";
    f2.visualizarFecha();

    cout << endl;
    system("pause");

    return 0;
}
*/

/*int main(){
    setlocale(LC_ALL, "");

    CFecha f1, f2;
    int dd = 0, mm = 0, aaaa = 0;

    f1.asignarFecha(8, 11, 2002);
    cout << "Mi fecha de nacimiento es ";
    f1.visualizarFecha();

    f2.asignarFecha(29, 2, 2023);
    cout << "Nos vemos el ";
    f2.visualizarFecha();

    cout << endl;
    system("pause");

    return 0;

}
*/
