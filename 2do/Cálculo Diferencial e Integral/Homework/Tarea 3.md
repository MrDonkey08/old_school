# Tarea 3
## Metodos Matemáticos II  
### Alan Yahir Juarez Rubio 09/09/2022

---

1.- Utilice la siguiente grafica para calcular  
a. $\lim\limits_{x→12^+} f(x)$,
b. $\lim\limits_{x→12^-} f(x)$

![Tarea-3-1](Attachments/Tarea-3-1.png)
Figura 1: Grafica para pregunta 1 

---
a. ==$\lim\limits_{x→12^+} f(x)=300$==
b. ==$\lim\limits_{x→12^-} f(x)=150$==

---
Calcule los siguientes límites laterales. Use estos resultados para determinar si el límite existe.

---
2.- $\lim\limits_{x→0^+} 1/(1 + e^{1/x})$ y $\lim\limits_{x\to 0^-} 1/(1+e^{1/x}$)

$\lim\limits_{x→0^+}\cfrac{1}{1 + e^{1/x}}=\cfrac{\lim\limits_{x→0^+}1}{\lim\limits_{x→0^+}1+e^{1/x}}$

$\cfrac{\lim\limits_{x→0^+}1}{\lim\limits_{x→0^+}1+e^{1/x}}=\cfrac{1}{1+e^{1/0.0000001}}$

$\cfrac{\lim\limits_{x→0^+}1}{\lim\limits_{x→0^+}1+e^{1/x}}=\cfrac{1}{1+e^{\infty}}=0$

$\cfrac{\lim\limits_{x→0^+}1}{\lim\limits_{x→0^+}1+e^{1/x}}=\cfrac{1}{1+\infty}=0$

$\cfrac{\lim\limits_{x→0^+}1}{\lim\limits_{x→0^+}1+e^{1/x}}=\cfrac{1}{\infty}=0$

==$\lim\limits_{x→0^+}\cfrac{1}{1 + e^{1/x}}=0$==

---
$\lim\limits_{x→0^-}\cfrac{1}{1 + e^{1/x}}=\cfrac{\lim\limits_{x→0^-}1}{\lim\limits_{x→0^-}e^{1/x}}$

$\cfrac{\lim\limits_{x→0^-}1}{\lim\limits_{x→0^-}1+e^{1/x}}=\cfrac{1}{1+e^{1/-0.0000001}}$

$\cfrac{\lim\limits_{x→0^-}1}{\lim\limits_{x→0^-}1+e^{1/x}}=\cfrac{1}{1+e^{-\infty}}$

$\cfrac{\lim\limits_{x→0^-}1}{\lim\limits_{x→0^-}1+e^{1/x}}=\cfrac{1}{1+\cfrac{1}{e^\infty}}$

$\cfrac{\lim\limits_{x→0^-}1}{\lim\limits_{x→0^-}1+e^{1/x}}=\cfrac{1}{1+\cfrac{1}\infty}$

$\cfrac{\lim\limits_{x→0^-}1}{\lim\limits_{x→0^-}1+e^{1/x}}=\cfrac{1}{1+0}=1$

==$\lim\limits_{x→0^-}\cfrac{1}{1 + e^{1/x}}=1$==

==$\lim\limits_{x→0^+}\cfrac{1}{1 + e^{1/x}}=\text{No existe}$==

---
3.- $\lim\limits_{x\to -1^+} f(x)$ y $\lim\limits_{x\to -1^-}f(x)$, donde

$f(x)=\begin{cases}1+x & x<-1 \\ x^2 & -1\leq x<1 \\ 2-x &x\geq 1\end{cases}$

$\lim\limits_{x\to -1^-}x+1$
$\lim\limits_{x\to -1^-}(-1)+1=0$

$\lim\limits_{x\to -1^+}x^2$
$\lim\limits_{x\to -1^+}=(-1)^2=1$

==$\lim\limits_{x\to -1}f(x)=\text{No existe}$==

---
4.-$\lim\limits_{x\to 1^+} f(x) \text{ y} \lim\limits_{x\to 1^-} f(x)$, donde $f(x)$ es la misma funcion del inciso 3.  

$\lim\limits_{x\to 1^-}x^2$
$\lim\limits_{x\to 1^-}(1)^2=1$

$\lim\limits_{x\to 1^+}2-x$
$\lim\limits_{x\to 1^+}2-x=2-(1)=1$

==$\lim\limits_{x\to 1}f(x)=1$==

---
Calcule si existen los siguientes límites

---
5.- $\lim\limits_{x\to -2} \cfrac{x+2}{x^2+8}$

$\lim\limits_{x\to -2} \cfrac{x+2}{x^2+8}=\cfrac{(-2)+2}{(-2)^2+8}$
$\lim\limits_{x\to -2} \cfrac{x+2}{x^2+8}=\cfrac{0}{12}=0$

==$\lim\limits_{x\to -2} \cfrac{x+2}{x^2+8}=0$==

---
6.- $\lim\limits_{x\to -6}\cfrac{2x+12}{|x+6|}$

$\lim\limits_{x\to -6}\cfrac{2x+12}{|x+6|}=\cfrac{2(-6)+12}{|(-6)+6|}$

$\lim\limits_{x\to -6}\cfrac{2x+12}{|x+6|}=\cfrac{0}{|0|}=\text{indeterminado}$ 

$\lim\limits_{x\to -6^+}\cfrac{2x+12}{|x+6|}=\lim\limits_{x\to -6^+}\cfrac{2x+12}{x+6}$

$\lim\limits_{x\to -6^+}\cfrac{2x+12}{x+6}=\cfrac{2\cancel{(x+6)}}{\cancel{x+6}}=2$

$\lim\limits_{x\to -6^-}\cfrac{2x+12}{-(x+6)}=\cfrac{2\cancel{(x+6)}}{-\cancel{(x+6)}}=-2$

==$\lim\limits_{x\to -6}\cfrac{2x+12}{|x+6|}=\text{No existe}$==

---
7.- $\lim\limits_{x\to \infty}\cfrac{e^{3x}-e^{-3x}}{e^{3x}+e^{-3x}}$

$\lim\limits_{x\to \infty}\cfrac{e^{3x}-e^{-3x}}{e^{3x}+e^{-3x}}=\cfrac{e^{3(\infty)}-e^{-3(\infty)}}{e^{3(\infty)}+e^{-3(\infty)}}$


$\lim\limits_{x\to \infty}\cfrac{e^{3x}-e^{-3x}}{e^{3x}+e^{-3x}}=\cfrac{e^\infty-e^{-\infty}}{e^\infty+e^{-\infty}}$

$\lim\limits_{x\to \infty}\cfrac{e^{3x}-e^{-3x}}{e^{3x}+e^{-3x}}=\cfrac{\infty-\cfrac{1}{e^\infty}}{\infty+\cfrac{1}{e^\infty}}$

$\lim\limits_{x\to \infty}\cfrac{e^{3x}-e^{-3x}}{e^{3x}+e^{-3x}}=\cfrac{\infty-\cfrac{1}{\infty}}{\infty+\cfrac{1}{\infty}}$

$\lim\limits_{x\to \infty}\cfrac{e^{3x}-e^{-3x}}{e^{3x}+e^{-3x}}=\cfrac{\infty-0}{\infty+0}=1$

==$\lim\limits_{x\to \infty}\cfrac{e^{3x}-e^{-3x}}{e^{3x}+e^{-3x}}=1$==

---
8.- $\lim\limits_{x\to -4}\cfrac{\cfrac{1}{4}+\cfrac{1}{x}}{|4+x|}$

$\lim\limits_{x\to -4}\cfrac{\cfrac{1}{4}+\cfrac{1}{x}}{|4+x|}=\lim\limits_{x\to -4}\cfrac{\cfrac{1}{4}+\cfrac{1}{-4}}{|4+(-4)|}$

$\lim\limits_{x\to -4}\cfrac{\cfrac{1}{4}+\cfrac{1}{x}}{|4+x|}=\lim\limits_{x\to -4}\cfrac{\cfrac{1}{4}-\cfrac{1}{4}}{|0|}=\text{indeterminado}$


$\lim\limits_{x\to -4^+}\cfrac{\cfrac{1}{4}+\cfrac{1}{x}}{4+x}=\lim\limits_{x\to -4^+}\cfrac{4x(\cfrac{1}{4}+\cfrac{1}{x})}{4x(4+x)}$

$\lim\limits_{x\to -4^+}\cfrac{4x(\cfrac{1}{4}+\cfrac{1}{x})}{4x(4+x)}=\cfrac{\cfrac{4x}{4}+\cfrac{4x}{x}}{4x(4+x)}$

$\lim\limits_{x\to -4^+}\cfrac{4x(\cfrac{1}{4}+\cfrac{1}{x})}{4x(4+x)}=\cfrac{\cancel{x+4}}{4x\cancel{(4+x)}}=\cfrac{1}{4x}$

$\lim\limits_{x\to -4^+}\cfrac{4x(\cfrac{1}{4}+\cfrac{1}{x})}{4x(4+x)}=\cfrac{1}{4(-4)}=-\cfrac{1}{16}$


$\lim\limits_{x\to -4^-}\cfrac{\cfrac{1}{4}+\cfrac{1}{x}}{-(4+x)}=\lim\limits_{x\to -4^+}\cfrac{4x(\cfrac{1}{4}+\cfrac{1}{x})}{4x(-4-x)}$

$\lim\limits_{x\to -4^-}\cfrac{4x(\cfrac{1}{4}+\cfrac{1}{x})}{4x(-4-x)}=\cfrac{\cfrac{4x}{4}+\cfrac{4x}{x}}{4x(-4-x)}$

$\lim\limits_{x\to -4^+}\cfrac{4x(\cfrac{1}{4}+\cfrac{1}{x})}{4x(-4-x)}=\cfrac{\cancel{x+4}}{4x\cancel{(-4-x)}}=\cfrac{1}{4x}$

$\lim\limits_{x\to -4^+}\cfrac{4x(\cfrac{1}{4}+\cfrac{1}{x})}{4x(-4-x)}=\cfrac{-1}{4(-4)}=\cfrac{1}{16}$


==$\lim\limits_{x\to -4}\cfrac{\cfrac{1}{4}+\cfrac{1}{x}}{|4+x|}=\text{No existe}$==

