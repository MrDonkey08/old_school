# Tarea1\_JuarezRubio\_AlanYahir

## Universidad de Guadalajara

### Centro Universitario de Ciencias Exactas E Ingenierías 

![Portada-UDG | left |200](../../Programaci%C3%B3n%20Orientada%20en%20Objetos/Tareas/Attachments/Images/Portada-UDG.jpeg) ![Portada-CUCEI | right | 1](../../Programaci%C3%B3n%20Orientada%20en%20Objetos/Tareas/Attachments/Images/Portada-CUCEI.jpeg)

\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\


#### División de Tecnologías para la Integración Ciber-humana

#### Departamento de Ciencias Computacionales

**Tarea # 1**

**Tema: Evolución de los Paradigmas de Software y consideraciones sobre el proceso de abstracción**

**Estudiante: Juárez Rubio Alan Yahir**

**Materia: Programación Orientada a Objetos**

**Sección: D03**

**Calendario: 2023-A**

**Profesor: Mariscal Lugo Luis Felipe**

**Fecha de entrega: 28/01/2023**

***

## Evolución de los paradigmas de software

***

### ¿Qué es un paradigma de programación?

Un **paradigma de programación** es un estilo de programación de _software_. Este indica un método de realizar cómputos y la forma en la que se deben de estructurar y organizar las tareas que debe de llevar a cabo un programa.

***

### Tipos de paradigmas

Los **paradigmas fundamentales** están basados en diferentes **modelos de cómputo**, y, por lo tanto, afectan a las contrucciones más básicas de un programa.

La división principal reside en el enfoque **imperativo** y el enfoque **declarativo**. De estas se desglozan el resto de paradimgas (o modelos) de programación: aquellos que se enfocan en la estructura y organización de los programas (estructurada, orientada a objetos, orientada a eventos, génerica) y aquellos que están asociados a la concurrencia y a los sistemas de tipado.

***

#### Paradigma Imperativo

Consiste en una serie de sentencias ejecutadas según un control de flujo explícito, que modifican el estado del programa. Este paradigma describe cómo debe realizarse el cálculo y no el porqué.

Respecto a este paradigma, se encuentran asociados los paradigmas **procedural**, **modular**, y la **programación estructurada**.

***

#### Paradigma Declarativo

A diferencia del paradigma imperativo, en este paradigma no existe un orden de evaluación prefijado. Además, este describe qué se debe calcular sin explicar el cómo. El control de flujo suele estar asociado a la composición funcional, la recursividad y/o técnicas de reescritura y unificación.

Las principales variantes del paradigma **declarativo** son: paradigma **funcional**, **lógico**, la programación **reactiva** y los lenguajes descriptivos.

***

#### Programación Funcional

Es un paradigma de programación declarativa basado en la utilización de funciones aritméticas que no maneja datos mutables o de estado. Enfatiza la aplicación de funciones, en contraste con el estilo de programación imperativa, que enfatiza los cambios de estado.

Cabe mencionar que todos los elementos pueden entenderse como funciones y el código puede ejecutarse mediante llamadas de función secuenciales.

***

#### Programación Lógica

El paradigma de software lógico, denominado también como programación predicativa, se basa en la lógica matemática. En lugar de una sucesión de instrucciones, un software programado según este principio contiene un conjunto de principios que se pueden entender como una recopilación de hechos y suposiciones. Todas las solicitudes al programa se procesan de forma que el intérprete recurre a estos principios y les aplica reglas definidas previamente para alcanzar el resultado deseado.

***

#### Programación Reactiva

La **programación reactiva** es un paradigma basado en la **teoría de grafos** el cual está enfocado en el trabajo con flujos de datos finitos o infinitos de manera asíncrona. Se basa en **escuchar lo que emite un evento o cambios en el flujo de datos**, en donde los objetos reaccionan a los valores que reciben de dicho cambio. Este paradigma se caracteriza por:

* Un programa consiste en la especificación del flujo de datos.
* Las variables se encuentran ligadas a las operaciones que proporcionan sus valores.

***

#### Programación Procedural

Consiste en estructurar el código de un programa en secciones lógicas llamadas componenetes, rutinas, subrutinas, funciones o procedimientos, donde cada procedimiento resuelve una tarea específica, y se ejecuta cada vez que sea necesario. Cabe destacar que un procedimiento puede llamar a otros procedimientos.

***

#### Programación Modular

Consiste en dividir un programa en módulos o subprogramas con el fin de hacerlo más legible y manejable.

De los métodos más conocidos para resolver un problema, es dividirlo en problemas más pequeños, llamados subproblemas. De esta manera, en lugar de resolver una tarea compleja y tediosa, resolvemos otras más sencillas y a partir de ellas llegamos a la solución.

***

#### Programación Estructurada

La **programación estructurada** es un paradigma de programación orientado a mejorar la claridad, calidad y tiempo de desarrollo de un programa utilizando únicamente subrutinas o funciones y tres estructuras: secuencial, condicional y repetitiva.

A finales de los años 1970 surgió una nueva forma de programar que daba lugar a programas más legibles, fiables y eficientes. Se basaban en el **teorema del programa estructurado**, propuesto por Böhm-Jacopini, que demuestra que todo programa puede escribirse utilizando únicamente las tres estructuras de control siguientes:

* Estructura secuencial. Está formada por una secuencia de llamadas a instrucciones del lenguaje o funciones del programador.
* Estructura condicional. Es aquella que ejecuta una estructura si se cumple una condición booleana.
* Estructura iterativa con condición. Es aquella que ejecuta una estructura una y otra vez si se cumple una condición booleana.

***

#### Programación Orientada a Objetos

En este modelo de paradigma se construyen modelos de objetos que representan elementos (objetos) del problema a resolver, que tienen características y funciones. Permite **separar los diferentes componentes de un programa**, simplificando así su creación, depuración y posteriores mejoras.

La programación orientada a objetos disminuye los errores y promociona la reutilización del código. Es una manera especial de programar, que se acerca de alguna manera a cómo expresaríamos las cosas en la vida real.

***

#### Programación Orientada a Eventos

La programación dirigida por eventos se caracteriza por no controlar la secuencia de ejecuciones. Más bien, en la programación dirigida por eventos se reacciona a los sucesos ocurridos. Para ello, generalmente los programas corren indefinidamente integrando manejadores de eventos (event handlers).

Los programas dirigidos a eventos se mantienen en estado de reposo, hasta que una acción dispara un **event handler**. Este se encarga de procesar el evento en cuestión. Algunos eventos comunes son:

* Clics (ya sea en un mouse, teclado, pantalla, etc.)
* Sensores (de temperatura, movimiento, etc.)
* Mensajes
* Triggers
* Casos de aplicación
* Solicitudes HTTP

***

En resumen, es importante conocer los diferentes tipos de paradigmas de software. Quizá te estarás preguntando "¿Cuál es el mejor?", la respuesta es ninguno. Cada uno de los paradigmas tiene un enfoque y propósito distinto; es importante que, una vez que conozcas y te familiarices con cada uno de los diferentes paradigmas (por los menos los más importantes) y eligas el que más te convenga respecto a tus necesidades y a tu flujo de trabajo.

***

## Consideraciones sobre el proceso de abstracción

***

### ¿Qué es la abstracción?

La abstracción, un principio por el cual se aísla toda aquella información que no resulta relevante a un determinado nivel de conocimiento.

Abstracción: Es una descripción de especificación que enfatiza algunos de los detalles o propiedades de algo. La abstracción consiste en captar las características esenciales de un objeto, así como su comportamiento. Es un método por el cual abstraemos valga la redundancia, una determinada entidad de la realidad de sus características y funciones que desempeñan, estos son representados en clases por medio de atributos y métodos de dicha clase.

En general un programa no es más que una descripción abstracta de un procedimiento o fenómeno que existe o sucede en el mundo real.

* La abstracción es crucial para comprender este complejo mundo.
* La abstracción es esencial para el funcionamiento de una mente humana normal y es una herramienta muy potente para tratar la complejidad.
* La abstracción es clave para diseñar un buen software.

***

#### Ejemplos de Abstracción

Ejemplo 1: ¿Qué características podemos abstraer de los automóviles? o ¿Qué características semejantes tienen todos los automóviles?

Características: Marca, Modelo, Número de chasis, Peso llantas o cauchos, Puertas, Ventanas... Comportamiento: Acelerar, Frenar, Retroceder...

Ejemplo 2: La gerencia de un taller mecánico necesita un sistema para controlar los vehículos que ingresan a sus instalaciones. En este caso, las características esenciales de la clase vehículo son: Marca, Modelo, Color, Falla detectada, Nombre del Propietario, Dirección del Propietario, Teléfono del Propietario...

***

### ¿Cómo lograr la abstracción?

En un nivel superior, Abstracción es un proceso de ocultar los detalles de implementación y mostrar solo la funcionalidad para el usuario. Solo indica cosas importantes para el usuario y oculta los detalles internos, es decir. Mientras envía SMS, simplemente escriba el texto y envíe el mensaje. Aquí, no le importa el procesamiento interno de la entrega del mensaje. La abstracción se puede lograr utilizando la clase abstracta y el método abstracto

***

#### Método abstracto

Un método sin cuerpo se conoce como Método abstracto. Debe ser declarado en una clase abstracta. El método abstracto nunca será definitivo porque la clase abstracta debe implementar todos los métodos abstractos.

***

### Reglas del método abstracto

* Los métodos abstractos no tienen una implementación; solo tiene firma de método
* Si una clase usa un método abstracto, debe declararse abstracto. Lo opuesto no puede ser cierto. Esto significa que una clase abstracta no necesariamente tiene un método abstracto.
* Si una clase regular extiende una clase abstracta, entonces esa clase debe implementar todos los métodos abstractos del padre abstracto

***

### Módulos

Es una técnica que proporciona la posibilidad de dividir sus datos y procedimientos en una parte privada y una parte pública. Proporcionan un método efectivo de ocultación de la información, pero no permiten realizar instanciación, que es la capacidad de hacer múltiples copias de las zonas de datos.

***

Para finalizar, el proceso de abstracción aunque es algo relativamente sencillo, es importante tenerlo en cuenta en la programación orientada a objetos, ya que de este depende para cumplir su principal propósito: describir las caracteristicas de interés y asociarlas con su respectivo objeto.

***

## Referencias

***

* García, E. (10 de abril de 2019). _¿Qué es la Programación Funcional?_. Código Facilito. Recuperado el 28 de enero de 2023 de https://codigofacilito.com/articulos/programacion-funcional
* _Evolución De Los Paradigmas De Programación_ (12 de enero de 2013). Recuperado el 28 de enero de 2023 de https://desarrollo--software.blogspot.com/2013/01/evolucion-de-los-paradigmas-de.html
* Martínez, M. (9 de junio de 2020). _¿Qué son los paradigmas de programación?_. Profile. Recuperado el 28 de enero de 2023 de https://profile.es/blog/que-son-los-paradigmas-de-programacion/
* Digital Guide Ionos (11 de febrero de 2020). _Programación funcional: ideal para algoritmos_. Recuperado el 28 de enero de 2023 de https://www.ionos.mx/digitalguide/paginas-web/desarrollo-web/programacion-funcional/
* Ecured (s.f.). _Programación Modular_. Recuperado el 28 de enero de 2023 de https://www.ecured.cu/Programaci%C3%B3n\_Modular
* _Programación Procedural_ (s.f.). http://www.atc.uniovi.es/telematica/2ac/Transparencias/T02-Programacion-Procedural.pdf
* Vega, H. y Villafraz, C. (s.f.). _Programación procedural_. Platzi. Recuperado el 28 de enero de 2023 de https://platzi.com/clases/2211-historia-programacion/35075-programacion-procedural/
* _Programación Estructurada_ (18 de septiembre de 2017). Recuperado el 28 de enero de 2023 de https://webs.um.es/ldaniel/iscyp17-18/10-programacionEstructurada.html
* Vega H. y Villafraz C. (s.f.). _Programación dirigida por eventos_. Platzi. Recuperado el 28 de enero de 2023 de https://platzi.com/clases/2211-historia-programacion/35079-programacion-dirigida-por-eventos/
* Iñigo J. (10 de marzo de 2017). _¿Qué es la Programación Reactiva? Una introducción_. Profile. Recuperado el 28 de enero de 2023 de https://profile.es/blog/que-es-la-programacion-reactiva-una-introduccion/
* Guru 99 (15 de junio de 2023). _¿Qué es abstracción en OOPs? Aprende con el ejemplo de Java_. Recuperado el 28 de enero de 2023 de https://guru99.es/java-data-abstraction/
* Wikilibros (s.f.). _Fundamentos de programación/La Abstracción y el Encapsulamiento_. Recuperado el 28 de enero de 2023 de https://es.wikibooks.org/wiki/Fundamentos\_de\_programaci%C3%B3n/La\_Abstracci%C3%B3n\_y\_el\_Encapsulamiento#Ejemplos
