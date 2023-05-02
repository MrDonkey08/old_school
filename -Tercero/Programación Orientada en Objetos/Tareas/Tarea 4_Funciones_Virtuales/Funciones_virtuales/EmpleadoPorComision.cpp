// Fig. 13.2: EmpleadoPorComision.cpp
// Definiciones de las funciones miembro de EmpleadoPorComision.
#include <iostream>
using std::cout;

#include "EmpleadoPorComision.h" // definici�n de la clase EmpleadoPorComision

// constructor
EmpleadoPorComision::EmpleadoPorComision(
    const string &nombre, const string &apellido, const string &nss,
    double ventas, double tarifa )
    : primerNombre( nombre ), apellidoPaterno( apellido ), numeroSeguroSocial( nss )
{
    setVentasBrutas( ventas ); // valida y almacena las ventas brutas
    setTarifaComision( tarifa ); // valida y almacena la tarifa de comisi�n
} // fin del constructor de EmpleadoPorComision

// establece el primer nombre
void EmpleadoPorComision::setPrimerNombre( const string &nombre )
{
    primerNombre = nombre; // debe validar
} // fin de la funci�n setPrimerNombre

// devuelve el primer nombre
string EmpleadoPorComision::getPrimerNombre() const
{
    return primerNombre;
} // fin de la funci�n getPrimerNombre

// establece el apellido paterno
void EmpleadoPorComision::setApellidoPaterno( const string &apellido )
{
    apellidoPaterno = apellido; // debe validar
} // fin de la funci�n setApellidoPaterno

// devuelve el apellido paterno
string EmpleadoPorComision::getApellidoPaterno() const
{
    return apellidoPaterno;
} // fin de la funci�n getApellidoPaterno

// establece el n�mero de seguro social
void EmpleadoPorComision::setNumeroSeguroSocial( const string &nss )
{
    numeroSeguroSocial = nss; // debe validar
} // fin de la funci�n setNumeroSeguroSocial

// devuelve el n�mero de seguro social
string EmpleadoPorComision::getNumeroSeguroSocial() const
{
    return numeroSeguroSocial;
} // fin de la funci�n getNumeroSeguroSocial

// establece el monto de ventas brutas
void EmpleadoPorComision::setVentasBrutas( double ventas )
{
    ventasBrutas = ( ventas < 0.0 ) ? 0.0 : ventas;
} // fin de la funci�n setVentasBrutas

// devuelve el monto de ventas brutas
double EmpleadoPorComision::getVentasBrutas() const
{
    return ventasBrutas;
} // fin de la funci�n getVentasBrutas

// establece la tarifa de comisi�n
void EmpleadoPorComision::setTarifaComision( double tarifa )
{
    tarifaComision = ( tarifa > 0.0 && tarifa < 1.0 ) ? tarifa : 0.0;
} // fin de la funci�n setTarifaComision

// devuelve la tarifa de comisi�n
double EmpleadoPorComision::getTarifaComision() const
{
    return tarifaComision;
} // fin de la funci�n getTarifaComision

// calcula los ingresos
double EmpleadoPorComision::ingresos() const
{
    return getTarifaComision() * getVentasBrutas();
} // fin de la funci�n ingresos

// imprime el objeto EmpleadoPorComision
void EmpleadoPorComision::imprimir() const
{
    cout << "empleado por comision: "
        << getPrimerNombre() << ' ' << getApellidoPaterno()
        << "\nnumero de seguro social: " << getNumeroSeguroSocial()
        << "\nventas brutas: " << getVentasBrutas()
        << "\ntarifa de comision: " << getTarifaComision();
} // fin de la funci�n imprimir
