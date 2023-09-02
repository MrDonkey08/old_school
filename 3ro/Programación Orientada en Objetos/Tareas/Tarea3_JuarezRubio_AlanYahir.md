# <p align="center">Universidad de Guadalajara

## <p align="center">Centro Universitario de Ciencias Exactas E Ingenierías

![Portada-UDG | left |200](../../../Attachments/Images/Portada-UDG.jpeg) ![Portada-CUCEI | right | 188](../../../Attachments/Images/Portada-CUCEI.jpeg)
 
<br> <br> <br> <br> <br><br> <br><br><br><br><br><br><br><br><br><br><br>

### División de Tecnologías para la Integración Ciber-humana

### Departamento de Ciencias Computacionales

#### Tarea # 3

#### Tema: Diagrama de clases y sus relaciones

#### Estudiante: Juárez Rubio Alan Yahir

#### Materia: Programación Orientada a Objetos

#### Sección: D03

#### Calendario: 2023-A

#### Profesor: Mariscal Lugo Luis Felipe

#### Fecha de entrega: 11/03/2023

<div style="page-break-after: always;"></div>

---
# Marco Teorico

---
## Qué es UML

**UML**, por sus siglas en inglés, **Unified Modeling Language**: es el lenguaje de modelado de sistemas de software más conocido y utilizado en la actualidad; está respaldado por el OMG (Object Management Group). Es un lenguaje gráfico para visualizar, especificar, construir y documentar un sistema de software

---
## Qué es un diagrama de clases en UML

Un diagrama UML es un diagrama el cual se encarga de identificar a las clases de un sistema con sus respectivos atributos y métodos (caracteristicas y funciones); también se encarga de establecer las relaciones estáticas que existen entre las clases.

---
### Tipos de diagramas de clase

Existen varios tipos de diagramas de clases

---
#### Clase

Está compuesto por un recuadro con 3 secciones, en el primero viene el nombre de la clase, en el segundo viene el nombre de sus respectivos atributos y el tercero sus métodos.

![](Attachments/Diagrama-de-clase.png)

En el diagrama de clase, la notación para escribir atributo es: `visibilidad nombreDelAtributo: tipo`, donde la visibilidad puede ser público, que se representa con un `+`, privado, con un `-`,  protegido, con un `#` , derivado con un `/` y paquete con un `～` ; y, por último el tipo para representar el tipo de dato que es (entero, decimal, texto o, en su defecto, cadena de texto o carácter,...).

Por otra parte, la notación que se utiliza para escribir un método u operación es: `visibilad nombreDelMétodo(argumentos) tipo`, donde los argumentos son aquellos atributos de la clase que recibirá el método para que pueda trabajar con ellos y `tipo` el tipo de método, en caso de devolver algun valor.

---
#### Clase simple

![](Attachments/Diagrama-de-clase-simple.png)

Como se puede apreciar en la imagen,  este solo consiste en un recuadro en el que solo viene el nombre de la clase.

---
#### Interfaz

A diferencia del diagrama de clase, el diagrama de interfaz solo especifica los métodos de la clase, no especifica sus atributos. Estos métodos que especifican detallan la responsabilidad de una clase.

![](Attachments/Diagrama-de-interfaz.png)

---
#### Paquete

![](Attachments/Pasted%20image%2020230311133621.png)

El símbolo del paquete se utiliza para agrupar clases o interfaces de naturaleza similar o relacionadas. La agrupación de estos elementos de diseño utilizando los símbolos del paquete mejora la legibilidad del diagrama.

---
## Relaciones de diagramas de clases

En los diagramas de clases, por lo general están conformados de atributos, métodos y conectorse que describen relaciones entre las clases. Sin embargo estas relaciones son simples que, en casos un tanto específicos será necesario de descripción más detallada. Algunos tipos de relaciones de clases son: 

---
### Asociación 

Se encarga de describir una relación entre clases. Estas asociaciones pueden ser bidireccional (se representa con una linea) o unidireccional (se representa con un flecha).

![](Attachments/Pasted%20image%2020230311152023.png)

---
### Agregación

Se encarga de representar la relación entre un todo (clase) y sus partes (clases que lo conforman). Se denota como una linea con un rombo en el extremo del "todo". 

![](Attachments/Pasted%20image%2020230311152811.png)

---
### Composición

Agregación disjunta y estricta: Las partes solo existen asociadas al compuesto (solo se accede a ellas a través del compuesto)

![|](Attachments/Pasted%20image%2020230311153112.png)

---
### Dependencia

Relación (más débil que una asociación) que muestra la relación entre un cliente y el proveedor de un serviocio usado por el cliente, donde el cliente es el objeto que solicita un servicio y el servidor es el objeto que provee el servicio solicitado. Está relación se denota con una flecha punteada que apunta del cliente al proveedor.

![](Attachments/Pasted%20image%2020230311153419.png)

---
### Realización

Es una relación semántica entre clasificadores donde este especifica unas normas o un reglamento con otro clasificador que garantiza que se cumplirá.

Se encuentran relaciones de realización: entre interfaces, clases y componentes que las realizan y entre los casos de uso y las colaboraciones que los realizan.

![|300](Attachments/Pasted%20image%2020230311154603.png)

---
### Colaboración

Muestra una interacción organizada basándose en los objetos que toman parte en la interacción y los enlaces entre los mismos.

![|550](Attachments/Pasted%20image%2020230311155501.png)
<div style="page-break-after: always;"></div>

---
## Conslusión

Para finalizar, es importante mencionar que, aunque uno entienda el funcionamiento de un sistema y las relaciones que tienen las clases y los objetos entre sí, el hacer diagramas de clases puede ser de mucha ayuda al momento de trabajar colaborativamente o al momento de tener que explicarle al cliente el funcionamiento del sistemas. También puede llegar a ser muy útil en sistemas muy grandes, ya que sirve como un complemento, como una guía para no perderse.

<div style="page-break-after: always;"></div>

---
# Referencias

- Ecured (s.f.). _UML_. Recuperado el 11 de marzo de 2023 de https://www.ecured.cu/UML
- Siriwardhana, S (22 de septiembre de 2022). _El Mejor Tutorial de Diagramas de Clase Para Ayudar a Modelar sus Sistemas Fácilmente_. Creately. Recuperado el 11 de marzo de 2023 de https://creately.com/blog/es/diagramas/tutorial-de-diagrama-de-clases/
- Joanpaon (s.f.). _UML - Diagramas de Clases - Interfaces_. Recuperado el 11 de marzo de 2023 de https://joanpaon.wordpress.com/2013/05/31/uml-diagramas-de-clases-interfaces/
- https://stadium.unad.edu.co/ovas/10596_9839/relaciones.html
- Berzal, F. (s.f.). _Relaciones entre clases: Diagramas de clases UML_. Recuperado el 11 de marzo de 2023 de https://elvex.ugr.es/decsai/java/pdf/3C-Relaciones.pdf
- Marianela (3 de febrero de 2016). _Diagrama de interacción(secuencia y colaboración)_. Recuperado el 11 de marzo de 2023 de https://es.slideshare.net/marianela0393/diagrama-de-interaccionsecuencia-y-colaboracion
- Kimmel, P. (2008). Elementos de los diagramas básicos de clase en C. Montes (1<sup>ra</sup> ed. en español). Editorial McGraw-Hill Interamericana


