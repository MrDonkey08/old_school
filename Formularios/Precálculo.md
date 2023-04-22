
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
|:----:|:---------------------:|:------------------------:|
|  1   |  $\mid a\mid\: < b$   |       $-b < a < b$       |
|  2   | $\mid a\mid\: \leq b$ |    $-b \leq a \leq b$    |
|  3   |  $\mid a\mid\: > b$   |   $a < -b \cup a > b$    |
|  4   | $\mid a\mid\: \geq b$ | $a \leq -b \cup a\geq b$ |
|      |                       |                          |

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

Siendo el grado de $f(x)$ menor que el de $g(x)$, entonces tenemos que
$$\frac{f(x)}{g(x)} = F_{1} + F_{2} +\cdots + F_r$$

tal que $F_{k}$ tiene una de las formas

$$\frac{A}{(ax+b)^{n}}\:\: \text{ o }\:\: \frac{A_{x} + B}{(ax^{2}+bx+c)^{n}}$$

**Factores lineales distintos**:

$$\frac{f(x)}{(ax+b)(cx+d)\cdots} = \frac{A}{ax+b} + \frac{B}{cx+d} +\dots \tag{1}$$

**Factores lineales repetidos**:

$$\frac{f(x)}{(ax+b)^{n}} = \frac{A}{ax+b} + \frac{B}{(ax+b)^{2}} + \cdots \tag{2}$$

**Factores cuadráticos distintos**:

$$\frac{f(x)}{(ax^{2}+bx+c)(dx^{2}+cx+f)} = \frac{Ax+B}{ax^{2}+bx+c} + \frac{Cx+D}{dx^{2}+ex+f} +\cdots \tag{3}$$

**Factores cuadráticos repetidos**:

$$\frac{f(x)}{(ax^{2}+bx+c)^{n}} = \frac{Ax+B}{ax^{2}+bx+c} + \frac{Cx+D}{(ax^{2}+bx+c)^{2}} +\cdots \tag{4}$$
### Procedimiento general

1. Verificar que el _grado_ del _numerador_ $f(x)$ sea menor que el del _denominador_; de ser el caso contrario, aplicar la _división larga_.
2. Factorizar el denominador en _factorles lineales_ $px + q$ o _factores cuadráticos irreducibles_.
3. Multiplicar los númeradores de cada $F_{k}$ por el _mínimo común múltiplo_, es decir, por cada uno de los _factores_, para poder convertir la expresión en _líneal_.
4. Igualar la expresión encontrada por el numerador $f(x)$.
5. Convertir la expresión en la forma.

$$f(x) = (a_1A+a_2B+\cdots)x + (a_{3}A+a_{4}B+\cdots)x^{2} +\cdots $$

6. Considerando que $f(x) = b_{1}x+ b_{2}x{^2} + \cdots$, entoncespodemos igualar los coeficientes de las potencias semejantes.de esta manera obtenemos un _sistema de ecuaciones_.
7. Sustituir en las _fracciones parciales_ los valores de $A, B, \cdots$.

#### Factores lineales no repetidos

En caso de que todos los factores del denominador sean _lineales no repetidos_ $(1)$, entonces podemos aplicar un método alternativo a partir del paso 4.

1. Sustituir los valores de $x$ que hagan que cada uno de los _factores lineales_ se conviertan en 0.
2. Resolver cada caso haciendo las sustituciones necesarias.
3. Sustituir en las _fracciones parciales_ los valores de $A, B, \dots$



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
