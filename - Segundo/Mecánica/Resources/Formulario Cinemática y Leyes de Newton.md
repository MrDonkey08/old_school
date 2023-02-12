# Formulario: Cinemática de la Partícula y Leyes de Newton
## Escalares y vectores
$\vec A$, módulo y dirección
$A_x$ Componente horizontal del vector $A$
$A_y$ Componente vertical del vertor $A$
$\hat\imath, \hat\jmath, \hat k$ Vectores unitarios.

**Ángulos**
$\tan\theta=\cfrac{Ay}{Ax}$
$\theta=\tan^-1\cfrac{A_y}{A_x}$

**Funciones trigonometricas**

- $\sin\alpha=\cfrac{\text{cateto opuesto}}{\text{hipotenusa}}=\cfrac ah$
- $\cos\alpha=\cfrac{\text{cateto adyacente}}{\text{hipotenusa}}=\cfrac bh$
- $\tan\alpha=\cfrac{\text{cateto opuesto}}{\text{adyacente}}=\cfrac ab$

**Magnitud del vector $\vec A$ = $A$**

$A=\sqrt{{A_x}^2+{A_y}^2}\leftarrow\text {2D}$

$A=\sqrt{{A_x}^2+{A_y}^2+{A_z}^2}\leftarrow\text {3D}$

|Operación vectorial|Fórmula|
|-|-|
|Suma/Resta|$\vec R=\vec A\pm\vec B=(A_x\pm B_x)\widehat i+(A_y \pm B_y)\widehat j$|
|Producto|$\vec A\cdot \vec B=A_xB_x+A_y+B_y$|

## Sistemas de coordenadas
|Nombre|Fórmula|
|-|-|
|Posición|$\vec r=x\hat\imath +y\hat\jmath +z\hat k$|
|Posición inicial|$\vec r_0=x_0\hat\imath +y_0\hat\jmath +z_0\hat k$|
|Distancia|$\text{d}=\mid\vec r-\vec r_0\mid\sqrt{(x-x_0)^2+(y-y_0)^2}$|
|Desplazamiento|$\Delta\vec r=\vec r-\vec r_0=(x-x_0)\hat\imath+(y-y_0)\hat\jmath+(z-z_0)\hat k$|
|Rapidez|$\text v=\cfrac {\text d}{\text t}$|
|Velocidad media|$\text V_\text{med-x}=\cfrac{\Delta x}{\Delta \text t}=\cfrac{x-x_0}{t-t_0}$ & $\text V_\text{med-y}=\cfrac{\Delta y}{\Delta \text t}=\cfrac{y-y_0}{t-t_0}$|
|Velocidad instantánea|$V_x=\lim\limits_{\Delta\text t\to 0}\cfrac{\Delta x}{\Delta\text t}=\cfrac{\text dx}{\text{dt}}$ & $V_y=\lim\limits_{\Delta\text t\to 0}\cfrac{\Delta y}{\Delta\text t}=\cfrac{\text dy}{\text{dt}}$|
|Aceleración media|$\text a_\text{med-x}=\cfrac{\Delta\text Vx}{\Delta\text t}=\cfrac{\text Vx-\text V_{x_0}}{\text t-\text t_0}$ & $\text a_\text{med-y}=\cfrac{\Delta\text Vy}{\Delta\text t}=\cfrac{\text Vy-\text V_{y_0}}{\text t-\text t_0}$|
|Aceleración media vectorial|$\overrightarrow{\text a_{\text{med}}}=\text a_{\text{med-x}}\hat\imath+\text a_{\text{med-x}}\hat\jmath+\text a_{\text{med-x}}\hat k$|
|Aceleración instantánea|$\text a_x=\lim\limits_{\Delta\text t\to 0}\cfrac{\Delta\text Vx}{\Delta\text t}=\cfrac{\text{dv}_x}{\text{dt}}$ & $\text a_y=\lim\limits_{\Delta\text t\to 0}\cfrac{\Delta\text Vy}{\Delta\text t}=\cfrac{\text{dv}_y}{\text{dt}}$|
|Aceleración vectorial|$\vec{\text a}=\text a_x\hat\imath+\text a_y\hat\jmath+\text a_z\hat k$

### MRUA o MRUV
$\text V_x=\text V_{0_x}+\text a_x\text t$
$x=x_0+\text v_{0_x}\text t+\cfrac{1}{2}\text a_x\text t^2$
${\text V_x}^2={\text V_{0_x}}^2+2\text a_x(x-x_0)$
$x-x_0=\left(\cfrac{\text V_{0_x}+\text V_x}{2}\right)\text t$

### Caída libre y tiro vertival
$\text V_y=\text V_{0_y}+\text a_y\text t$
$y=y_0+\text v_{0_y}\text t+\cfrac{1}{2}\text a_y\text t^2$
${\text V_y}^2={\text V_{0_y}}^2+2\text a_y(y-y_0)$
$y-y_0=\left(\cfrac{\text V_{0_y}+\text V_y}{2}\right)\text t$

## Tiro parábolico
Se tiene que dividir el problema en MRU $(x)$ y Caída libre $(y)$

MRU $(x)$
$\text v_x=\text v_{0_x}$
$x=x_0+\text V_{0_x}\text t$

Caída libre $(y)$
$\text V_y=\text V_{0_y}+\text a_y\text t$
$y=y_0+\text v_{0_y}\text t+\cfrac{1}{2}\text a_y\text t^2$

|Variable|Caída|Tiro parábolico|
|-|-|-|
|Altura|$\text h=\cfrac{\text{gt}^2}{2}$|$\text h=\text v_0t+\cfrac{gt^2}{2}$|
|Altura máxima||$\text h=\cfrac{-{\text v_0}^2}{2g}$|
|Velocidad Inicial|0|$\text V_0=\sqrt{-2hg}$ o $\text v_0=-\text{gt}$|
|Velocidad Final|$\text v_{\text f}=\sqrt{2\text{hg}}$ o $\text v=\text{gt}$|0|
|Tiempo|$\text t=\sqrt{\cfrac{2\text h}{\text g}}$|$t=\cfrac{v_0\pm\sqrt{{\text v_0}^2+2gh}}{g}$
|Tiempo|$\text t=\cfrac{\text v_{\text f}}{\text s}$|$\text t=\cfrac{-\text v_0}{g}$

### Movimiento circular
|Circular uniforme|Circular no uniforme|
|-|-|
|$\text{a}_{\text{rad}}=\cfrac{\text v^2}{\text R}$|$\text{a}_{\text{rad}}=\cfrac{\text v^2}{\text R}$|
|$\text v=\cfrac{2\pi\text R}{\text T}$|-|
|$\text{a}_{\text{rad}}=\cfrac{4\pi^2\text R}{\text T^2}$|$\text{a}_{\tan}=\cfrac{\text d\mid \vec {\text v}\mid}{\text{dt}}$|


## Movimiento Relativo
$\vec{\text v}_{\text{P/A}}=\vec{\text v}_{\text{P/B}}+\vec{\text v}_{\text{B/A}}$

## Leyes de Newton

### Primera Ley (Ley de inercia)
Todo objeto continúa en su estado de reposo o de movimiento uniforme en línea recta, a menos que sea obligado a cambiar ese estado por fuerzas que actúen sobre él

### Segunda Ley (Causa-Efecto)
$\text{Aceleración}=\cfrac{\text {Fuerza neta}}{\text{Masa}}$
$\vec {\text a}=\cfrac{\sum \vec{\text{F}}}{\text m}$
$\vec{\text R}=\sum \vec{\text F}=(\text m)\vec{\text a}$

$\text R_x=\sum \vec{\text F_x}=(\text m)\vec{\text a}_x$
$\text R_y=\sum \vec{\text F_y}=(\text m)\vec{\text a}_y$
$\text R_z=\sum \vec{\text F_z}=(\text m)\vec{\text a}_z$

$\text w=\text{(m)g}$

### Tercera Ley (Ley de Las interacciones)
$\vec{\text F}_{\text{A sobre B}}=-\vec{\text F}_{\text{B sobre A}}$
$\text f_{\text k}=\micro_{\text k}\text n$
$\text f_{\text s}\leq\micro_{\text s}\text n$
---
## Ejercicios pre-examen
4.- Una "banda móvil" de un aeropuerto se mueve a 1.5 m/s y tiene 100.0 m de largo. Si una persona entra a un extremo y camina 1000 m/s relativa a la mada móvil, ¿cuánto tardaría en llegar al otro extremo si camina en la dirección opuesta en que se mueve la banda?

$\text V_{\text P/S}=1000 \text{ m/s}-1.5\text{ m/s}=998.5 \text{ m/s}$
$\text V=\sqrt{{\text V_x}^2+{\text V_y}^2}$
$\text V=\sqrt{({1000 \text{ m/s})^2}+0\text { m/s}}=1000\text { m/s}$
$\text v=\cfrac{\text d}{\text t}$; $\text t=\cfrac{\text d}{\text v}=\cfrac{100\text { m}}{1000\text{ m/s}}\approx0.1 \text { s}$

---
5.- Se lanza una bola directamente hacia arriba con una rapidez inicial de 30 m/s. ¿Hasta qué altura llega y cuánto tiempo estará en el aire (sin tener en cuenta la resistencia del aire)?

$\text v_x=\text a_x\text t$; $\cfrac{\text vx}{\text ax}=\text t=\cfrac{30\text { m/s}}{9.81\text {m/s}^2}\approx3.06\text { s}$
Tiempo máximo (hasta que cae al suelo): $\text t_{\text {max}}=2t\approx (3.06\text { s})\cdot 2=6.12\text{ s}$
$t_{\text{max}}\approx 6.12\text{ s}$

