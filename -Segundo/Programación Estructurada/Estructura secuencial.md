dLa estructura secuncial, ejecuta automáticamente enunciados uno después del otro en el orden el cual se ha escrito de inicio a fin.

## Caracteristicas de un algoritmo
- Inicio y un fin bien definidos.
- Pasos que deben tener un orden lógico.
|Figura|Nombre|
|:-:|:-:|
|Oválo / Elipse|Inicio / Fin|
|Romboide|Imprimir mensaje|
|Rectángulo|Leer (guardar información)|

	/*Suma de dos números enteros */
	Inicio del bloque de instruciiones 
		entero a, b, c;
	ercribe: "captura del primer valor. ";
		leer: a;
	escribe: "captura el segundo valor: ";
		leer: b;
	c <- a + b;
	escribe: "El resultado es: ", c;
	escribe: "Presione <enter> para salir...";
	Fin (del bloque de instrucciones)

$\elipsed \mbox{Inicio}$
$\squared \mbox{a,b,c}$
$\rhomboided \mbox{capturar el primer valor:}$
$\squaerd \mbox{capturar el segundo valor}$
$\squared \mbox{leer: b}$
$\rhomboided \mbox{el resultado es:     , c}$

Suponga que un individuo desea invertir su capital en un banco y desea saber cuánto dinero ganará después de un mes si el banco paga a razón del 2% mensual. 

Imprimir: 
a) Capital invertir
b) Ganancia
c) Capital final

Inicio principal ()
Incio (del bloque de instrucciones)
	float cap_inv, ganancia, cap_fin;
	escribe: "¿Cuánto dinero deseas invertir en el banco? " ;
		leer: cap_inv;
	ganancia $\leftarrow$ cap_inv * 0.02;
	cap_fin $\leftarrow$ cap_inv + ganancia;
	escribe "Su capital invertido fue de: " , cap_inv;
	escribe "Su ganancia será de: " , ganancia;
	escribe "Su capital final será de: ", cap_fin;
fin (del bloque de instrucciones)

Un vendedor recibe un sueldo base más un 10% extra por comisión de sus ventas, el vendedor desea saber cuánto dinero obtendrá por concepto de comisiones por las 3 ventas que realiza en el mes y el total que recibirá en el mes tomando en cuenta su sueldo base y comisiones.

Inicio principal ()
Incio (del bloque de instrucciones)
	i $\leftarrow$ =0
	mientras i <= 3:
		i $\leftarrow$ i + 1;
		escribe: "Introduce el valor de la venta " , v_venta;
		leer v_venta[i] 
		comision[i] $\leftarrow$ v_venta* 0.1;
	cap_fin $\leftarrow$ comision[1] + comision[2] + comision [3] + sueldo;
		
		
		
		 
		
		
		
		
	

Imprimir:
a) Sueldo base.
b) Comisión.
c) Venta + comisión (cada una de ellas)
d) Capital final.

	Inicio principal()
	Inicio del bloque de instrucciones
	
	Flotante sueldo, venta_1, venta_2, venta_3, comision, cap_fin;
	escribe: "Ingrese sueldo base";
	Leer: sueldo
	escribe: "Introduce el valor de la primera venta";
	Leer: venta_1;
	escribe: "Introduce el valor de la segunda venta";
	leer: venta_2;
	escribe: "Introduce el valor de la tercera venta";
	leer: venta_3;
	comision <- venta_1 + venta_2 + venta_3 * 0.1;
	total <- sueldo + comision;
	escribe: "Su capital final", cap_fin;
	escribe: "Presione<enter> para salir";
	fin del bloque de instrucciones