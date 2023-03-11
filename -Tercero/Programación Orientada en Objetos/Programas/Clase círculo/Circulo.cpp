#include "Circulo.h"

#include <iostream>

using namespace std;


  void Circulo::msgEsNegativo()
 {
    cout << "El radio es negativo. Se convierte a positivo\n";
  }
  // miembros públicos
  //Circulo::Circulo(); // constructor sin parámetros
  Circulo::Circulo(double cx, double cy, double r) // constructor
  {
    x = cx; y = cy;
    if (r < 0)
 {
      msgEsNegativo();
      r = -r;
    }
    radio = r;
  }
  double Circulo::longCircunferencia()
 {
    return 2 * 3.1415926 * radio;
  }
  double Circulo::areaCirculo()
 {
    return 3.1415926 * radio * radio;
  }
  double Circulo::obtenerX(){
    return x;
  }
  double Circulo::obtenerY(){
    return y;
  }
  double Circulo::obtenerRadio(){
    return radio;
  }
  void Circulo::asignarRadio(double r){
    if(r < 0){
        r = -r;
    }
    radio = r;
  }
