#include <iostream>
#include <locale.h>
#include "circulo.h"


using namespace std;

int main(){
  setlocale(LC_ALL, "");

  Circulo c1 (7.5, 9.5, 10.5);

  double result;
  result = c1.areaCirculo();
  cout << "El área del círculo es = " << result << endl;
}

  /*
  cout << "x = " << c1.obtenerX() << endl;
  cout << "y = " << c1.obtenerY() << endl;
  cout "Radio = " << c1.obtenerRadio() <<endl;

  Circulo c2(15.5, 20,5, 7.5);
  cout << "x = " << c2.obtenerX() << endl;
  cout << "y = " << c2.obtenerY() << endl;
  cout << "Radio = " << obtenerRadio() << endl;

  //  c2.longCircunferencia();
  cout << "Perimetro = " << c2.longCircunferencia() << endl;
  cout << "Área = " << c2.areaCiruclo() << endl;

  Circulo c3(15.5, 20.5, 7.5);
  cout << "x = " << c3.obtenerX() << endl;
  cout << "y = " << c3.obtenerY() << endl;
  cout "Radio = " << c3.obtenerRadio() << endl;
  cout << "Radio = " << c3.asignarRadio () << endl;
}
*/
//Proyecto: Te crea un carpeta donde te organiza tus archivos
