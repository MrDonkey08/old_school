#include <iostream>
#include "fecha.h"
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "");

    CFecha f1, f2;
    int dd = 0, mm = 0, aaaa = 0;
    int salir = 1, opcSalir = 1, opcFormato;


    do{
        cout << "Introduce tu fecha de cumpleaños: " << endl;
        f1.leerFecha();

        system("cls");

        cout << "¿En qué formato deseas visualizar la fecha?" << endl;
        cout << "1. día/mes/año" << endl;
        cout << "2. Textual" << endl;
        cout << "Opción: "; cin >> opcFormato;

        system("cls");

        do{
            switch (opcFormato){
                case 1:
                    cout << "Tu fecha de cumpleaños es el ";
                    f1.visualizarFecha();
                    cout << "Tu signo zodiacal es ";
                    salir = 1;
                    break;

                case 2:
                    cout << "Tu fecha de cumpleaños es el ";
                    f2.visualizarFechaTextual();
                    salir = 1;
                    break;

                default:
                    cout << "Opción inválida. Presiona <enter> para intentarlo de nuevo." << endl;
                    salir = 0;
                    break;
            }
            system("pause");
            system("cls");
        } while (salir = 0);

        cout << "¿Deseas introducir otra fecha de cumpleaños?" << endl;
        cout << "1. Sí" << endl;
        cout << "2. No" << endl;
        cout << "Opción: "; cin >>  opcSalir;

        switch (opcSalir){
            case 1: opcSalir = 0; break;
            case 2: opcSalir = 1; break;
            default: cout << "Opción incorrecta. Intentalo de nuevo"; break;
        }
        system("pause");
        system("cls");

    } while(opcSalir == 0);

    return 0;
}
/*int main(){
    setlocale(LC_ALL, "");

    CFecha f1, f2;
    int dd = 0, mm = 0, aaaa = 0;

    f1.asignarFecha(8, 11, 2002);
    cout << "Mi fecha de nacimiento es el ";
    f1.visualizarFechaTextual();

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
