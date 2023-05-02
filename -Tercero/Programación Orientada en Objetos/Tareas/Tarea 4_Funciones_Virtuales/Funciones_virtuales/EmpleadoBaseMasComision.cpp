// Fig. 13.4: EmpleadoBaseMasComision.cpp
// Definiciones de las funciones miembro de la clase EmpleadoBaseMasComision.
#include <iostream>
using std::cout;

// definici�n de la clase EmpleadoBaseMasComision
#include "EmpleadoBaseMasComision.h"

// constructor
EmpleadoBaseMasComision::EmpleadoBaseMasComision(
    const string &nombre, const string &apellido, const string &nss,
    double ventas, double tarifa, double salario )
    // llama en forma expl�cita al constructor de la clase base
    : EmpleadoPorComision( nombre, apellido, nss, ventas, tarifa )
{
    setSalarioBase( salario ); // valida y almacena el salario base
} // fin del constructor de EmpleadoBaseMasComision

// establece el salario base
void EmpleadoBaseMasComision::setSalarioBase( double salario )
{
    salarioBase = ( salario < 0.0 ) ? 0.0 : salario;
} // fin de la funci�n setSalarioBase

// devuelve el salario base
double EmpleadoBaseMasComision::getSalarioBase() const
{
    return salarioBase;
} // fin de la funci�n getSalarioBase

// calcula los ingresos
double EmpleadoBaseMasComision::ingresos() const
{
    return getSalarioBase() + EmpleadoPorComision::ingresos();
} // fin de la funci�n ingresos

// imprime el objeto EmpleadoBaseMasComision
    void EmpleadoBaseMasComision::imprimir() const
{
    cout << "con salario base ";

    // invoca a la funci�n imprimir de EmpleadoPorComision
    EmpleadoPorComision::imprimir();

    cout << "\nsalario base: " << getSalarioBase();
} // fin de la funci�n imprimir
