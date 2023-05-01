// Fig. 12.5: EmpleadoBaseMasComision.h
// Clase EmpleadoBaseMasComision derivada de la clase
// EmpleadoPorComision.
#ifndef BASEMAS_H
#define BASEMAS_H

#include <string> // clase string estándar de C++
using std::string;

#include "EmpleadoPorComision.h" // declaración de la clase EmpleadoPorComision

class EmpleadoBaseMasComision : public EmpleadoPorComision
{
public:
EmpleadoBaseMasComision( const string &, const string &,
const string &, double = 0.0, double = 0.0, double = 0.0 );

void establecerSalarioBase( double ); // establece el salario base
double obtenerSalarioBase() const; // devuelve el salario base

virtual double ingresos() const override; // calcula los ingresos
virtual void imprimir() const override; // imprime el objeto
private:
double salarioBase; // salario base
}; // fin de la clase EmpleadoBaseMasComision

#endif
