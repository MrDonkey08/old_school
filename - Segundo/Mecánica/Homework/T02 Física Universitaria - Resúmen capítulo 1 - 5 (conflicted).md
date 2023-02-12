# Mecánica
## Tarea 02
## Cinemática de la Partícula
### Fecha de Entrega: Domingo 25 de septiembre de 2022
### Nombre: Alan Yahir Juarez Rubio

---
## Unidades, Cantidades Físicas y Vectores
### Estándares y unidades
#### ¿Qué es la medición?

La medición es simplemente compar unidades, comparar tamaños con otros. Uno puede comparar el tamaño de, por ejemplo, una caja y una puerta y puede decir que la puerta mide 5 veces el tamaño de la caja, es decir, mide 5 cajas, pero, este sistema de medición tiene un problema, la medida de un objeto, tal como las cajas no es la misma para todos los ejemplares; hay cajas más pequeñas y más grandes que otras. 

Para resolver este problema se desarrolló el SI (Sistema Internacional), que establece, en base a fenómenos físicos, unidades universales tal como el metro (para medir distancias), el segundo (para medir tiempo), kilogramo (para medir masa), entre muchos otros. Todas estas unidades, a comparación del ejemplo de la caja, se pueden replicar gracias a la implementación de herramientas (regla, reloj, bascúla, etc), en la cuales uno puede medir, puede comparar las unidades de estas con objetos o fenómenos.

---
### Prefijos de unidades
Tomando en cuenta las unidades fundamentales, existen notaciones que ayudan a simplificar el entendimiento y la escritura de mediciones grandes o pequeñas, a comparación de las unidades básicas ([[Notación de Unidades de Medición.png | Fig 1]]). ^d8f718


![[Notación de Unidades de Medición.png]]

[[#^d8f718 | Fig 1]] Artículos principales: Prefijos del Sistema Internacional y Escalas numéricas larga y corta.

### Vectores
Un **vector** es una magnitud (tal como la rapidez, fuerza...) pero con dirección, es decir, no solo se menciona la cantidad de unidades, sino también la dirección a la que se emplea dicha magnitud, a la izquierda, a la derecha hacia arriba, hacia abajo, etc. Algunas **cantidades vectoriales** son el desplazamiento (indica el cambió en la posición).

Si dos vectores tienen la misma dirección, son **paralelos**; si tienen la misma magnitud y dirección, son iguales y se representa como $\vec{A}=\vec{B}$; en cambio, si tienen la misma magnitud, pero no la misma dirección, no son iguales. En caso de ser iguales en magnitud, pero en direccción opuesta se representaría como $\vec{A}=-\vec{B}$. Dos vectores con distinta o igual magnitud, pero en dirección opuestas se les dice que son **antiparalelos**.


#### Suma de vectores
|Suma de vectores|Caso|Conversión a magnitud|
|-|-|-|
|$\vec{ C}=\vec{ A}+\vec{ B}$| cuando $\vec{ A}$ y $\vec{ B}$ son **paralelos** entre sí|$\vec{ C}={ A}+{ B}$|
|$\vec{ C}=\vec{ A}+\vec{ B}$|cuando $\vec{ A}$ y $\vec{ B}$ son **antiparalelos** entre sí|$\vec{ C}=\textbar{ A}-{ B}\textbar$|



#### Suma de más de dos vectores
Primero se suma dos vectores cualquiera y la resultante sumarla con el tercero ([[#^88b1e3| Caso 1]]) o, en dado caso la resultante de la suma del siguiente par de vectores ([[#^d9c0b8 | Caso 2]]) ^6fd36a

[[#^6fd36a | Caso 1]]$$\vec R=(\vec A+\vec B)+\vec C=\vec D+\vec C$$ ^88b1e3

[[#^6fd36a | Caso 2]]$$\vec R=(\vec A+\vec B)+(\vec C+\vec D)=\vec E+\vec F$$ ^d9c0b8

Cabe mencionar que no es necesario dibujar los vectores resultantes ($\vec E$ y $\vec F$) [[#^6fd36a | Caso 2]], sino solo al vector resultante $\vec R$

#### Componente de vectores

Por definición, cada vector componente tiene la dirección de un eje de coordenadas, por lo que solo necesitas un número para describirlo. Si el vector compenente $\vec A_x$ apunta hacia la dirección $x$ positiva, definimos el número $A_x$; si $\vec A_x$ apunta a la dirección $x$ negativa, $A_x$ es igual al negativo de dicha magnitud, teniento presente que la magnitud en sí de un vector nunca es negativa. Definimos el número de $A_y$ del mismo modo. $A_x$ y $A_y$ son las **componentes** de $\vec A$

---
$\cfrac{A_x}{A}=\cos\theta$ y $\cfrac{A_y}{A}=\sin\theta$ 
$A_x=A\cos\theta$ y $A_y=A\sin\theta$

Estas ecuaciones son correctas si solo el ángulo $\theta$ se mide desde el eje $x$ positivo

También se puede usar el teorema de pitagoras para obtener la magnitud y la dirección a partir de las componentes.

$$A=\sqrt{{A_x}^2+{A_y}^Ⅱ}$$

---
### Vectores unitarios
Un **vector unitario** es un vector cont magnitud 1, sin unidades. Sú único fin es describir una dirección en el espacio. En estos vectores se incluye un acento circunplejo (^) encima de estos. 

|Vector unitario|Eje|Su relación con los componentes de un vector|
|:-:|:-:|:-:|
|$\hat\imath$|$+x$|$\vec A_x = A_x\hat\imath$|
|$-\hat\imath$|-x|$\vec A_x = A_x-\hat\imath$|
|$\hat\jmath$|$+y$|$\vec A_y = A_y\hat\jmath$|
|$-\hat\jmath$|$-y$|$\vec A_y = A_y-\hat\jmath$|
|$\hat k$|$+z$|$\vec A_z = A_z\hat k$|
|-$\hat k$|$-z$|$\vec A_z = A_z-\hat k$|

Cuando representamos dos vectores $\vec A$ y $\vec B$ en términos de sus componentes, podemos representar la resultante como $\vec R$ usando vectores unitarios de la siguiente manera:

$\vec A = A_x\hat\imath + A_y\hat\jmath + A_z\hat k$
$\vec B = B_x\hat\imath + B_y\hat\jmath + B_z\hat k$

$\vec R=\vec A + \vec B$
$=(A_x+B_x+C_x)\hat\imath + (A_y+B_y+C_y)\hat\jmath + (A_z+B_z+C_z)\hat k$
$\vec R = R_x\hat\imath + R_y\hat\jmath + + R_z\hat k$

---
### Productos de vectores
$$\vec A\cdot\vec B = AB\cos\phi = |\vec A||\vec B|\cot\phi$$

donde $\phi$ está entre 0° y 180°

Si $\phi$ está entre 0° y 90°, el producto escalar será postivo, y negativo si $\phi$ está entre 90° y 180°. El producto escalar de dos vectores pependiculas siempre es cero.

$\hat\imath\cdot \hat\imath = \hat\jmath\cdot \hat\jmath = \hat k\cdot \hat k=(1)(1)\cos0 = 1$
$\hat\imath\cdot \hat\jmath = \hat\imath\cdot \hat k = \hat\jmath \cdot \hat k=(1)(1)\cos90 = 0$

$\vec A\cdot \vec B = (A_x\hat\imath + A_y\hat\jmath + A_z\hat k) \cdot (B_x\hat\imath + B_y\hat\jmath + B_z\hat k)$

$=A_x\hat\imath \cdot B_x\hat\imath + A_x\hat\imath \cdot B_y\hat\jmath + A_x\hat\imath \cdot B_z\hat k$
$+ A_y\hat\jmath \cdot B_x\hat\imath + A_y\hat\jmath \cdot B_y\hat\jmath + A_y\hat\jmath \cdot B_z\hat k$
$+ A_z\hat k \cdot B_x\hat\imath + A_z\hat k \cdot B_y\hat\jmath + A_z\hat k \cdot B_z\hat k$

$=A_x B_x\hat\imath \cdot \hat\imath + A_x B_y\hat\imath \cdot \hat\jmath + A_x B_z\hat\imath \cdot \hat k$
$+ A_y B_x\hat\jmath \cdot \hat\imath + A_y B_y\hat\jmath \cdot \hat\jmath + A_y B_z\hat\jmath \cdot \hat k$
$+ A_z B_x\hat k \cdot \hat\imath + A_z B_y\hat k \cdot \hat\jmath + A_z B_z\hat k \cdot \hat k$

$\vec A \cdot \vec B = A_xB_x + A_yB_y + A_zB_z$

---
<div style="page-break-after: always; visibility: hidden"> \pagebreak </div>

## Movimiento en Línea Recta
### Desplazamiento, tiempo y velocidad media

Para medir el movimiento de una **[[#^52d830 | partícula]]** es en términos del cambio de posición a lo largo de un intérvalo de tiempo.

La componente $x$ del desplazamientos es simplemente el cambio de valor de $x$.

$\Delta x = x_2 - x_1$

$$v_{\text{med}-x}=\cfrac{x_2-x_1}{t_2-t_1}=\cfrac{\Delta x}{\Delta t}$$
Una velocidad media positiva o negativa no representa un movimiento hacia la derecha o hacia la izquierda. Esto solo depende de hacia qué lado establecimos el eje $+x$.

---
### Velocidad instántanea
Para describir el movimiento de una **partícula** con mayor detalle es necesario definir la velocidad en cualquier instante específico esto se le llama **velocidad instántanea**. Para calcularla, primero debemos calcular la velocidad media

$v_x=\lim\limits_{\Delta r\to 0}\cfrac{\Delta x}{\Delta t}=\cfrac{dx}{dt}$

Como $\Delta t$ es siempre positivo, $v_x$ tiene el mismo signo que $\Delta x$. 

Como en este caso la partícula solo tiene movimiento en el eje $x$ o, dicho de otra manera, $x$ es el único componente de la velocidad media, los componentes $y$ y $z$ son igual a cero. Entonces en estos tipos de casos se puede decir que $v_x$ es igual a la velocidad instántanea.

---
### Aceleración media e instantánea
#### Aceleración media

$a_{\text{med}-x}=\cfrac{v_{2_x}-v_{1_x}}{t_{2}-t_{1}} = \cfrac{\Delta v_x}{\Delta t}$

#### Aceleración instántanea
$a_x=\lim\limits{\Delta r\to 0}\cfrac{\Delta v_x}{\Delta t}=\cfrac{dv_x}{dt}$

---
### Cuerpos en caída libre
La aceleración constante de un cuerpo en caída libre se llama **aceleración debida a la gravedad** y denotamos su magnitud con $g$, el cual tiene un valor aproximado de $9.80665\text { m/s}^2$, el cual se suele manejar como $9.8\text { m/s}^2$ o, para simples explicaciones como $10\text { m/s}^2$. El valor exacto varía según el lugar, pero en la mayoria de los casos no es necesario calcularlo debido a que la tasa de error es relativamente insignificativa.

---
<div style="page-break-after: always; visibility: hidden"> \pagebreak </div>

## Movimiento en Dos o Tres Dimensiones
### Vectores de posición y velocidad
$\vec r = x\hat\imath + y\hat\jmath + z\hat k$
 $\vec v_{\text med} = \cfrac{\vec r_2 - \vec r_1}{t^2 - t_1} = \cfrac{\Delta \vec r}{\Delta t}$
 $\vec v=\lim\limits_{\Delta r\to 0}\cfrac{\Delta \vec r}{\Delta t}=\cfrac{d\vec r}{dt}$
 $\vec v = \cfrac{d\vec r}{dt} = \cfrac{dx}{dt}\hat\imath + \cfrac{dy}{dt}\hat\jmath + \cfrac{dz}{dt}\hat k$
$|\vec v| = v = \sqrt{{v_x}^2 + {v_y}^2 + {v_z}^2}$ 
$\tan\alpha = \cfrac{v_y}{v_x}$

---
### El vector de aceleración
$\vec a_{\text med} = \cfrac{\vec v_2 - \vec v_1}{t^2 - t_1} = \cfrac{\Delta \vec v}{\Delta t}$
$\vec v=\lim\limits_{\Delta v\to 0}\cfrac{\Delta \vec v}{\Delta t}=\cfrac{d\vec r}{dt}$
 $\vec a = \cfrac{dv_x}{dt}\hat\imath + \cfrac{dv_y}{dt}\hat\jmath + \cfrac{dv_z}{dt}\hat k$
 $\vec a = \cfrac{d^2x}{dt}\hat\imath + \cfrac{d^2y}{dt}\hat\jmath + \cfrac{d^2z}{dt}\hat k$

---
### Movimiento de proyectiles
Un **proyectil** es un cuerpo que recibe una velocidad inicial y luego sigue una trayectoria determinada totalmente por los efectos de la aceleración gravitacional y la resistencia del aire. En el movimiento de proyectiles no se toma en cuenta la resistencia del aire

Para analizar el movimiento de un proyectil, este se divide en 2 casos; para el componente $x$ movimiento rectilineo uniforme, debido a que la aceleración de este componente es 0  y para el eje $y$ caída libre, debido a que la aceleración del componente de $y$ es igual a $-g$, es decir, $-9.81\text{ m/s}^2$, negativa porque el objeto va descendiendo, se dirige hacia el eje $-y$.


$v_x=v_{0_x}$
$x=x_0+v_{0_x}t$

$v_y=v{v_{0_y}}-gt$
$y=y_0+v_{0_y}t-\cfrac{1}{2}gt^2$

$x=(v_0\cos\alpha_0)$
$y=(v_0\sin\alpha_0)t-\cfrac{1}{2}gt^2$
$v_x=v_0\cos\alpha_0$
$v_y=v_0\sin\alpha_0-gt$

$r=\sqrt{x^2+y^2}$
$v=\sqrt{{v_x}^2+{v_y}^2}$
 $\tan\alpha = \cfrac{v_y}{v_x}$
$y=(\tan\alpha_0)x-\cfrac{5}{2{v_0}^2\cos^2\alpha_0}x^Ⅱ$
$y=bx-cx^2$              tarts

---
### Movimiento circular uniforme
$\cfrac{\mid\Delta\vec v\mid}{v_1}=\cfrac{\Delta s}{R}$    o    $\mid\Delta\vec v\mid=\cfrac{v_1}{R}\Delta s$  

$a_{\text {med}} = \cfrac{\mid\Delta\vec v\mid}{\Delta t} = \cfrac{v_1}{R}\cfrac{\Delta s}{\Delta t}$

$a_{\text {med}} = \lim\limits_{\delta t\to 0}\cfrac{v_1}{R}\cfrac{\Delta s}{\Delta t} = \cfrac{v_1}{R}\lim\limits_{\Delta t\to 0}\cfrac{\Delta s}{\Delta t}$

$v=\cfrac{2\pi R}{T}$

$a_{\text{rad}} = \cfrac{4\pi^2 R}{T^2}$

---
### Movimiento circular no uniforme
$a_{\text{rad}}=\cfrac{v^2}{R}$    y    $a_{}$

---
<div style="page-break-after: always; visibility: hidden"> \pagebreak </div>

## Leyes del Movimiento de Newton


--- 
<div style="page-break-after: always; visibility: hidden"> \pagebreak </div>

## Aplicación de las Leyes de Newton

---
<div style="page-break-after: always; visibility: hidden"> \pagebreak </div>

## Glosario

**Teoría**: Explicación de fenómenos naturales basada en observaciones y en los principios fundamentales observados 

**Partícula:** punto de referencia que representa a un objeto en un sistema de coordenadas. ^52d830

**Aceleración**: cambio de velocidad respecto al tiempo.

---
<div style="page-break-after: always; visibility: hidden"> \pagebreak </div>

## Bibliografía
- Sears, F. W., Zemansky M. W., Young, H. D., Freedman, R. A., Ford A. L. (2004). Wesley, P. A (Ed.). _Física Universitaria_ (11$^{\text a}$ ed, Vol. 1). México. Pearson Educación. https://ebookcentral-proquest-com.wdg.biblio.udg.mx:8443/lib/wdgbiblio/reader.action?docID=5134269&ppg=1