# Métodos de Biseción

Existen ecuaciones de tipo no lineal que son muy conocidas debido a que existen algunos _métodos analíticos_ que conducen a una fórmula para su solución. Sin embargo, muchas _ecuaciones no líneales_ no se pueden resolver directamente por _métodos analíticos_, por lo que se deben usar métodos basados  en aproximaciones numéricas.

**Métodos de bisección:** Requiere de dos valores iniciales para las variables $X_i$ y $X_d$, estos valores son elegidos de tal manera que el producto de las funciones evaluadas en esos puntos sea negativo, es decir, que la funciones en esos puntos tengan signo diferente. 

El método sugiere _dividir varias veces_ a la mitad los _subíntervalos_ $[X_i, X_d]$ y localizar en cada paso a la mitad que contanga a $x$, entonces dicho punto se denota como punto medio y se calcula:

$$X_m = \cfrac{X_i + X_d}{2}$$

Al evaluar la función en $X_m$ se pueden presentar los siguientes pasos:

1. Si $f(X_m)$ tiene el mismo signo que  que $f(X_i)$ entonces se remplazará $X_m$ en $X_i$ y se aplica nuevamente la fórmula.

2. Si $f(X_m)$ tiene el mismo signo que  que $f(X_d)$ entonces se remplazará $X_m$ en $X_d$ y se continua con la regla

3. Si $f(X_m) = 0$, $X_m$ es la raíz exacta de la función

El **método de Bisección** es el único que proporciona de antemano el número de iteraciones con la siguiente fórmula:

$$n \geq \cfrac{\ln[X_d - X_i] - \ln \varepsilon}{\ln 2}$$

> [!IMPORTANT] 
> 
> Se termina de iterar una vez realizada las $n$ iteraciones o hasta satisfacer
