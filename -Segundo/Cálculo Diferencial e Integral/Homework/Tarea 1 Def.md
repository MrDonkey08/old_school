# Tarea 1

## Métodos Matemáticos II

### Alan Yahir Juarez Rubio 27/08/2022

***

1. Determine el dominio de las siguentes funciones
   1.  $f(t)=\sqrt{3-t}+\sqrt{2+t}$

       $3-t\geq0$ $-t\geq-3$ $t\leq3$

       $2+t\geq 0$ $t\geq -2$

       \==$D\_{(t)}= \[-2, 3]$==
   2.  $f(x)=\cfrac{ln(x+1)}{x^2+x-6}$

       Denominador $x^2+x-6\neq0$ $(x-2)(x+3)\neq0$ $x-2\neq0$ $x\_1\neq2\ \checkmark$

       Comprobación $x\_1\ \checkmark$ $(2)^2+(2)-6$ $4+2-6=0$

       $x+3\neq0$ $x\_2\neq-3\ \checkmark$

       Comprobación $x\_2\ \checkmark$ $(-3)^2+(-3)-6$ $9-3-6=0$

       Numerador $x+1>0$ $x\_3>-1$

       \==$D\_{(x)}= (-1, 2)\cup(2,\infty)$==

***

2.  Encuentre el dominio y rango de $f(x)=\sqrt{4-x^2}$ $4-x^2\geq0$ $-x^2\geq-4$ $x^2\leq4$ $|x|\leq\sqrt4$ $|x|\leq2$ $x\_1\leq2$ $x\_2\geq-2$

    \==$D\_{(x)}=\[-2, 2]$==

    Resultado más bajo $x\_1=2$ $\sqrt{4-(2)^2}$ | $\sqrt{4-4}=0$

    Resultado más bajo $x\_2=-2$ $\sqrt{4-(-2)^2}$ $\sqrt{4-4}=0$

    Resultado más alto $x\_3=0$ $\sqrt{4-(0)^2}=2$

    \==$R\_{(x)}=\[-2, 2]$==

***

3. Para las siguentes funciones encuentre $f+g$, $f/g$, $f\circ g$ y $g\circ f$. Así como sus dominios.
   3.  $f(x)=x^2-1$, $g(x)=2x-1$

       $(f+g)(x)=x^2-1+2x-1$ ==$(f+g)(x)=x^2+2x-2$==

       \==$D\_{(f+g)(x)}=\Bbb R$==

       $(f/g)(x)=\cfrac{x^2-1}{2x-1}$

       $2x-1\neq 0$ $2x\neq1$ $x\neq\cfrac{1}{2}$

       \==$D\_{(f/g)(x)}=(-\infty, \cfrac{1}{2})\cup(\cfrac{1}{2},\infty)$==

       $(f\circ g)(x)=(2x-1)^2-1$ $(f\circ g)(x)=(4x^2-4x+1)-1$ $(f\circ g)(x)=4x^2-4x$

       \==$D\_{(f\circ g)(x)}=\Bbb R$==

       $(g\circ f)(x)=2(x^2-1)-1$ $(g\circ f)(x)=2x^2-2-1$ ==$(g\circ f)(x)=2x^2-3$==

       \==$D\_{(g\circ f)(x)}=\Bbb R$==
   4.  $f(x)=1-3x$, $g(x)=\cos (x)$

       \==$(f+g)(x)=1-3x+\cos(x)$==

       \==$D\_{(f+g)(x)}=\Bbb R$==

       \==$(f/g)(x)=\cfrac{1-3x}{\cos(x)}$==

       La función inversa de $\cos$ es $\arccos$

       $\cos(x)\neq0$

       $\cos$ respecto al primer cuadrante: $\cos(x)\neq0$ $x\neq\arccos(0)$ $x\neq\cfrac{\pi}{2}$

       $\cos$ respecto al cuarto cuadrante $x\neq\cfrac{\pi}{2}$ $x\neq2\pi-\cfrac{\pi}{2}$ $x\neq\cfrac{2\pi\*2-\pi}{2}$ $x\neq\cfrac{3\pi}{2}$ Calcular el periodo de $\pi$ con la fórmula $\cfrac{2\pi}{|b|}$ remplazando la b por 1 $\cfrac{2\pi}{|1|}$ $\cfrac{2\pi}{1}$ $2\pi$ Entonces tenemos que $x\neq\cfrac{\pi}{2}+2\pi k,\cfrac{3\pi}{2}+2\pi k$

       $x\neq\cfrac{\pi}{2}+\pi k, k\in\Bbb Z$

       \==$D\_{(f/g)(x)}=\Bbb R- \begin{Bmatrix}\cfrac{\pi}{2}+\pi k\end{Bmatrix}, \ k\in\Bbb Z$==

       \==$(f\circ g)(x)=1-3\cos(x)$==

       \==$D\_{(f\circ g)(x)}=\Bbb R$==

       \==$(g\circ f)(x)=\cos(1-3x)$==

       \==$D\_{(g\circ f)(x)}=\Bbb R$==
   5.  $f(x)=x+\cfrac{1}{x}$ y $g(x)=\cfrac{x+1}{x+2}$

       $(f+g)(x)=x+\cfrac{1}{x}+\cfrac{x+1}{x+2}$

       $(f+g)(x)=\cfrac{x(x)(x+2)+1(x+2)+x(x+1)}{x(x+2)}$

       $(f+g)(x)=\cfrac{x^3+2x^2+x+2+x^2+x}{x(x+2)}$

       \==$(f+g)(x)=\cfrac{x^3+3x^2+2x+2}{x(x+2)}$==

       $x\_1\neq0$

       $x+2\neq0$ $x\_2\neq-2$

       \==$D\_{(f+g)(x)}=(-\infty,-2)\cup(-2,0)\cup(0,\infty)$==

       $(f/g)(x)=\cfrac{x+\cfrac{1}{x\}}{\cfrac{x+1}{x+2\}}$

       $(f/g)(x)=\cfrac{\cfrac{x^2+1}{x\}}{\cfrac{x+1}{x+2\}}$

       $(f/g)(x)=\cfrac{(x^2+1)(x+2)}{x(x+1)}$

       \==$(f/g)(x)=\cfrac{x^3+2x^2+x+2}{x(x+1)}$==

       $x\_1\neq0$

       $x+1\neq0$ $x\_2\neq-1$

       \==$D\_{(f/g)(x)}=(-\infty, -1)\cup(-1,0)\cup(0,\infty)$==

       $(f\circ g)(x)=(\cfrac{x+1}{x+2})+\cfrac{1}{(\cfrac{x+1}{x+2})}$

       $(f\circ g)(x)=\cfrac{x+1}{x+2}+\cfrac{x+2}{x+1}$

       $(f\circ g)(x=\cfrac{(x+1)^2+(x+2)^2}{(x+2)(x+1)}$

       $(f\circ g)(x)=\cfrac{(x^2+2x+1)+(x^2+4x+4)}{(x+2)(x+1)}$

       \==$(f\circ g)(x)=\cfrac{2x^2+6x+5}{(x+2)(x+1)}$==

       $x+2\neq0$ $x\_1\neq-2$

       $x+1\neq0$ $x\_2\neq-1$

       \==$D\_{(f\circ g)(x)}=(-\infty, -2)\cup(-2, -1)\cup(-1, \infty)$==

       $(g\circ f)(x)=\cfrac{(x+\cfrac{1}{x})+1}{(x+\cfrac{1}{x})+2}$

       $(g\circ f)(x)=\cfrac{\cfrac{x(x)+1+1(x)}{x\}}{\cfrac{x(x)+1+2(x)}{x\}}$

       $(g\circ f)(x)=\cfrac{\cfrac{x^2+x+1}{x\}}{\cfrac{x^2+2x+1}{x\}}$

       $(g\circ f)(x)=\cfrac{x(x^2+x+1)}{x(x^2+2x+1)}$

       \==$(g\circ f)(x)=\cfrac{x^3+x^2+x}{x^3+2x^2+x}$== ==$(g\circ f)(x)=\cfrac{x^2+x+1}{x^2+2x+1}$

       $x^3+2x^2+x\neq0$ $x^3+x^2+x^2+x\neq0$ $x^2(x+1)+x(x+1)\neq0$ $(x^2+x)(x+1)\neq0$ $x(x+1)(x+1)\neq0$ $x(x+1)^2\neq0$

       $x\_1=0$

       Comprobación $x\_1\neq0$ $(0)^3+2(0)^2+(0)=0$

       $(x+1)(x+1)\neq0$

       $x+1\neq0$ $x\_2\neq-1$

       Comprobación $x\_2\neq-1$ $(-1)^3+2(-1)^2+(-1)$ $-1+2-1=0$

       \==$D\_{(g\circ f)}=(-\infty,-1)\cup(-1,0)\cup(0,\infty)$==
