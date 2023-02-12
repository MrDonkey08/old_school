# Tarea 2
## Métodos Matemáticos II
### Alan Yahir Juarez Rubio 03/09/2022
___
(1). (15 pts) Encuentre una fórmula para la función inversa de:

$f(x)=1+\sqrt{2+3x}$,  $g(x)=\cfrac{4x-1}{2x+3}$
____
$f(x)=1+\sqrt{2+3x}$ <!-- Se checa primero si es inyectiva.-->

$\cancel{1+}\sqrt{2+3x_1}=\cancel{1}+\sqrt{2+3x_2}$
$(\sqrt{2+3x_1})^2=(\sqrt{2+3x_2})^2$
$\cancel{2+3}x_1=\cancel{2+3}x_2$
$x_1=x_2\ \checkmark$ 
___
$f(x)=1+\sqrt{2+3x}$

$y=1+\sqrt{2+3x}$
$y-1=\sqrt{2+3x}$
$(y-1)^2=(\sqrt[\cancel2]{2+3x})\cancel{^2}$
$y^2-2y+1=2+3x$
$y^2-2y-1=3x$
$\cfrac{y^2-2y-1}{3}=x$
$x=\cfrac{y^2-2y-1}{3}$

==$f^{-1}(x)=\cfrac{x^2-2x-1}{3}$==
___
$g(x)=\cfrac{4x-1}{2x+3}$

$\cfrac{4x_1-1}{2x_1+3}=\cfrac{4x_2-1}{2x_2+3}$
$(4x_1-1)(2x_2+3)=(4x_2-1)(2x_1+3)$
$\cancel{8x_1x_2}+12x_1-2x_2\cancel{-3}=\cancel{8x_2x_1}+12x_2-2x_1\cancel{-3}$
$12x_1-2x_2=12x_2-2x_1$
$12x_1+2x_1=12x_2+2x_2$
$\cancel{14}x_1=\cancel{14}x_2$
$x_1=x_2\ \checkmark$
___
$g(x)=\cfrac{4x-1}{2x+3}$

$y=\cfrac{4x-1}{2x+3}$
$y(2x+3)=4x-1$
$2xy+3y=4x-1$
$2xy-4x=-3y-1$
$x(2y-4)=-3y-1$
$x=\cfrac{-3y-1}{2y-4}$

==$g^{-1}(x)=\cfrac{-3x-1}{2x-4}$==
___
Adicionalmente encuentre su dominio y rango

$f(x)=1+\sqrt{2+3x}$

$2+3x\geq0$
$3x\geq-2$
$x\geq-\cfrac{2}{3}$
$x\geq-1.5$

==$D_{f(x)}=[-1.5,\infty)$==
==$R_{f(x)}=[1,\infty)$==
___
$f^{-1}(x)=\cfrac{x^2-2x-1}{3}$ <!-- Se usa la fórmula V_x=$\cfrac{-b}{2a}$ y se sustituye el valor encontrado en la función para encontrar $V_y$-->

==$D_{f^{-1}(x)}=\Bbb R$==

$V_x=\cfrac{\cfrac{-(-2)}{\cancel{3}}}{\cfrac{2(1)}{\cancel{3}}}=\cfrac{2}{2}=1$

$V_y=\cfrac{(1)^2-2(1)-1}{3}=-\cfrac{2}{3}=-1.5$
$V=(1,-1.5)$

==$R_{f^{-1}(x)}=[-1.5,\infty)$==
___
$g(x)=\cfrac{4x-1}{2x+3}$ <!-- Si la variable (x en este caso) tiene el mismo exponente, el rango se puede encontrar dividiendo la variable de arriba por la de abajo -->

$2x+3\neq0$
$2x\neq-3$
$x\neq-\cfrac{3}{2}$
$x\neq-1.5$

==$D_{g(x)}=(-\infty, -1.5)\cup(-1.5, \infty)$==

$\cfrac{4x}{2x}=2$

==$R_{g(x)}=(-\infty, 2)\cup(2,\infty)$==
___
$g^{-1}(x)=\cfrac{-3x-1}{2x-4}$

$2x-4\neq0$
$2x\neq4$
$2x\neq\cfrac{4}{2}$
$x\neq2$

==$D_{g^{-1}(x)}=(-\infty, 2)\cup(2, \infty)$==

$\cfrac{-3x}{2x}=-1.5$

==$R_{g^{-1}(x)}=(-\infty,-1.5)\cup(-1.5,\infty)$==
___
(2). (10 pts) Observe las siguientes tablas que incluyen los valores de las funciones $f$ y $g$ (no son las mismas del inciso anterior).

|$x$|$1$|$2$|$3$|$4$|$5$|
|:-:|:-:|:-:|:-:|:-:|:-:|
|$f(x$)|$1$|$1.5$|$1.8$|$2.2$|$1.2$|
|$g(x)$|$2$|$3$|$7$|$-2$|$3$|

Determine si $f$ y $g$ tienen función inversa

Para que una función tenga función inversa, debe ser inyectiva, es decir, que dos preimágenes no tengan un misma imagen, o, en otras palabras, que al ser evaluada en sus valores, que en dos valores de $x$ no tengan el mismo valor de $y$.

La **función $f(x)$**, por lo que vemos en la tabla, no se repite ningún valor; sin embargo, se puede ver que desde que se evalúa en 1 hasta que se evalúa en 4 va aumentando, pero, al ser evaluado en 5, el valor de $y$ disminuye, lo que significa que ya hay valores en $x$ que que comparten un mismo valor en $y$, es decir, **es sobreinyectiva** y, por lo tanto, **no tiene función inversa**. Por otra parte, la **función $g(x)$**, se repite el valor 3 cuando se evalúa en 2 y cuando se evalúa en 5, es decir, es **sobreyectiva** y, por lo tanto, **no tiene función inversa**.
___
(3) Cálcule los siguientes límites

(a) (5pts)

$\lim\limits_{t\to 2}(\cfrac{t^2-2}{t^3-3t+5})^2$

$\lim\limits_{t\to 2}(\cfrac{t^2-2}{t^3-3t+5})^2=\cfrac{(2)^2-2}{(2^3)-3(2)+5})^2$

==$\lim\limits_{t\to 2}(\cfrac{t^2-2}{t^3-3t+5})^2=(\cfrac{2}{7})^2=\cfrac{4}{49}\approx 0.08163$==
___
(b) (5 pts)

$\lim\limits_{u\to -2}\sqrt{u^4+3u+6}$

$\lim\limits_{u\to -2}\sqrt{u^4+3u+6}=\sqrt{(-2)^4+3(-2)+6}$
$\lim\limits_{u\to -2}\sqrt{u^4+3u+6}=\sqrt{16-6+6}$

==$\lim\limits_{u\to -2}\sqrt{u^4+3u+6}=4$==
___
(c) (5 pts)

$\lim\limits_{x\to -1}(x^4-3x)(x^2+5x+3)$

$\lim\limits_{x\to -1}(x^4-3x)(x^2+5x+3)=[(-1)^4-3(-1)][(-1)^2+5(-1)+3]$
$\lim\limits_{x\to -1}(x^4-3x)(x^2+5x+3)=[1+3][1-5+3]$
$\lim\limits_{x\to -1}(x^4-3x)(x^2+5x+3)=[4][-1]$

==$\lim\limits_{x\to -1}(x^4-3x)(x^2+5x+3)=-4$==
___
(d) (5 pts)

$\lim\limits_{x\to 2}\sqrt{\cfrac{2x^2+1}{3x-2}}$

$\lim\limits_{x\to 2}\sqrt{\cfrac{2x^2+1}{3x-2}}=\sqrt{\cfrac{2(2)^2+1}{3(2)-2}}$
$\lim\limits_{x\to 2}\sqrt{\cfrac{2x^2+1}{3x-2}}=\sqrt{\cfrac{9}{4}}$
$\lim\limits_{x\to 2}\sqrt{\cfrac{2x^2+1}{3x-2}}=\cfrac{\sqrt9}{\sqrt4}$
$\lim\limits_{x\to 2}\sqrt{\cfrac{2x^2+1}{3x-2}}=\cfrac{3}{2}$

==$\lim\limits_{x\to 2}\sqrt{\cfrac{2x^2+1}{3x-2}}=1.5$==
___
(e) (15 pts)
$\lim\limits_{x\to 5}\cfrac{x^2-5x+6}{x-5}$

$\lim\limits_{x\to 5}\cfrac{x^2-5x+6}{x-5}=\cfrac{(5)^2-5(5)+6}{(5)-5}$
$\lim\limits_{x\to 5}\cfrac{x^2-5x+6}{x-5}=\cfrac{25-25+6}{0}$
$\lim\limits_{x\to 5}\cfrac{x^2-5x+6}{x-5}=\text{indeterminado}$

$\lim\limits_{x\to 5}\cfrac{x^2-5x+6}{x-5}=\lim\limits_{x\to 5}\cfrac{x(x-5)+6}{x-5}$
$\lim\limits_{x\to 5}\cfrac{x^2-5x+6}{x-5}=\lim\limits_{x\to 5}\cfrac{x\cancel{(x-5)}+6}{\cancel{x-5}}$
$\lim\limits_{x\to 5}\cfrac{x^2-5x+6}{x-5}=\lim_{x\to 5}(x+\cfrac{6}{x-5})$
$\lim\limits_{x\to 5}\cfrac{x^2-5x+6}{x-5}=\text{indeterminado. No se puede factorizar}$

|$x$|$f(x)$|
|:-:|:-:|
|$4.9$|$-55.1$|
|$4.99$|$-595.01$|
|$4.999$|$-5995.001$|
|$4.9999$|$-59995.0001$|
|$5.0001$|$60005.0001$|
|$5.001$|$6005.001$|
|$5.01$|$605.01$|
|$5.1$|$65.01$|

$\lim\limits_{x\to 5^+}\cfrac{x^2-5x+6}{x-5}=\infty$
$\lim\limits_{x\to 5^-}\cfrac{x^2-5x+6}{x-5}=-\infty$

$\lim\limits_{x\to 5}\cfrac{x^2-5x+6}{x-5}=\text{No existe}$
___
(f) (15 pts)

$\lim\limits_{t\to 0}\cfrac{1}{t}-\cfrac{1}{t^ 2+t}$

$\lim\limits_{t\to\ 0}(\cfrac{1}{0}-\cfrac{1}{0^ 2+0})=\text{indeterminado}$

$\lim\limits_{t\to 0}\cfrac{1}{t}-\cfrac{1}{t^2+t}=\lim\limits_{t\to 0}\cfrac{t^2+t-t}{t(t^2+t)}$
$\lim\limits_{t\to 0}\cfrac{1}{t}-\cfrac{1}{t^2+t}=\lim\limits_{t\to 0}\cfrac{\cancel{t^2}}{\cancel{t^2}(t+1)}$
$\lim\limits_{t\to 0}\cfrac{1}{t}-\cfrac{1}{t^2+t}=\lim\limits_{t\to 0}\cfrac{1}{t+1}$

==$\lim\limits_{t\to 0}\cfrac{1}{t}-\cfrac{1}{t^2+t}=\lim\limits_{t\to 0}\cfrac{1}{0+1}=1$==
___
(g) (10 pts)

$\lim\limits_{x\to\infty}\cfrac{3x-2}{2x+1}$

$\lim\limits_{x\to\infty}\cfrac{3x-2}{2x+1}=\lim\limits_{x\to\infty}\cfrac{3(\infty)-2}{2(\infty)+1}=\text{ No concluyente}$

$\lim\limits_{x\to\infty}\cfrac{3x-2}{2x+1}=\lim\limits_{x\to\infty}\cfrac{\cfrac{3x-2}{x}}{\cfrac{2x+1}{x}}$
$\lim\limits_{x\to\infty}\cfrac{3x-2}{2x+1}=\lim\limits_{x\to\infty}\cfrac{3-\cfrac{2}{x}}{2+\cfrac{1}{x}}$
$\lim\limits_{x\to\infty}\cfrac{3x-2}{2x+1}=\lim\limits_{x\to\infty}\cfrac{3-\cfrac{2}{\infty}}{2+\cfrac{1}{\infty}}$

==$\lim\limits_{x\to\infty}\cfrac{3x-2}{2x+1}=\lim\limits_{x\to\infty}\cfrac{3-0}{2+0}=\cfrac{3}{2}$==
___
(h) (5 pts)

$\lim\limits_{x\to\infty}\sqrt{x^2+1}-x$

$\lim\limits_{x\to\infty}\sqrt{x^2+1}-x=\lim\limits_{x\to\infty}(\sqrt{x^2+1}-x)(\cfrac{\sqrt{x^2+1}+x}{\sqrt{x^2+1}-x})$

$\lim\limits_{x\to\infty}\sqrt{x^2+1}-x=\lim\limits_{x\to\infty}\cfrac{(\sqrt{x^2+1}-x)(\sqrt{x^2+1}+x)}{\sqrt{x^2+1}-x}$

$\lim\limits_{x\to\infty}\sqrt{x^2+1}-x=\lim\limits_{x\to\infty}\cfrac{x^2+1-x^2}{\sqrt{x^2+1}-x}$

$\lim\limits_{x\to\infty}\sqrt{x^2+1}-x=\cfrac{\lim\limits_{x\to \infty}(1)}{\lim\limits_{x\to \infty}(\sqrt{x^2+1}+x)}$


==$\lim\limits_{x\to\infty}\sqrt{x^2+1}-x=\cfrac{1}{\infty}=0$==
___
(4) (5 pts) Explique por qué la siguiente igualdad es incorrecta.

$\cfrac{(x+3)(x-2)}{(x-2)}=x+3$, 

pero 

$\lim\limits_{x\to a}\cfrac{(x+3)(x-2)}{(x-2)}=\lim\limits_{x\to a}x+3$,  $a\in\Bbb R$ 

es correcta

Porque la función, al ser evaluada en 2, al final quedaría como $\cfrac{0}{0}$, y haría que se convierte en indeterminada. No existe la división entre 0. Es decir, no puede cancelar para dejar a $x+3$ solo, esto serviría para todos los valores menos 2, por eso no es del todo equivalente. En cambio, en el límite, si divides $\cfrac{0}{0}$, no importa para calcularlo, debido a que el límite no representa el valor evaluado en la función, sino al valor al que tiende al ser evaluado que, por lo general, coincide el valor de la función con el del límite, a menos que no exista valor para algun valor evaluado.
___

