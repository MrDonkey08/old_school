// Fig. 6.19: fig06_19.cpp
// Comparación entre paso por valor y paso por referencia mediante referencias.
#include <iostream>
using std::cout;
using std::endl;

int cuadradoPorValor( int ); // prototipo de función (paso por valor)
void cuadradoPorReferencia( int & ); // prototipo de función (paso por referencia)

int main()
{
    int x = 2; // valor para cuadrado usando cuadradoPorValor
    int z = 4; // valor para cuadrado usando cuadradoPorReferencia

    // demuestra cuadradoPorValor
    cout << "x = " << x << " antes de cuadradoPorValor\n";
    cout << "Valor devuelto por cuadradoPorValor: "
        << cuadradoPorValor( x ) << endl;
    cout << "x = " << x << " despues de cuadradoPorValor\n" << endl;

// demuestra cuadradoPorReferencia
    cout << "z = " << z << " antes de cuadradoPorReferencia" << endl;
    cuadradoPorReferencia( z );
    cout << "z = " << z << " despues de cuadradoPorReferencia" << endl;
    return 0; // indica que terminó correctamente
} // fin de main

// cuadradoPorValor multiplica el número por sí mismo, almacena el
// resultado en el número y devuelve el nuevo valor del número
int cuadradoPorValor( int numero )
{
    return numero *= numero; // no se modificó el argumento de la función que hizo la llamada
} // fin de la función cuadradoPorValor

// cuadradoPorReferencia multiplica a refNumero por sí solo y almacena el resultado
// en la variable a la que refNumero hace referencia en la función main
void cuadradoPorReferencia( int &refNumero )
{
    refNumero *= refNumero; // se modificó el argumento de la función que hizo la llamada
} // fin de la función cuadradoPorReferencia
