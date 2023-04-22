
# Formulario Precálculo

En este formulario: $a,\; b,\; c\; \text{ y }\; d\in\Bbb R$ y son constantes.

## 1. Conjunto de Números Reales

### Propiedades de los números

|                                                               |                   Suma                    |               Multiplicación               |
| ------------------------------------------------------------- |:-----------------------------------------:|:------------------------------------------:|
| Ley conmutativa                                               |              $a + b = b + a$              |          $a \cdot b = b \cdot a$           |
| Ley asociativa                                                |        $(a + b) + c = a +(b + c)$         | $(a \cdot b) \cdot c = a \cdot(b \cdot c)$ |
| Elemento Neutro                                               |                 $a+(0)=a$                 |             $a \cdot (1) = a$              |
| Elemento inverso (recíproco)                                  |                $a+(-a)=0$                 |  $a \cdot \left(\cfrac{1}{a} \right) = 1$  |
| Ley distributiva de la multiplicación con respecto de la suma | $(a + b) \cdot c = a \cdot c + b \cdot c$ |                $\leftarrow$                |

### Fracciones

1. **Suma de fracciones**
	1. Mismo denominador: $\cfrac{a}{b} + \cfrac{c}{b} = \cfrac{a + c}{b}$
	2. Distinto denominador: $\cfrac {a}{b} + \cfrac {c}{d} =\cfrac {ad+bc}{cd}$
	3. Entero y una fracción : $a+\cfrac {c}{b} = \cfrac {ab+c}{b}$
2. **Multiplicación de fracciones:** $\cfrac {a}{b} \cdot \cfrac {c}{d} = \cfrac {ac}{bd}$
3. **Division de fracciones** **(cruzada).** $\cfrac {a}{b} \div \cfrac {c}{d} = \cfrac {ad}{bc}$
4. **Multiplicación por unidad.** $\cfrac{a}{b} \cdot \cfrac{c}{c} = \cfrac{a \cdot c}{b \cdot c} = \cfrac{a}{b}$

### Desigualdades

- **Mayor que ($>$):** $a-b = c \to a > b$, donde $c > 0$
- **Menor que ($<$):** $a-b = c \to a < b$, donde $c < 0$

### Valor absoluto

$$|a|= \begin{bmatrix} a\geq 0 \to |a| = a \\ a < 0 \to |a|= -a\end{bmatrix}$$

### Distancia entre dos puntos

- $d(A,B) =|b-a|$ 
- $d(B,A)= |a-b|$

## 2. Leyes de los exponentes

| Nombre                                | Ley                                          |
| ------------------------------------- | -------------------------------------------- |
| **Ley de separación**                 | $(\cfrac{a}{b})^n = \cfrac {a^n} {b^n}$      |
| $\uparrow$                            | $(ab)^n =a^n b^n$                            |
| **Multiplicación de bases iguales**   | $a^n a^m = a^{n+m}$                          |
| **Potencia de una base con potencia** | $(a^n)^m = a^{nm}$                           |
| **Potencia cero**                     | $a^0 = 1$                                    |
| **Potencia negativa**                 | $a^{-n} = \cfrac {1} {a^n}$                  |
| **División de bases iguales**         | $\cfrac {a^n}{a^m} = a^{n-m} \; (si \; n>m)$ |
| $\uparrow$                            | $\cfrac {a^n} {a^m} = \cfrac {1} {a^{m-n}}$  |
| **De reescritura**                    | $a^{m/n} = \sqrt [n]{a^m}$                   |

## 3. Leyes de los radicales

| Ley                                         | -                                           |
| ------------------------------------------- | ------------------------------------------- |
| **De separación**                           | $\sqrt [n]{ab} = \sqrt [n]{a} \sqrt [n]{b}$ |
| **De la raíz m\_ésima de la raíz n\_ésima** | $\sqrt [m] {\sqrt[n]{a}} = \sqrt [nm] {a}$  |
| $\downarrow$                                | $\sqrt [n]{a^n} = a$                        |
| **De cancelación**                          | $(\sqrt [n]{a})^n = a$                      |
| $\uparrow$                                  | $(a^n)^{1/n} = a$                           |
| **De reescritura**                          | $\sqrt [n]{a^m} = a^{m/n}$                  |

> [!warning]+ Advertencia
> - $\sqrt [n]{{a^n}\pm b^n} \neq a\pm b$
> - $\sqrt [n]{a\pm b}\neq a\pm b$

## 4. Número imaginario

**Número imaginario**: $i = \sqrt{-1}$

- $i^0=1$
- $i^1=i$
- $i^2 = -1$
- $i^3 = i^2i=(-1)i = -i$
- $i^4 = i^2 i^2=(-1)(-1)=1$

**Número complejo**:  $z = a + bi \; | \; a \in \Bbb {R} \text{ y } bi \in \Bbb {I} \; \to \; Z \in \Bbb C$

## 5. Operaciones con polinomios

- **Suma y resta (términos semejantes)**: ${x^n}\pm  ax^n = (a\pm 1)x^n$
- **Multiplicación**: $a(b+c) = ab+ac$


### Productos Notables
| Nombre                      | Expresión | Equivalencia                   |
| --------------------------- | --------- | ------------------------------ |
| **Diferencia de cuadrados** | $x^2-y^2$ | $(x-y)(x+y)$                   |
| **Suma de cubos**           | $x^3+y^3$ | $(x+y)(x^2-xy+y^2)$            |
| **Diferencia de cubos**     | $x^3-y^3$ | $(x+y)(x^2+xy+y^2)$            |
| **Binomio al cuadrado**     | $(x+y)^2$ | $x^2+2xy+y^2$                  |
| **Binomio al cuadrado**     | $(x-y)^2$ | $x^2-2xy+y^2$                  |
| **Binomio al cubo**         | $(x+y)^3$ | $x^3+3x^2y+3xy^2+y^3$          |
| **Biniomio a la cuarta**    | $(x+y)^4$ | $x^4+4x^3+y+6x^2y^2+4xy^3+y^4$ |


## 6. Binomio de Newton 


$$(a+b)^n=a^n+ \cfrac {n}{1!}a^{n-1}b+ \cfrac {n(n-1)}{2!}a^{n-2}b^2 + \cfrac {n(n-1)(n-2)}{3!}a^{n-3}b^3+ \cdots +b^n$$


## 7. K_ésimo término 


$$K_{\text{ésimo}} \text{término} = \cfrac {n!}{(n-r+1)!(r-1)!} a^{n-r+1}\cdot b^{r-1}$$

> [!note]+ Nota
> 
> donde: 
> - $n =$ potencia  y  $r$ = número del término a buscar


## 8. Factorización


**Por término común**: $x^2+ax = x(x+a)$

**Por fórmula**: Consultar las fórmulas de productos notables.

**Por agrupación:**

$$\displaylines{
ax+bx+ay+by\\   (ax+bx)+(ay+by) \\
x(a+b)+y(a+b) \\
(a+b)(x+y) \\
}$$

## 11. Operaciones con números complejos en forma algebraica

$$\begin{array}{c|c|c}

\text{Suma y resta}             & \text{División} & \text{Multiplicación}\\
\eqalign{
z_{1}+z_{2} &= (a+bi) + (c+di)  \\
&=(a+c)(b+d)i
\\\\
z_{1}+z_{2} &= (a+bi) - (c+di) \\
&=(a-c)+(b-d)i  
}

& \displaylines{\frac{z_{1}}{z_{2}} = \frac{z_{1}}{z_{2}}\cdot \frac{z_{2}}{x_{2}}\\
 = \frac{a+bi}{c+di}\cdot \frac{c-di}{c-di}\\
 = \frac{ac + (bc-ad)i - bdi^{2}} {{c^{2}d^{2}i^{2}}}
}

& \eqalign{
z_{1}\cdot z_{2} &= (a+bi)(c+di)  \\
&= ac + bci + adi + bdi^{2}\\
&= ac + (bc+ad) + bdi^{2}\\

}

\end{array}$$

## 13. Intérvalos y desigualdades


### Intérvalos

**Intérvalo abierto**: $(a,\ b)={x\ |\ a<x<b,\ x\in \Bbb R}$

![|300](Formularios/Attachments/Formulario-1.jpeg)

**Intérvalo cerrado**: $[a,\ b]={x\ |\ a\leq x\leq b,\ x\in \Bbb R}$

![|300](Formularios/Attachments/Formulario-2.jpeg)

**Intérvalo semiabierto**:

![|300](Formularios/Attachments/Formulario-3.jpeg)

**Intérvalo infinito**:

![Formulario-3|300](Formularios/Attachments/Formulario-4.png)


### Desigualdades

> [!Note]+ Nota
> 
> Al multiplicar o dividir ambos lados de una desigualdad por un número real negativo, el signo de la desigualdad se invierte.

**Desigualdad de valor absoluto**

| Caso |        Modelo         |         Solución         |
|:-:|:---------------------:|:------------------------:|
|  1   |  $\mid a\mid\: < b$   |       $-b < a < b$       |
|  2   | $\mid a\mid\: \leq b$ |    $-b \leq a \leq b$    |
|  3   |  $\mid a\mid\: > b$   |   $a < -b \cup a > b$    |
|  4   | $\mid a\mid\: \geq b$ | $a \leq -b \cup a\geq b$ |


## 14. Sistemas de ecuaciones 2x2

Un **sistema de ecuaciones** es aquel en el que hay dos o más ecuaciones las cuales comparten entre sí los valores de las incógnitas.

Un _sistema de ecuaciones lineales  2x2_ se representa de la siguiente manera:

$$\left[\begin{array}{ccccc}
ax & + &by & = &c\\
dx & + &ey & = &f
\end{array} \right] =  

\left[ \begin{array}{cc|c}
ax & by & c\\
dx & ey & f
\end{array} \right] = 

\left[ \begin{array}{cc|c}
a & b & c\\
d & e & f
\end{array} \right]$$


En la que la columna uno representa la primera incógnita ($x$), la columna dos la segunda incógnita ($y$) y la columna tres el resultado de cada fila, de cada ecuación.

### Por sustitución

1. Se despeja una de las variables de alguna de las ecuaciones.
2. Se sustituye el valor de la variable encontrada en la otra ecuación y después despejarla.
3. Se sustituye el valor de la incógnita encontrada en cualquiera de las dos ecuaciones.
4. Se despeja para encontrar el valor de la incógnita faltante.
5. Comprobación.


### Por igualación

1. Se despeja una variable de ambas ecuaciones.
2. Se iguala los valores de los despejes de dichas variables y se depeja la variable contraria.
3. Se sustituye la segunda variable en cualquiera de los despejes.
4. Se despeja la variable faltante para encontrar la solución
5. Comprobación.


### Por gráfica

1. Se despeja de ambas ecuaciones la variable $y$.
2. Se tabulan ambos valores de $y$
	 - Si es una _ecuación lineal_ basta con tabular solo 2 valores 
3. Se agregan las coordenadas en el plano y se unen secuencialemente las de la ecuación 1 entre sí y las de la ecuación 2 entre sí.
	 - Si es una _ecuación lineal_ se extiende la recta formada.
 4.  Analizar: las _intersecciones_ entre las _gráficas_ son las _soluciones del sistema_.

| Casos | Recta                   | Gráfica                                       | Cantidad de soluciones                                   |
|:-----:| ----------------------- | --------------------------------------------- | -------------------------------------------------------- |
|   1   | Misma recta             | Misma gráfica                                 | Infintas soluciones                                      |
|   2   | Rectas paralelas        | Misma gráfica, pero con desplazamiento en $x$ | Sin soluciones                                           |
|   3   | Dos rectas no paralelas | -                                             | Única solución                                           |
|   4   | -                       | Dos gráficas distintas                        | Depende del número de intersecciones entre las gráficas. |

## 15. Sistemas de ecuaciones lineales con más de dos variables

Un _sistema de ecuaciones_ se define de la siguiente manera

$$A =\left[\begin{array}{cccc|cc}

a_{11}x_{1} & a_{12}x_{1} & \cdots & a_{1n}x_{1}  & k_1\\
a_{21}x_{2} & a_{22}x_{2} & \cdots & a_{2n}x_{2}  & k_2\\
\vdots      & \vdots      & \vdots & \ddots       & \vdots\\ 
a_{m1}x_{m} & a_{m2}x_{m} & \cdots & a_{mn}x_{n} & k_n\\
\end{array} \right]
=
\left[\begin{array}{cccc|cc}
a_{11} & a_{12} & \cdots & a_{1n} & k_1\\
a_{21} & a_{22} & \cdots & a_{2n} & k_2\\
\vdots & \vdots & \vdots & \ddots & \vdots\\ 
a_{m1} & a_{m2} & \cdots & a_{mn} & k_n\\

\end{array} \right]$$

en dónde $n$ representa la _cantidad de variables_ y $m$ la _cantidad de ecuaciones_, dicho de otra manera.

### Transformaciones elementales de una matriz

Dada una matriz de un sistema de ecuaciones lineales, una matriz de un sistema equivalente resulta si

1. Se intercambian dos renglones.
2. Se multiplica o divide un renglón por una constante diferente de cero.
3. Un múltiplo constante de un renglón se suma a otro renglón.

#### Gauss

El método de **Gauss Jordan** consiste en utilizar las **transformaciones elementales** para transformar un _sistema de ecuaciones lineales_ a su _forma escalonada_. Para después terminar de resolverla con cualquier otro método.

En el caso de _sistemas de ecuaciones lineales_ donde $m \geq n$ 

$$A =
\left[\begin{array}{ccccc|c}
a_{11} & a_{12} & a_{12} & \cdots & a_{1n} & k_1\\
a_{21} & a_{22} & a_{23} & \cdots & a_{2n} & k_2\\
a_{31} & a_{32} & a_{33} & \cdots & a_{3n} & k_2\\
\vdots & \vdots & \vdots & \ddots & \vdots & \vdots\\ 
a_{m1} & a_{m2} & a_{m3} & \cdots & a_{mn} & k_m\\
\end{array} \right]
=
\left[\begin{array}{ccccc|c}
1      & P(a_{12})   & P(a_{13}) &  \cdots & P(a_{1n}) & P(k_1) \\
0      & 1           & P(a_{23}) & \cdots & P(a_{2n}) & P(k_2)\\
0      & 0           & 1         & \cdots & P(a_{3n}) & P(k_3)\\
\vdots & \vdots      & \vdots    & \ddots & \vdots    & \vdots\\ 
0      & 0           & 0         & \cdots & Q         & P(k_{m})
\end{array} \right] \tag{1}
$$

- Si $n = m \to Q = 1$
- Si $n < m \to Q = 0$

En el caso de _sistemas de ecuaciones lineales_ donde $m < n$

$$A=
\left[\begin{array}{ccccc|c}
a_{11} & a_{12} & a_{13} &  \cdots & a_{1n} & k_1\\
a_{21} & a_{22} & a_{23} & \cdots & a_{2n} & k_2\\
a_{31} & a_{32} & a_{33} & \cdots & a_{3n} & k_2\\
\vdots & \vdots & \vdots & \ddots & \vdots & \vdots\\ 
a_{m1} & a_{m2} & a_{m3} & \cdots & a_{mn} & k_m\\
\end{array} \right]
=
\left[\begin{array}{cccccc|c}
1      & P(a_{12})   & P(a_{13}) & P(a_{14}) & \cdots & P(a_{1n}) & P(k_1) \\
0      & 1           & P(a_{23}) & P(a_{24}) & \cdots & P(a_{2n}) & P(k_2)\\
0      & 0           & 0         & 1         & \cdots & P(a_{3n}) & P(k_3)\\
\vdots & \vdots      & \vdots    & \vdots    & \ddots & \vdots    & \vdots\\ 
0      & 0           & 0         & 0         & \cdots & P(a_{mn})         & P(k_{m})
\end{array} \right] \tag{2}
$$

> [!nota] Notas
> 
> - Sea $i$ una determinada fila y $j$ una determinada columna, entonces $P(a_{ij}) = (ba+ c)_{ij}$
> - En $(1)$ la _diagonal principal_ está conformada de unos y debajo de estos unos hay puros ceros
> - En $(2)$ la _cantidad de ceros_ antes del  $1$ de cada fila, depende del _número de la fila $n$_. Se puede representar con la siguiente ecuación
> $$2^{n-1}$$
 

<!--Tanto en $(1)$ como en $(2)$ también puedes hacer la transformación de manera que el arreglo de ceros (y polinomios de ser el caso) quede encima de la diagonal principal.
--> 

#### Gauss Jordan

El método de **Gauss Jordan** consiste en utilizar las **transformaciones elementales** para transformar un _sistema de ecuaciones lineales_ de manera que su _diagonal principal_ esté conformado de unos y el resto de la _matriz de coeficientes_ sean ceros. Este método no aplica para matrices con tamaño  $m < n$

$$A =
\left[\begin{array}{ccccc|c}
a_{11} & a_{12} & a_{12} & \cdots & a_{1n} & k_1\\
a_{21} & a_{22} & a_{23} & \cdots & a_{2n} & k_2\\
a_{31} & a_{32} & a_{33} & \cdots & a_{3n} & k_2\\
\vdots & \vdots & \vdots & \ddots & \vdots & \vdots\\ 
a_{m1} & a_{m2} & a_{m3} & \cdots & a_{mn} & k_m\\
\end{array} \right]
=
\left[\begin{array}{ccccc|c}
1      & 0   & 0 &  \cdots & 0 & P(k_1) \\
0      & 1           & 0 & \cdots & 0 & P(k_2)\\
0      & 0           & 1         & \cdots & 0 & P(k_3)\\
\vdots & \vdots      & \vdots    & \ddots & \vdots    & \vdots\\ 
0      & 0           & 0         & \cdots & Q         & P(k_{m})
\end{array} \right] \tag{1}
$$

- Si $n = m \to Q = 1$
- Si $n < m \to Q = 0$

### Regla de Cramer

La **regla de cramer** se utiliza para conseguir la solución de un _sistemas de ecuaciones lineales cuadradas_, es decir,  de tamaño $n\times n$. 

$$D =\left[\begin{array}{cccc|cc}

a_{11}x_{1} & a_{12}x_{1} & \cdots & a_{1n}x_{1}  & k_1\\
a_{21}x_{2} & a_{22}x_{2} & \cdots & a_{2n}x_{2}  & k_2\\
\vdots      & \vdots      & \vdots & \ddots       & \vdots\\ 
a_{n1}x_{n} & a_{n2}x_{n} & \cdots & a_{nn}x_{n} & k_n\\
\end{array} \right] \tag{1}
=
\left[\begin{array}{cccc|cc}
a_{11} & a_{12} & \cdots & a_{1n} & k_1\\
a_{21} & a_{22} & \cdots & a_{2n} & k_2\\
\vdots & \vdots & \vdots & \ddots & \vdots\\ 
a_{n1} & a_{n2} & \cdots & a_{nn} & k_n\\

\end{array} \right]
$$

1. Se calcula el _determinante de la matriz original_ ($|D|$), es decir

$$|D| = \begin{vmatrix}
a_{11} & a_{12} & \cdots & a_{1n}\\
a_{21} & a_{22} & \cdots & a_{2n}\\
\vdots & \vdots & \ddots & \vdots\\ 
a_{n1} & a_{n2} & \cdots & a_{nn}\\
\end{vmatrix} \tag{2}
$$

> [!important]+ Importante
> 
> - Si $D = 0$, entonces _infinitas soluciones_. No se puede aplicar la **regla de cramer**. Provoca indeterminación $\frac{a}{0}$
> - Si $D \neq 0$, entonces _solución única_. Se puede aplicar la **regla de cramer**.

2. Después se calcula los _determinantes con respecto a las variables_ ($x_{1}, x_{2},\dots x_{n}$)

$$\begin{array}{cc}

|D_{x_{1}}| = \begin{vmatrix}
k_{1}  & a_{12} & a_{13} & \cdots & a_{1n}\\
k_{2}  & a_{22} & a_{23} & \cdots & a_{2n}\\
\vdots & \vdots & \vdots & \ddots & \vdots\\ 
k_{n}  & a_{n1} & a_{n2} & \cdots & a_{nn}\\
\end{vmatrix},\;

|D_{x_{2}}| = \begin{vmatrix}
a_{11} & k_{1}  &   a_{13} & \cdots & a_{1n}\\
a_{21} & k_{2}  &   a_{23} & \cdots & a_{2n}\\
\vdots & \vdots & \vdots   & \ddots & \vdots\\ 
a_{n1} & k_{n}  &   a_{n3} & \cdots & a_{nn}\\
\end{vmatrix},\;\\\\

|D_{x_{3}} |= \begin{vmatrix}
a_{11} & a_{12} & k_{1}  & a_{14} & \cdots & a_{1n}\\
a_{21} & a_{22} & k_{2}  & a_{14} & \cdots & a_{2n}\\
\vdots & \vdots & \vdots & \vdots & \ddots & \vdots\\ 
a_{n1} & a_{n2} & k_{n}  & \cdots & \cdots & a_{nn}\\
\end{vmatrix},\; \cdots\;

|D_{x_{n}}| = \begin{vmatrix}
a_{11} & a_{12} & \cdots & a_{1n-1} & k_{1}\\
a_{21} & a_{22} & \cdots & a_{2n-1} & k_{2}\\
\vdots & \vdots & \vdots & \ddots   & \vdots\\ 
a_{n1} & a_{n2} & \cdots & a_{nn-1} & k_{n}\\
\end{vmatrix} \tag{3}

\end{array}
$$

> [!abstract]+ Observación
> 
> Como se puede apreciar en $(3)$, para un *determinante con respecto a $x_{c}$ variable* (donde $c$ es la columna a la que pertenece en a $(1)$), se reemplaza la columna ($c$) por la columna de las soluciones ($k$) y el resto se mantiene igual que en $(1)$.

3. Utilizar la siguiente _fórmula_ para conseguir la _solución del sistema de ecuaciones_

$$x_{1}=\frac{|D_{x_{1}}|}{|D|},\; x_{2}=\frac{|D_{x_{2}}|}{|D|},\; \cdots\; x_{n}=\frac{|D_{x_{n}}|}{|D|}, \text{ donde |D|} \neq 0 \tag{4}$$



## 16. Ecuaciones cuadráticas

**Ecuación cuadrática especial**: $x^2=d$, entonces $x=\pm \sqrt d$

**Completar el cuadrado**:

| Expresión original |        Término a sumar         |         Expresión Transformada          |           Equivalencia           |
|:------------------:|:------------------------------:|:---------------------------------------:|:--------------------------------:|
|      $x^2+kx$      | $\left(\cfrac{k}{2} \right)^2$ | $x^2+kx + \left(\cfrac{k}{2} \right)^2$ | $\left(x+\cfrac{k}{2} \right)^2$ |
|      $x^2-kx$      | $\left(\cfrac{k}{2} \right)^2$ | $x^2-kx + \left(\cfrac{k}{2} \right)^2$ | $\left(x-\cfrac{k}{2} \right)^2$ |


## 17. Fórmula géneral para ecuaciones cuadráticas


### Fórmula General

Para $ax^2+bx+c=0$

$x = \cfrac{-b\pm \sqrt {b^2-4ac}}{2a}$


### Discriminante

$D=b^2-4ac$

1. $D\:|\:D>0\Rightarrow$ Dos soluciones reales
2. $D\:|\:D<0\Rightarrow$ Dos soluciones complejas
3. $D\:|\:D=0\Rightarrow$ Solución repetida, una única solución 


## 18. Ecuaciones eXpeciales


### Valor absoluto

$|x|=y$
$x=\pm y$
$x_1=y$
$x_2=-y$


### Por agrupación

$x^2+ax+bx+ba=0$
$x(x+a)+b(x+a)=0$
$(x+a)(x+b)=0$


### Teorema del cero

$(x+a)(y+b)=0$
$(x+a) = 0$ y/o $(y+b) =0$

$\begin{array}{l|l}x+a=0 & x+b=0\\ x_1 = -a & x_2 = -b\end{array}$ 

> [!todo]+ Importante
> 
> Hacer comprobaciones para determinar cúal solución es correcta.


### Por sustitución

$$ax^4+bx^2+c=0$$

1. Aplicar sustitución para simplicar la ecuación original

$$\displaylines{
\begin{array}{c|c}
x^2=u & x^4=u^2 
\end{array}\\

au^2+bu+c=0}
$$

1. Resolver la ecuación
2. Sustituir por los valores originales
3. Comprobación



## 19. Fracciones Parciales

**Factores lineales distintos**:

$$\frac{Q(x)}{(ax+b)(cx+d)\cdots} = \frac{A}{ax+b} + \frac{B}{cx+d} +\dots$$

**Factores lineales repetidos**:

$$\frac{Q(x)}{(ax+b)^{n}} = \frac{A}{ax+b} + \frac{B}{(ax+b)^{2}} + \cdots$$

**Factores cuadráticos distintos**:

$$\frac{Q(x)}{(ax^{2}+bx+c)(dx^{2}+cx+f)} = \frac{Ax+B}{ax^{2}+bx+c} + \frac{Cx+D}{dx^{2}+ex+f} +\cdots$$

**Factores cuadráticos repetidos**:

$$\frac{Q(x)}{(ax^{2}+bx+c)^{n}} = \frac{Ax+B}{ax^{2}+bx+c} + \frac{Cx+D}{(ax^{2}+bx+c)^{2}} +\cdots$$

<!--## 20. Fracciones 


21. Teorema del residuo y del factor
22. División sintética
23. Teoremas sobre polinomios
24. Gráficas de polinomios
25. 
26. Funciones exponenciales
27. Función Logaritmica
	27.1 Propiedades de los logaritmos
	27.2 Cómo graficar una función logaritmica
	27.3 Propiedades de los logaritmicas
	29. Funciones trigonométricas

<div style="page-break-after: always;"></div>

---

# Referencias

- W., E. y A., J. (2009). Encontrar el determinante de una matriz (12<sup>a</sup> ed.). En S. R. Cervantes (Ed.), _Álgebra y trigonometría con geometría análitica_ (pp. 715-717). Editorial CENGAGE Learning.
--->
