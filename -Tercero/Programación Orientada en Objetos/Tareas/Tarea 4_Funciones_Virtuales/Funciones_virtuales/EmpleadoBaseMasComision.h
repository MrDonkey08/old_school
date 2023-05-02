// Fig. 13.9: EmpleadoBaseMasComision.h
// Clase EmpleadoBaseMasComision derivada de la clase
// EmpleadoPorComision.
#ifndef BASEMAS_H
#define BASEMAS_H

#include <string> // clase string est�ndar de C++
using std::string;

#include "EmpleadoPorComision.h" // declaraci�n de la clase EmpleadoPorComision

class EmpleadoBaseMasComision : public EmpleadoPorComision
{
    public:
        EmpleadoBaseMasComision( const string &, const string &,
            const string &, double = 0.0, double = 0.0, double = 0.0 );

        void setSalarioBase( double ); // establece el salario base
        double getSalarioBase() const; // devuelve el salario base

        virtual double ingresos() const; // calcula los ingresos
        virtual void imprimir() const; // imprime el objeto EmpleadoBaseMasComision
    private:
        double salarioBase; // salario base
}; // fin de la clase EmpleadoBaseMasComision

#endif
