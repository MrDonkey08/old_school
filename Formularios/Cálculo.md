---
title: Cálculo
author: Alan Yahir Juárez Rubio

aliases: formulario, calculo
tags: formulario/calculo, calculo/formulario

creation date: 14-02-2023
last modification date: 15-03-2023

type: Note
---

# Formulario

En este formulario: $a, b, c \text{ y } d\in\Bbb R$ y son constantes

## Dominio y rango de funciones

Función independiente: $f(x)=c$
$D_{f(x)}=\Bbb R$
$R_{f(x)}=c$

Función lineal: $f(x)=ax+c$
$D_{f(x)}=\Bbb R$
$R_{f(x)}=\Bbb R$

Función cuadrática: $ax^2+bx+c$
$D_{f(x)}=\Bbb R$

Si $a\leq0,\ R_{f(x)}=(-\infty,V_y]$
Si $a\geq0,\ R_{f(x)}=[V_y,\infty)$

$V(x,y)=V\left(\cfrac{-b}{2a},\left(\cfrac{-b}{2a}\right)\right)$ <!-- Para encontrar el rango, se tiene que buscar el vertice-->

Función racional (tipo 1): $\cfrac c{ax+c}$
$D_{f(x)}=\Bbb R-\{x|x\to ax+c=0\}$
$ax+c\neq0\to x\neq\cfrac{-c}{a}$
$D_{f(x)}\neq \Bbb R-\{-\cfrac{c}a\}$

$R_{f(x)}=\Bbb R-\{0\}$

Función racional (tipo 2): $\cfrac{ax^n+c}{bx^n+d}$
$D_{f(x)}=\Bbb R-\{bx^n+d=0\}$
$bx^n+d\neq0\to x^n\neq\cfrac{-d}{b}\to\text{ despejar }x \text{ segun el valor de } n$

$R_{f(x)}=\cfrac{ax^n}{bx^n}=\cfrac{a}{b}$

Función racional (tipo 3): $\cfrac{ax^n+c}{bx^m+d}$
$D_{f(x)}=\Bbb R-\{x|x\to\text{denominador}=0\}$
$bx^m+d\neq0\to x^m\neq\cfrac{-d}{b}\to\text{ despejar }x \text{ segun el valor de } n$

$R_{f(x)}=\cfrac{ax^n}{bx^m}$
si $n<m\to R_{f(x)}=\cfrac{ax^n}{bx^m}=\cfrac{a}{bx^{m-n}}$
si $n>m\to R_{f(x)}=\cfrac{ax^n}{bx^m}=\cfrac{ax^{n-m}}{b}$

Función radical (lineal): $\sqrt{ax+c}$
$D_{f(x)}=\Bbb R -\{x|x\to ax+c<0\}$
si $a<0\to ax+c\geq0\to x\leq\cfrac{-c}{a}$
si $a>0\to ax+c\geq0\to x\geq\cfrac{-c}{a}$

$R_{f(x)}=[0,\infty)$

Función radical (cuadrática): $\sqrt{ax^2-c}$
$D_{f(x)}=\Bbb R-\{x|x\to ax^2-c<0\}$
si $a>0\to ax^2-c\geq0\to x^2\geq\cfrac{c}{a}\to |x|\geq\sqrt{\cfrac{c}{a}}\to x\leq-\sqrt{\cfrac{c}{a}}\text{ o }x\geq\sqrt{\cfrac{c}{a}}$ 
<!-- Para determinar el rango de un función radical de una ecuación cuadrática se toma el valor x como 0 (el minimo) -->
$R_{f(x)}=[\sqrt{c},\infty)$

## Operaciones con funciones
|Operación|Representación|
|-|-|
|Suma| $h(x)=f(x)+g(x)$|
|Resta| $h(x)=f(x)-g(x)$|
|Multiplicación| $h(x)=f(x)\cdot g(x)$||
|División| $h(x)=\cfrac{f(x)}{g(x)}$|
|Composición| $h(x)=f\circ g=f(g(x))$|

## Función inversa

Inyectiva: $f(x_1)=f(x_2)$
Sobreyectiva: $Cod_{f(x)}=R_{f(x)}$
Biyectiva: Inyectiva y sobreyectiva

Función inversa $(f^{-1})$
$f(x)=y\ \ f^{-1}(x)=x$

### Cómo obtener la inversa de una función
|Pasos|$f(x)=x+c$ |
|-|-|
|Representar $f(x)$ como $y$|$y=x+c$|
|Despejar en términos de $x$|$y-c=x$|
|Intercambiar la posición de las igualdades (opcional)|$x=y-c$|
|Cambiar $x$ por $f^{-1}(x)$ y $y$ por $x$|$f^{-1}(x)=x-c$ |

### Inversas de funciones trigonometricas
|$\sin\to\text{arcsen}$|$\cos\to\arccos$|$\tan\to\arctan$|
|:-:|:-:|:-:|
|$\sec\to\text{arcsec}$|$\csc\to\text{arccsc}$|$\cot\to\text{arccot}$|
## Límites

### Propiedades de los límites

$\lim\limits_{x\to a}f(x)+g(x)=\lim\limits_{x\to a}f(x)+\lim\limits_{x\to a}g(x)$
$\lim\limits_{x\to a}f(x)-g(x)=\lim\limits_{x\to a}f(x)-\lim\limits_{x\to a}g(x)$
$\lim\limits_{x\to a}f(x)\cdot g(x)=\lim\limits_{x\to a}f(x)\cdot \lim\limits_{x\to a}g(x)$
$\lim\limits_{x\to a}f(x)/g(x)=\lim\limits_{x\to a}f(x)/\lim\limits_{x\to a}g(x)$
$\lim\limits_{x\to a}cf(x)=c\lim\limits_{x\to a}f(x)$

### Algunos límites

$\lim\limits_{x\to a}\sqrt[n]{f(x)}=\sqrt[n]{\lim\limits_{x\to a}f(x)}$
$\lim\limits_{x\to a}f(x)=f(a)$, cuando $f$ es una función trigonométrica ($\text{sin, cos, tan...}$)

### Límites laterales

Si $\lim\limits_{x\to a^+}f(x)=L$ y $\lim\limits_{x\to a^-}f(x)=L$, entonces $\lim\limits_{x\to a}f(x)=L$
Si $\lim\limits_{x\to a^+}f(x)=L$ y $\lim\limits_{x\to a^-}f(x)=M$, entonces $\lim\limits_{x\to a}f(x)=\text{ No existe}$

## Límites infinitos

Límite infinito: $\lim\limits_{x\to a}f(x)=\infty$
Límite al infinito: $\lim\limits_{x\to\infty}=L$

### Reglas de los infinitos
|$\infty*\infty=\infty$|$\infty+\infty=\infty$|$\infty*(-\infty)=-\infty$|
|:-|:-|:-|
|$c*\infty=\infty; \text{ si } c>0$|$c*\infty=-\infty;\text{ si } c<0$|$\infty+c=\infty$
|$\infty-\infty\text{ No concluyente}$|$\infty/\infty\text{ No concluyente}$|$0*\infty=\infty\text{ No concluyente}$
|$1/\infty=0$|$0/\infty=0$|$\infty/0=^+_-\infty \text{ es necesario un análisis}$|

### Propiedades de los límites infinitos

donde $P_n(x)=\text{polinomio de grado } x$

|Límites|Condiciones|
|-|:-:|
|$\lim\limits_{x\to\infty}x^n=\infty$|-|
|$\lim\limits_{x\to-\infty}x^n=\infty$|cuando $x^n>0$|
|$\lim\limits_{x\to-\infty}x^n=-\infty$|cuando $x^n<0$|
|$\lim\limits_{x\to-\infty} \cfrac{e^x}{x^n} = \infty$| - |
|$\lim\limits_{x\to-\infty} \cfrac{x^n}{e^x} = 0$| - |
|$\lim\limits_{x\to\infty}c^x=\infty$|cuando $c>1$|
|$\lim\limits_{x\to\infty}c^x=0$|cuando $c<1$|
|$\lim\limits_{x_\to -\infty}c^x=0$|cuando $c>1$|
|$\lim\limits_{x_\to -\infty}c^x=\infty$|cuando $c<1$|
|$\lim\limits_{x\to\infty}P_n(x)=\infty$|-|
|$\lim\limits_{x\to-\infty}P_n(x)=\infty$|si $n$ es par|
|$\lim\limits_{x\to-\infty}P_n(x)=-\infty$|si $n$ es non|

## Teorema de compresión (sandwich)
Sean $g(x)\leq f(x)\leq h(x)$ y $\lim\limits_{x\to a}g(x)=\lim\limits_{x\to a}h(x)=L$, entonces $=\lim\limits_{x\to a}f(x)=L$
<!-- https://www.youtube.com/watch?v=Kfh4qf0fDds -->

### Variantes

Si $f(x)\geq g(x)$ y $\lim\limits_{x\to a}g(x)=\infty$, entonces $\lim\limits_{x\to a}f(x)=\infty$ 
Si $f(x)\leq g(x)$ y $\lim\limits_{x\to a}g(x)=-\infty$, entonces $\lim\limits_{x\to a}f(x)= - \infty$ 

### Límites trigonométricos

- $\lim\limits_{x\to \infty}f(x)$ no existe si $f$ e cualquier función trigonométrica. De igual manera con $-\infty$

Ejemplos:
- $\lim\limits_{x\to \infty}\cfrac{x}{2x+1}\sin(x)$
- $\lim\limits_{x\to \infty}\cfrac{\sin (x)}{x}$

## Derivadas

### Propiedades de las Derivadas

donde $f=f(x)$ y $g=g(x)$

|Caso|Fórmula|
|:-:|:-:|
|$(f\pm g)'$|$f'\pm g'$|
|$(cf)'$|$cf'(x)$|
|$(f\cdot g)'$|$f'\cdot g+f\cdot g'$|
|$f\cdot g'$|$(f\cdot g)' - f'\cdot g$|
|$\left(\cfrac{f}{g}\right)'$|$\cfrac{f'\cdot g-g'\cdot f}{g^2}$|
|$(f\circ g)'$|$f'(g)\cdot g'$
|$\ln\left(x\right)'$|$\cfrac{x\:'}{x}$

### Algunas derivadas
|Función|Derivada|
|-|-|
|$f(x)=c$|$f'(x)=0$|
|$f(x)=x^n$|$f'(x)=nx^{n-1}$|
|$f(x)=e^x$|$f'(x)=e^x$|
|$f(x)=\sin(x)$|$f'(x)=\cos(x)$|
|$f(x)=\cos(x)$|$f'(x)=-\sin(x)$

Regla de la cadena

$z(x)=f(g(x))$

$f(x)=\sin(e^x) = \cos(e^x) \cdot e^x$

$\sin^2 x + \cos^2 x = 1$

$\cfrac{1}{\cos x} = \sec x$

### Continuidad de funciones

Una función $f(x)$ es **continua** en $x=a$  si  $\lim\limits_{x\to a} f(x)=f(a)$
Si es continua en todo su dominio entonces la función es continua. Si una función no es ocntinua en un punto $a$ se dice que $f$ es dicontinua en $a$

Las siguientes funciones son continuas
- Polinomios
- Funciones racionales (siempre que no exista división entre 0)
- Raíces
- Funciones trigoométricas y sus inversas.
- Exponenciales y logaritmos

Se tiene $\lim\limits_{x\to a} f(g(x))=f \left(\lim\limits_{x\to a} g(x)\right)$ siempre que $f$ sea continua en $\lim\limits_{x\to a} g(x)$
La composición de funciones continuas es continua

### Puntos críticos
|Pasos primer método | $f(x) = 2x^2-4x-1$|
|:-|:-|
|Derivar|$f'(x)=4x-4$|
|Igualar a 0 y resolver|$4x-4=0\to x=1$|
|Remplazar en $f(x)$|$f(1) = 2(1)^2-4(1)-1=-3$ |
|Igualar $f'(x)$ a 0 y resolver|$f'(x) = 4x-4=0\to x=1$|
|Evaluar $f'(x)$ del lado izquierdo| $f'(0) =4(0)-4 = -4\leftarrow$ Decreciente |
|Evaluar $f'(x)$ del lado derecho| $f'(2) =4(2)-4 = 4\leftarrow$ Creciente |
|-| Como primero disminuye y después aumenta $(1,-3)$ es un mínimo |

| Pasos segundo método | $f(x) = 2x^2-4x-1$ |
|:-|:-|
| Derivar|$f'(x)=4x-4$|
| Igualar a 0 y resolver | $4x-4=0\to x=1$ |
|Remplazar en $f(x)$|$f(1) = 2(1)^2-4(1)-1=-3$ |
| Sacar la segunda derivada | $f''(x) = 4$ |
| Evaluar $f''(x)$ en el valor encontrado de $x$ | $f''(1) = 4$ |
|Si $f''(x) > 0$, entonces su punto crítico es un mínimo | Sí aplica, por lo que $(1,-3)$ es un mínimo |
|Si $f''(x) < 0$, entonces su punto crítico es un máximo | No aplica |
|Si $f''(x) = 0$, entonces no es ninguno de los dos. "Es un punto silla" | No aplica |

<!-- $\cfrac{f(x)}{g(x)} = 0$ si $f(x) = 0$ -->

## Funciones explicitas e implicitas

Una **función implicita** es aquella que $f(x)$, o en dado caso $y$, no está despejada, es decir:

$x + 2y = 1$

En cambio, una **función explicita** es aquella que $f(x)$ o $y$ si está despejada
$y = 2x$

En forma explicita es: $y=y(x)$
$y(x) = x^2$ 
$y(x)=e^x + \ln x$

## Derivadas de funciones implicitas
| Encontrar $y'$ / Encontrar $\cfrac{dy}{dx}$ | $5x^2+3=2y^3+5$ |
|:-|:-|
| Derivar la ecuación y, como se está derivando respecto a $y$ , cuando saquemos la derivada de un término con $y$, se le agrega $y'$ multiplicando | $10x=6y^2y'$ |
| Despejar $y'$ | $\cfrac{10x}{6y^2} = y'$ |
