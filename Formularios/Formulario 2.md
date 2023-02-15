#  #11_Operaciones_con_números_complejos_en_forma_algebraica
$$\begin{array}{l|l} Suma\ y\ resta & División & Mutiplicación\\z_1-z_2=(a+bi)+(c+di) & \frac{z_1}{z_2}=\frac{z_1}{z_2}*\frac{z_2}{z_2} & z_1*z_2=(a+bi)(c+di)\\ =(a+c)+(b+d)i & =\frac{a+bi}{c+di}* \frac{c-di}{c-di} & =ac+bci+adi+bdi^2\\ z_1-z_2=(a+bi)-(c+di) & =\frac{ac+(bc-ad)i-bdi^2}{c^2d^2i^2} & ac+(bc+ad)+bdi^2\\=(a-c)+(b-d)i \end{array}$$

# #13_Intérvalos_y_desigualdades
## Intérvalos
### Intérvalo abierto
$(a,\ b)={x\ |\ a<x<b,\ x\in \Bbb R}$
![[Pasted image 20220423222906.png]]
### Intérvalo cerrado
$[a,\ b]={x\ |\ a\leq x\leq b,\ x\in \Bbb R}$
![[Pasted image 20220423222948.png]]
### Intérvalo semiabierto
![[Pasted image 20220423223446.png]]
### Intérvalo infinito
![[Pasted image 20220423223402.png]]
## Desigualdades
Al multiplicar o dividir ambos lados de una desigualdad por un número real negativo, el signo de la desigualdad se invierte.

### Desigualdad de valor absoluto
![[Pasted image 20220423224447.png]]
# #14_Sistemas_de_2x2
## Suma y resta
donde las únicas incógnitas son $x$ y $y$ y son las que nos interesa encontrar.
$ax+by=c$
$dx+ey=f$

1. Se completa cualquiera de las incógnitas con signo contrario
$adx+bdy=cd$
$-adx-aey=-af$
$(adx-adx)+(bdy-aey)=cd-af$
$bdy+aey=cd-af$
$y(bd+ae)=cd-af$
$y=\frac{cd-af}{bd+ae}$

Sustituir el valor encontrado (en este caso de $y$) en cualquiera de de las ecuaciones para determinar la incógnita faltante.

Una vez encontrado ambos valores, sustituirlos en ambas ecuaciones para hacer la comprobación.

## Por sustitución
$ax+by=c$
$dx+ey=f$

1. Se despeja una de las variables de alguna de las ecuaciones.
2. Se sustituye el valor en la ecuación contraria y se despeja $y$.
3. Se sustituye en el primer despeje la variable $y$
4. Se hace la comprobación.

## Por igualación
1. Se despeja una variable de ambas ecuaciones.
2. Se iguala los valores de los despejes de dichas variables y se depeja la variable contraria.
3. Se sustituye la segunda variable en cualquiera de los despejes.
4. Comprobación.

# #16_Ecuaciones_cuadráticas
## Ecuación cuadrática especial
$x^2=d$, entonces $x=^+_-\sqrt d$

## Completar el cuadrado
$x^2+kx+(\frac{k}{2})^2=(x+\frac{k}{2})^2$
$x^2-kx+(\frac{k}{2})^2=(x-\frac{k}{2})^2$

# #17_Fórmula_géneral_para_ecuaciones_cuadráticas
## Fórmula general
Para $ax^2+bx+c=0$

$\frac{b^+_-\sqrt {b^2-4ac}}{2a}$
## Discriminante
$D=b^2-4ac$

1. $D|D>0\Rightarrow$ Dos soluciones reales
2. $D|D<0\Rightarrow$ Soluciones complejas
3. $D|D=0\Rightarrow$ Solución repetida, una única solución 

# #18_Ecuaciones_eXpeciales
## Valor absoluto
$|x|=y$
$x=^+_-y$
$x_1=y$
$x_2=-y$

## Por agrupación
$x^2+ax+bx+ba=0$
$x(x+a)+b(x+a)=0$
$(x+a)(x+b)=0$

2. Teorema del cero

$xy=0$
$x=0$ y/o $y=0$

$\begin{array}{l|l}x+a=0 & x+b=0\\ x_1=a & x_2=b\end{array}$ 

3. Comprobaciones.

## Por sustitución
$ax^4+bx^2+c=0$
$\begin{array}{c|c}x^2=u & x^4=u^2 \end{array}$
$au^2+bu+c=0$

2. Resolver la ecuación
3. Sustituir $u=x^2$
4. Comprobación