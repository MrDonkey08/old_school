## Transformada de Laplace

La transformada de Laplace de una función $f = f\left(t \right)$ se defiine como 

$$f\left(s \right) = \mathcal{L}\{f\left(t \right)\}\left(s\right) = \int_{0}^{\infty} f\left(t \right)e^{-st}\,dt$$

### Linealidad

Si $f$ y $g$ son funciones, y $k$ es una constante, entonces

$$\mathcal {L}\{f\left(t \right) \pm g\left(t \right)\} = \mathcal {L}\{f\left(t \right)\} \pm \mathcal {L}\{g\}$$
$$\mathcal {L}\{kf\left(t \right)\} = k\mathcal {L}\{f\left(t \right)\}$$

### Linealidad de la transformada inversa

Si $f$ y $g$ son funciones, y $k$ es una constante, entonces

$$\mathcal {L}^{-1}\{f\left(s \right) \pm g\left(s\right)\} = \mathcal {L}^{-1}\{f\left(s \right)\} \pm \mathcal {L}^{-1}\{g\}$$
$$\mathcal {L}^{-1}\{kf\left(s \right)\} = k\mathcal {L}^{-1}\{f\left(s \right)\}$$