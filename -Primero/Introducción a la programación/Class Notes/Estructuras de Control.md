# Estructuras de Control

Las estructuras de control nos permiten diseñar en tres formas generales la solución a los problemas que queremos resolver en la computadora, éstas son: estructura de control secuencial, estructura de control selectiva y estructura de control respetiva.

## Operadores relacionales

Los **operadores relacionales** evalúan una condición entre dos valores para hacer una comparación y el resultado puede ser verdadero o falso.

## Tipos de Estructuras de Control

- **Secuencial.** Es aquella en la que la solución del problema está compuesta por una línea consecutiva.

- **Selectiva.** Es aquella en la que la solución del problema requiere hacer una comparación para tomar una desición.

	- **Simple.** Consiste en que al hacer una comparación, por un lado ejecute una acción y por el otro vaya directo a la salida de la comparación

	- **Doble.** Por otra parte, este, al hacer una comparación, en cualquiera de los dos lados ejecuta una acción.

	- **Multiple.** Permite, a partir de la evaluación de una expresión, elegir entre varias opciones.

**Repetitiva.** Representa la repetición de una o vaias sentencias (instrucciones), también llamado **ciclo** o **bucle**.

Para que la **estructura de control repetitiva** no sea infinlta, requiere un **contador**, un **incremento** o **decremento** que, en cada "evaluación", haga cambiar el **contador** y **una condición**.

**Mientras-While.** Evalúa primero la condición y, en caso de ser verdadera, repite los procesos que se encuentran dentro de ella hasta que la condición se vuelva negativa.

En esta estructura de control el contador se debe inicializar antes de escribir la instrucción while y el incremento o decremento del contador debe formar parte del proceso de while.

**Para-for.** Esta permite que los elementos para repetir procesos (contador, condición, incremento y decremento del contador) sean usados en el mismo lugar.

for con in range (a, b):

### Operadores relacionales
Los **operadores relacionales** evalúan una condición entre dos valores para hacer una comparación y el resultado puede ser verdadero o falso.

| Operador |    Significado    | Ejemplo |
|:--------:|:-----------------:|:-------:|
|    ==    |      Igual a      |  a == b   |
|    !=    |    No igual a     |  a != b   |
|    >     |     Mayor que     |   a < b   |
|    <     |     Menor que     |   a > b   |
|    >=    | Mayor o igual que |  a >= b   |
|    <=    | Menor o igual que |  a =< b   |

```
If <condicion>:

   <sentencia 1>

   <sentencia n>

If <condicion>:
   <sentencia 1>
   <sentencia n>

else: 
   <sentencia 1>
   <sentencia n>
```

%c = str, simple, cáracter.

%s str, cadena de cáracter

%d int, enteros

%f float

%o octal

%sx sexadecimal