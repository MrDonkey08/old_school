# Tarea 1
## Métodos Matemáticos II
### Alan Yahir Juarez Rubio 27/08/2022
---
1. Determine el dominio de las siguentes funciones

	1) $f(t)=\sqrt{3-t}+\sqrt{2+t}$

		$3-t\geq0$
		$-t\geq-3$
		$t\leq3$

		$2+t\geq 0$
		$t\geq -2$

		==$D_{(t)}= [-2, 3]$==

    2) $f(x)=\cfrac{ln(x+1)}{x^2+x-6}$

		Denominador
		$x^2+x-6\neq0$
		$(x-2)(x+3)\neq0$
		$x-2\neq0$
		$x_1\neq2\ \checkmark$

		Comprobación $x_1\ \checkmark$
		$(2)^2+(2)-6$
		$4+2-6=0$

		$x+3\neq0$
		$x_2\neq-3\ \checkmark$

		Comprobación $x_2\ \checkmark$
		$(-3)^2+(-3)-6$
		$9-3-6=0$

		Numerador
		$x+1>0$
		$x_3>-1$

		==$D_{(x)}= (-1, 2)\cup(2,\infty)$==
---
2. Encuentre el dominio y rango de $f(x)=\sqrt{4-x^2}$
	$4-x^2\geq0$
	$-x^2\geq-4$
	$x^2\leq4$
	$|x|\leq\sqrt4$
	$|x|\leq2$
	$x_1\leq2$
	$x_2\geq-2$

	==$D_{(x)}=[-2, 2]$==

	Resultado más bajo $x_1=2$
	$\sqrt{4-(2)^2}$ | 
	$\sqrt{4-4}=0$

	Resultado más bajo $x_2=-2$
	$\sqrt{4-(-2)^2}$
	$\sqrt{4-4}=0$

	Resultado más alto $x_3=0$
	$\sqrt{4-(0)^2}=2$

	==$R_{(x)}=[0, 2]$==

---
3. Para las siguentes funciones encuentre $f+g$, $f/g$, $f\circ g$ y $g\circ f$. Así como sus dominios.

	3) $f(x)=x^2-1$, $g(x)=2x-1$

		$f+g=x^2-1+2x-1$
       ==$g=x^2+2x-2$==

        ==$D_{(f+g)}=\Bbb R$==

		==$f/g=\cfrac{x^2-1}{2x-1}$==

        $2x-1\neq 0$
        $2x\neq1$
        $x\neq\cfrac{1}{2}$

        ==$D_{(f/g)}=(-\infty, \cfrac{1}{2})\cup(\cfrac{1}{2},\infty)$==

		$f\circ g=(2x-1)^2-1$ 
        $f\circ g=(4x^2-4x+1)-1$
        $f\circ g=4x^2-4x$

        ==$D_{(f\circ g)}=\Bbb R$==
        
		$g\circ f=2(x^2-1)-1$
        $g\circ f=2x^2-2-1$
        ==$g\circ f=2x^2-3$==

        ==$D_{(g\circ f)}=\Bbb R$==

	4) $f(x)=1-3x$, $g(x)=\cos (x)$

		==$f+g=1-3x+\cos(x)$==

         ==$D_{(f+g)}=\Bbb R$==

		==$f/g=\cfrac{1-3x}{\cos(x)}$==

        ==$D_{(f/g)}=\Bbb R$==

		==$f\circ g=1-3\cos(x)$==

        ==$D_{(f\circ g)}=\Bbb R$==

		==$g\circ f=\cos(1-3x)$==

        ==$D_{(g\circ f)}=\Bbb R$==

	5) $f(x)=x+\cfrac{1}{x}$ y $g(x)=\cfrac{x+1}{x+2}$

		==$f+g=x+\cfrac{1}{x}+\cfrac{x+1}{x+2}$==

		$x_1\neq0$
		
		$x+2\neq0$
		$x_2\neq-2$

		==$D_{(f+g)}=(-\infty, -2)\cup(-2,0)\cup(0, \infty)$==

		$\begin{array}{r|r}\begin{array}{l|l}f/g=\cfrac{x+\cfrac{1}{x}}{\cfrac{x+1}{x+2}}\\\\ x_1\neq0\\ x+1\neq0\\\\ x_2\neq-1 \\ x+2\neq0\\\\ x_3\neq-2\\\\ D_{(f/g)}=(-\infty,-2)\cup(-2, -1)\cup(-1,0)\cup(0,\infty)\end{array} & \begin{array}{l|l}f/g=\cfrac{x+\cfrac{1}{x}}{\cfrac{x+1}{x+2}}\\\\ f/g=\cfrac{\cfrac{x^2+1}{x}}{\cfrac{x+1}{x+2}}\\\\ f/g=\cfrac{(x^2+1)(x+2)}{x(x+1)}\\\\ D=(-\infty, -1)(-1,0)\cup(0,\infty)\end{array} \end{array}$

		==$f\circ g=(\cfrac{x+1}{x+2})+\cfrac{1}{(\cfrac{x+1}{x+2})}$==

		$x+2\neq0$
		$x_1\neq-2$
		
		$x+1\neq0$
		$x_2\neq-1$

		==$D_{(f\circ g)}=(-\infty, -2)\cup(-2, -1)\cup(-1, \infty)$==

		==$g\circ f=\cfrac{(x+\cfrac{1}{x})+1}{(x+\cfrac{1}{x})+2}$==

		$x_1\neq0$

		$x+\cfrac{1}{x}+2\neq0$
		$\cfrac{1}{x}\neq-x-2$
		$1\neq-x^2-2x$
		$x^2+2x+1\neq0$
		$(x+1)(x+1)\neq0$
		$(x+1)^2\neq0$
		$|x+1|\neq\sqrt0$
		$x+1\neq^+_-\sqrt0$

		$x_2\neq-1+0$
		$x_2\neq-1$
		
		$x_3\neq-1-0$
		$x_3\neq-1$
		
		==$D_{(g\circ f)}=(-\infty,-1)\cup(-1,0)\cup(0,\infty)$==
		


