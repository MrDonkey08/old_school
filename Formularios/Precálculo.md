***
# Formulario Precálculo
---
En este formulario: $a,\; b,\; c\; \text{ \& }\; d\in\Bbb R$ y son constantes.

---
## 1. Conjunto de Números Reales

---
### Propiedades de los números

|                                                               |                   Suma                    |               Multiplicación               |
| ------------------------------------------------------------- |:-----------------------------------------:|:------------------------------------------:|
| Ley conmutativa                                               |              $a + b = b + a$              |          $a \cdot b = b \cdot a$           |
| Ley asociativa                                                |        $(a + b) + c = a +(b + c)$         | $(a \cdot b) \cdot c = a \cdot(b \cdot c)$ |
| Elemento Neutro                                               |                 $a+(0)=a$                 |             $a \cdot (1) = a$              |
| Elemento inverso (recíproco)                                  |                $a+(-a)=0$                 |  $a \cdot \left(\cfrac{1}{a} \right) = 1$  |
| Ley distributiva de la multiplicación con respecto de la suma | $(a + b) \cdot c = a \cdot c + b \cdot c$ |                $\leftarrow$                |

---
### Fracciones

1. **Suma de fracciones**
	1. Mismo denominador: $\cfrac{a}{b} + \cfrac{c}{b} = \cfrac{a + c}{b}$
	2. Distinto denominador: $\cfrac {a}{b} + \cfrac {c}{d} =\cfrac {ad+bc}{cd}$
	3. Entero y una fracción : $a+\cfrac {c}{b} = \cfrac {ab+c}{b}$
2. **Multiplicación de fracciones:** $\cfrac {a}{b} \cdot \cfrac {c}{d} = \cfrac {ac}{bd}$
3. **Division de fracciones** **(cruzada).** $\cfrac {a}{b} \div \cfrac {c}{d} = \cfrac {ad}{bc}$
4. **Multiplicación por unidad.** $\cfrac{a}{b} \cdot \cfrac{c}{c} = \cfrac{a \cdot c}{b \cdot c} = \cfrac{a}{b}$

---
### Desigualdades

**Mayor que ($>$):** $a-b = c \to a>b$, donde $c > 0$
**Menor que ($<$):** $a-b = c \to a<b$, donde $c < 0$

---
### Valor absoluto

$$|a|= \begin{bmatrix} a\geq 0 \to |a| = a \\ a < 0 \to |a|= -a\end{bmatrix}$$

---
### Distancia entre dos puntos

- $d(A,B) =|b-a|$ 
- $d(B,A)= |a-b|$

---
## 2. Leyes de los exponentes
---
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

---
## 3. Leyes de los radicales
---
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

---
## 4. Número imaginario
---

**Número imaginario**: $i = \sqrt{-1}$

- $i^0=1$
- $i^1=i$
- $i^2 = -1$
- $i^3 = i^2i=(-1)i = -i$
- $i^4 = i^2 i^2=(-1)(-1)=1$

**Número complejo**:  $z = a + bi \; | \; a \in \Bbb {R} \; \& \; bi \in \Bbb {I} \; \to \; Z \in \Bbb C$

---
## 5. Operaciones con polinomios
---

- **Suma y resta (términos semejantes)**: ${x^n}\pm  ax^n = (a\pm 1)a^n$
- **Multiplicación**: $a(b+c) = (a)(b)+(a)(c)$

---
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

---
## 6. Binomio de Newton 
---

$$(a+b)^n=a^n+ \cfrac {n}{1!}a^{n-1}b+ \cfrac {n(n-1)}{2!}a^{n-2}b^2 + \cfrac {n(n-1)(n-2)}{3!}a^{n-3}b^3+ \cdots +b^n$$

---
## 7. K_ésimo término 
---

$$K_{\text{ésimo}} \text{término} = \cfrac {n!}{(n-r+1)!(r-1)!} a^{n-r+1}\cdot b^{r-1}$$

> [!note]+ Nota
> 
> $n =$ potencia  &  $r$ = número  del  término a  buscar

---
## 8. Factorización
---

**Por término común**: $x^2+ax = x(x+a)$

**Por fórmula**: Consultar las fórmulas de productos notables.

**Por agrupación:**

$$\begin{array}{lll}
ax+bx+ay+by & = & (ax+bx)+(ay+by) \\
&= &x(a+b)+y(a+b) \\
&= &(a+b)(x+y) \\
\end{array}$$

---
## 11. Operaciones con números complejos en forma algebraica
---

$$\begin{array}{c|c|c} \text{Suma y resta}& \text{División} & \text{Mutiplicación}\\z_1-z_2=(a+bi)+(c+di) & \cfrac{z_1}{z_2}=\cfrac{z_1}{z_2}*\cfrac{z_2}{z_2} & z_1*z_2=(a+bi)(c+di)\\ 

=(a+c)+(b+d)i & =\cfrac{a+bi}{c+di}* \cfrac{c-di}{c-di} & =ac+bci+adi+bdi^2\\

z_1-z_2=(a+bi)-(c+di) & =\cfrac{ac+(bc-ad)i-bdi^2}{c^2d^2i^2} & ac+(bc+ad)+bdi^2\\=(a-c)+(b-d)i \end{array}$$

---
## 13. Intérvalos y desigualdades

---
### Intérvalos

**Intérvalo abierto**: $(a,\ b)={x\ |\ a<x<b,\ x\in \Bbb R}$

![](Formularios/Attachments/Formulario-1.jpeg)

**Intérvalo cerrado**: $[a,\ b]={x\ |\ a\leq x\leq b,\ x\in \Bbb R}$

![](Formularios/Attachments/Formulario-2.jpeg)

**Intérvalo semiabierto**:

![](Formularios/Attachments/Formulario-3.jpeg)

**Intérvalo infinito**:

![Formulario-3](Formularios/Attachments/Formulario-4.png)

---
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

---
## 14. Sistemas de ecuaciones lineales 2x2

---
Un **sistema de ecuaciones** es aquel en el que hay dos o más ecuaciones las cuales comparten entre sí los valores de las incógnitas.

Una sistema de ecuaciones 2x2 se representa de la siguiente manera:

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

---
### Por reducción (suma y resta)

1. Sumas ambas ecuaciones de manera que te quede se cancele una de las dos incógnitas, tomado en cuenta que:
	- Puedes multiplicar cualquier ecuación por una constante (positiva o negativa) para sumarla.
	- Puedes multiplicar ambas ecuaciones cada una por diferentes constantes (a conveniencia).

3. Sustituir el valor de la incógnita encontrada en cualquiera de de las ecuaciones para determinar la incógnita faltante.
4. Una vez encontrado ambos valores, sustituirlos en ambas ecuaciones para hacer la comprobación. 

<!--$adx+bdy=cd$
$-adx-aey=-af$
$(adx-adx)+(bdy-aey)=cd-af$
$bdy+aey=cd-af$
$y(bd+ae)=cd-af$
$y=\cfrac{cd-af}{bd+ae}$-->

---
### Por sustitución

1. Se despeja una de las variables de alguna de las ecuaciones.
2. Se sustituye el valor en la ecuación contraria y se despeja $y$.
3. Se sustituye en el primer despeje la variable $y$.
4. Comprobación.

---
### Por igualación

1. Se despeja una variable de ambas ecuaciones.
2. Se iguala los valores de los despejes de dichas variables y se depeja la variable contraria.
3. Se sustituye la segunda variable en cualquiera de los despejes.
4. Comprobación.

---
### Por gráfica

 1. Se despeja de ambas ecuaciones la variable $y$.
 2. Se tabulan ambos valores de $y$.
 3. Comprobación.

---
## 16. Ecuaciones cuadráticas

**Ecuación cuadrática especial**: $x^2=d$, entonces $x=\pm \sqrt d$

**Completar el cuadrado**:
- $x^2+kx+(\cfrac{k}{2})^2=(x+\cfrac{k}{2})^2$
- $x^2-kx+(\cfrac{k}{2})^2=(x-\cfrac{k}{2})^2$

---
## 17. Fórmula géneral para ecuaciones cuadráticas

---
### Fórmula General

Para $ax^2+bx+c=0$

$x = \cfrac{-b\pm \sqrt {b^2-4ac}}{2a}$

---
### Discriminante

$D=b^2-4ac$

1. $D\:|\:D>0\Rightarrow$ Dos soluciones reales
2. $D\:|\:D<0\Rightarrow$ Dos soluciones complejas
3. $D\:|\:D=0\Rightarrow$ Solución repetida, una única solución 

---
## 18. Ecuaciones eXpeciales

---
### Valor absoluto

$|x|=y$
$x=\pm y$
$x_1=y$
$x_2=-y$

---
### Por agrupación

$x^2+ax+bx+ba=0$
$x(x+a)+b(x+a)=0$
$(x+a)(x+b)=0$

---
### Teorema del cero

$(x+a)(y+b)=0$
$(x+a) = 0$ y/o $(y+b) =0$

$\begin{array}{l|l}x+a=0 & x+b=0\\ x_1 = -a & x_2 = -b\end{array}$ 

> [!todo]+ Importante
> 
> Hacer comprobaciones para determinar cúal solución es correcta.

---
### Por sustitución

$$ax^4+bx^2+c=0$$

1. Aplicar sustitución para simplicar la ecuación original

$$\displaylines{\begin{array}{c|c}x^2=u & x^4=u^2 \end{array}\\
au^2+bu+c=0}
$$

2. Resolver la ecuación
3. Sustituir por los valores originales
4. Comprobación