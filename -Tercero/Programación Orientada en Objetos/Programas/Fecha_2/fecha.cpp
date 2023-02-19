#include <iostream>
#include "fecha.h"

using namespace std;

bool CFecha::anyoBisiesto(int aaaa){
    return ((aaaa % 4 == 0) && (aaaa % 100 != 0) || (aaaa % 400 == 0));
}

bool CFecha::asignarFecha(int dd, int mm, int aaaa){
        if (!fechaValida(dd, mm, aaaa)){
        cout << "Fecha incorrecta. Se asigna 01/01/2001.\n";
        dia = 1; mes = 1; anyo = 2001;
        return false;
    }
    dia = dd; mes = mm; anyo = aaaa;
    return true;
}

void CFecha::obtenerFecha(int& dd, int& mm, int& aaaa){
    dd = dia; mm = mes; aaaa = anyo;
}

bool CFecha::fechaValida(int dd, int mm, int aaaa){
    bool diaCorrecto, mesCorrecto, anyoCorrecto;
    anyoCorrecto = (aaaa >= 1582);
    mesCorrecto = (mm >= 1) && (mm <= 12);

    switch (mm){
        case 2:
            if (anyoBisiesto (aaaa))
                diaCorrecto = (dd >= 1 && dd <= 29);
            else
                diaCorrecto = (dd >= 1 && dd <= 28);
            break;

        case 4: case 6: case 9: case 11:
            diaCorrecto = (dd >= 1 && dd <= 30);
            break;

        default: diaCorrecto = (dd >= 1 && dd <= 31);
    }
    return diaCorrecto && mesCorrecto && anyoCorrecto;
}

void CFecha::leerFecha(){
    cout << "día: "; cin >> dia;
    cout << "\nmes: "; cin >> mes;
    cout << "\naño: "; cin >> anyo;
}

void CFecha::visualizarFecha(){
    int dd = 0, mm = 0, aaaa = 0;
    obtenerFecha(dd, mm, aaaa);
    cout << dd << "/" << mm << "/" << aaaa;
}

void CFecha::visualizarFechaTextual(){
    int dd = 0, mm = 0, aaaa = 0;
    string mmTex;
    obtenerFecha(dd, mm, aaaa);

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

    cout << dd << " de " << mmTex << " de " << aaaa << endl;
}

void CFecha::signoZodiacal(){
    int dd = 0, mm = 0, aaaa = 0;
    string signo;
    obtenerFecha(dd, mm, aaaa);

    switch (mm){
        case 1:
            if (dd <= 20){
                signo = "capricornio";
            }
            else if (dd >= 21){
                signo = "acuario";
            }
            break;

        case 2:
            if (dd <= 19){
                signo = "acuario";
            }
            else if (dd >= 20){
                signo = "piscis";
            }
            break;

        case 3:
            if (dd <= 20){
                signo = "piscis";
            }
            else if (dd >= 21){
                signo = "aries";
            }
            break;

        case 4:
            if (dd <= 19){
                    signo = "aries";
                }
            else if (dd >= 20){
                signo = "tauro";
            }
            break;

        case 5:
            if (dd <= 20){
                    signo = "tauro";
                }
            else if (dd >= 21){
                signo = "geiminis";
            }
            break;

        case 6:
            if (dd <= 20){
                    signo = "geminis";
                }
            else if (dd >= 21){
                signo = "cáncer";
            }
            break;

        case 7:
            if (dd <= 22){
                    signo = "cáncer";
                }
            else if (dd >= 23){
                signo = "leo";
            }
            break;

        case 8:
            if (dd <= 22){
                    signo = "leo";
                }
            else if (dd >= 23){
                signo = "virgo";
            }
            break;

        case 9:
            if (dd <= 22){
                    signo = "virgo";
                }
            else if (dd >= 23){
                signo = "libra";
            }
            break;

        case 10:
            if (dd <= 22){
                    signo = "libra";
                }
            else if (dd >= 23){
                signo = "escorpio";
            }
            break;

        case 11:
            if (dd <= 21){
                    signo = "escorpio";
                }
            else if (dd >= 22){
                signo = "sagitario";
            }
            break;

        case 12:
            if (dd <= 21){
                    signo = "sagitario";
                }
            else if (dd >= 22){
                signo = "capricorio";
            }
            break;
    }

    cout << signo;
}

