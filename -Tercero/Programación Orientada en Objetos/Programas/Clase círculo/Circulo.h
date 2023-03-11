#if !defined (_CIRCULO_H_)
#define _CIRCULO_H_

#include <iostream>

using namespace std;

// circulo.h - Declaración de la clase Círculo
//
class Circulo
{
    // miembros privados
    private:
        double x, y; // coordenadas del centro
        double radio; // radio del círculo
    // miembros protegidos
    protected:
    void msgEsNegativo();
    // miembros públicos
    public:
        Circulo(); // constructor sin parámetros
        Circulo(double cx, double cy, double r); // constructor
        double longCircunferencia();
        double areaCirculo();
        void asignarRadio(double r);

        double obtenerX();
        double obtenerY();
        double obtenerRadio();

};

#endif
