#include "Circulo.h"

#include <iostream>
using namespace std;


  void Circulo::msgEsNegativo()
 {
    cout << "El radio es negativo. Se convierte a positivo\n";
  }
  // miembros públicos
public:
  Circulo(); // constructor sin parámetros
  Circulo(double cx, double cy, double r) // constructor
  {
    x = cx; y = cy;
    if (r < 0)
 {
      msgEsNegativo();
      r = -r;
    }
    radio = r;
  }
  double longCircunferencia()
 {
    return 2 * 3.1415926 * radio;
  }
  double areaCirculo()
 {
    return 3.1415926 * radio * radio;
  }
  double obtenerX(){
    return x;
  }
  double obtenerY(){
    return y;
  }
  double obtenerRadio(){
    return radio;
  }
  void asignarRadio(double r){
    if(r < 0){
        r = -r;
    }
    radio = r;
  }
}; // fin de la clase círculo
