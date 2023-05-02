// Fig. 13.8: EmpleadoPorComision.h
// Definici�n de la clase EmpleadoPorComision que representa a un empleado por comisi�n.
#ifndef COMISION_H
#define COMISION_H

#include <string> // clase string est�ndar de C++
using std::string;

class EmpleadoPorComision
{
	public:
	EmpleadoPorComision( const string &, const string &, const string &,
	double = 0.0, double = 0.0 );

	void setPrimerNombre( const string & ); // establece el primer nombre
	string getPrimerNombre() const; // devuelve el primer nombre

	void setApellidoPaterno( const string & ); // establece el apellido paterno
	string getApellidoPaterno() const; // devuelve el apellido paterno

	void setNumeroSeguroSocial( const string & ); // establece el NSS
	string getNumeroSeguroSocial() const; // devuelve el NSS

	void setVentasBrutas( double ); // establece el monto de ventas brutas
	double getVentasBrutas() const; // devuelve el monto de ventas brutas

	void setTarifaComision( double ); // establece la tarifa de comisi�n
	double getTarifaComision() const; // devuelve la tarifa de comisi�n

	virtual double ingresos() const; // calcula los ingresos
	virtual void imprimir() const; // imprime el objeto EmpleadoPorComision
private:
	string primerNombre;
	string apellidoPaterno;
	string numeroSeguroSocial;
	double ventasBrutas; // ventas brutas por semana
	double tarifaComision; // porcentaje de comisi�n
}; // fin de la clase EmpleadoPorComision

#endif
