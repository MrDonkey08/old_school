# Actividad 2: Algebra de boole

**Nombre:** Alan Yahir Juárez Rubio

**Instrucciones:** Resuelve cada uno de los ejercicios propuestas, recuerda incluir el procedimiento del cual obtuviste tus respuestas, e identificar claramente el resultado.

1.  Quiere controlarse 2 bombas $B_1$ y $B_2$ haciendo uso de _un circuito lógico combinacional de control_ que funcionará en función de las siguientes premisas:

![Esquema de bombas | center ](Attachments/1-bombas-esquema.jpg)


- Cuando el agua se encuentra entre los sensores $c$ y $d$ funcionar la bomba 1 salvo que su temperatura ($T_1$) supere un límite prefijado en cuyo caso se detendrá y entrará en funcionamiento la bomba 2. Dicho límite de temperatura vendrá indicado por la activación del sensor $T_1$.

- Si el nivel de agua se encuentra por debajo de $c$, se activaran ambas bombas

- Si hay fallo en los sensores de nivel y se activara $d$ sin activarse $c$, ambas bombas se detendrán.

- Los sensores de temperatura $T_1$ y $T_2$ harán que la bomba respectiva se pare si se activa su sensor.

> Realiza el diseño del circuito antes descrito, halla:

1.  Tabla de verdad del circuito de control

2.  Expresión algebraica que represente a las funciones en su primera y/o segunda forma canónica.

3.  Simplifica las funciones haciendo uso de algebra de boole

4.  Implementa el circuito lógico para el circuito de control (Diagrama Lógico)

<div style="page-break-after: always;"></div>

---
## Circuito lógico combinacional de control

### 1. Tabla de verdad

|  m  |  c  | $d$ | $T_1$ | $T_2$ |     | $B_1$ | $B_2$ |
|:---:|:---:|:---:|:-----:|:-----:| --- |:-----:|:-----:|
|  0  |  0  |  0  |   0   |   0   |     |   0   |   0   |
|  1  |  0  |  0  |   0   |   1   |     |   0   |   0   |
|  2  |  0  |  0  |   1   |   0   |     |   0   |   0   |
|  3  |  0  |  0  |   1   |   1   |     |   0   |   0   |
|  4  |  0  |  1  |   0   |   0   |     |   0   |   0   |
|  5  |  0  |  1  |   0   |   1   |     |   0   |   0   |
|  6  |  0  |  1  |   1   |   0   |     |   0   |   0   |
|  7  |  0  |  1  |   1   |   1   |     |   0   |   0   |
|  8  |  1  |  0  |   0   |   0   |     |   1   |   0   |
|  9  |  1  |  0  |   0   |   1   |     |   1   |   0   |
| 10  |  1  |  0  |   1   |   0   |     |   0   |   1   |
| 11  |  1  |  0  |   1   |   1   |     |   0   |   0   |
| 12  |  1  |  1  |   0   |   0   |     |   1   |   1   |
| 13  |  1  |  1  |   0   |   1   |     |   1   |   0   |
| 14  |  1  |  1  |   1   |   0   |     |   0   |   1   |
| 15  |  1  |  1  |   1   |   1   |     |   0   |   0   |

### 2. Expresión Canónica

<!-- \sum _{m \in \{8, 9, 12, 13\}} -->

$$\displaylines{ B_1 = \sum_m(8, 9, 12, 13) 
= (c \cdot \overline{d} \cdot \overline{T_1} \cdot \overline{T_2})
+ (c \cdot \overline{d} \cdot \overline{T_1} \cdot T_2 )
+ (c \cdot d \cdot \overline{T_1} \cdot \overline{T_2})
+ (c \cdot d \cdot \overline{T_1} \cdot T_2)
}$$

$$\displaylines{ B_2 = \sum_m(10, 12, 14) 
= (c \cdot \overline{d} \cdot T_1 \cdot T_2)
+ (c \cdot d \cdot \overline{T_1} \cdot \overline{T_2})
+ (c \cdot d \cdot T_1 \cdot \overline{T_2})
}$$

### 3. Simplificación con Boole

$$\displaylines{ B_1
= (c \cdot \overline{d} \cdot \overline{T_1} \cdot \overline{T_2})
+ (c \cdot \overline{d} \cdot \overline{T_1} \cdot T_2 )
+ (c \cdot d \cdot \overline{T_1} \cdot \overline{T_2})
+ (c \cdot d \cdot \overline{T_1} \cdot T_2)
}$$

$$\displaylines{ B_2
= (c \cdot \overline{d} \cdot T_1 \cdot T_2)
+ (c \cdot d \cdot \overline{T_1} \cdot \overline{T_2})
+ (c \cdot d \cdot T_1 \cdot \overline{T_2})
}$$

---

<div style="page-break-after: always;"></div>
 
1.  Obtener la expresión booleana de los siguientes circuitos lógicos combinacionales y describir su comportamiento por medio de su tabla de verdad.
 

<ol type="a">
	<li></li>
</ol>



![Circuito lógico | center](Attachments/2-circuito-lógico-a.jpg)

$$F_0 =(W + (Z \oplus X)) \oplus (\overline{Y} + (Z \oplus X))$$

$$F_1 = \overline{(W + (\overline{Y} + (Z \oplus X)) \oplus \overline{(z + \overline{x})}} $$

$$F_2 = Z \oplus ((Z \oplus X) + ((Z) \oplus (W * \overline{Y})))$$

<ol start="2" type="a">
	<li></li>
</ol>

![Circuito lógico b | center](Attachments/3-circuito-lógico-b.jpg)

3.  Realiza el circuito lógico del siguiente conjunto de expresiones.
	1.  $\mathbf{F}\left( \mathbf{a,b,c} \right)\mathbf{=}\overline{\mathbf{a +}\overline{\mathbf{b}}\left( \mathbf{a}\overline{\mathbf{c}} \right)}\mathbf{+}\overline{\mathbf{b}}\mathbf{c}$
	2.  $F\left( a,b,c_{1} \right) = ab + c_{1}(a \oplus b)$
	3.  $F(a,b,c,d,e) = \overline{(ab} + cd)\left( \overline{e + b}c \right) + (ab \oplus ce)$

 
4. Simplifique las siguientes expresiones utilizando algebra de Boole, describa cada una de las reglas aplicadas para su reducción.
	1.  $F(a,b,c) = \overline{a\overline{b}\left( a \oplus \overline{c} \right)} + \overline{b}c(a + c) + \overline{a\overline{b}}(b + ad)$
	2.  $F(a,b,c,d) = ab + cd(\overline{a \oplus b)} + ca\overline{\overline{(dc + b)}}$
	3.  $F(a,b,c,d,e) = \left( \overline{(aeb} + bcd \right)\left( \overline{e + b}c \right)) + (ab + de)$

 
4. Simplifica las funciones utilizando el método de mapas de karnaugh. Realiza el procedimiento de forma clara y legible, resalta la expresión obtenida una vez realizada la simplificación.
	1.  f(a,b,c,d,e)=∑m(2,4,6,3,5,12,17,21,10,31,28)
	2.  f(a,b,c,d)=∏M(12,13,14,2,8,4,6)
	3.  f(a,b,c)=∑m(1,2,7,6,5)
	4.  f(a,b,c,d)=∏M(3,4,2,1,12,14,15,6)
