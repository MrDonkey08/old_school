# Mecánica

## Participación por investigación (Opcional)

## Semana 10

### Entrega: En clase

### Nombre: Alan Yahir Juarez Rubio

***

**Instrucciones**. – Este es un ejercicio para mejorar su habilidad de lecto comprensión y prepararse mejor para la clase. Investigaran los temas que se muestran a continuación: • Movimiento de un Cuerpo Rígido ▪ Rotación con Rapidez y Aceleración Angular Constante. ▪ Energía Cinética Rotacional y Momento de Inercia. ▪ Momento angular

## Cuerpo rígido

**Cuerpo rídigo:** es un objeto material cuyas partículas permanecen siempre en las mismas posiciones relativas. Por lo tanto es un objeto que no se deforma.

En realidad las partículas de cualquier cuerpo sometido a fuerzas externas tienden a vibrar o a desplazarse, por lo que el objeto siempre se deforma en cierta medida, pero estos efectos suelen ser pequeños.

### Movimiento de un cuerpo rígido

Al igual que los objetos considerados como partículas, los cuerpos rígidos pueden trasladarse, rotar y tener un movimiento más general, combinando traslación y rotación.

Estos movimientos de traslación y rotación pueden ser:

* Independientes, como en el caso de los planetas, que tienen un movimiento de rotación alrededor de su eje (considerado fijo) y otro de traslación alrededor del Sol, pero las velocidades de cada uno no están relacionadas.
* Roto-traslación, si la velocidad angular y la velocidad de traslación del centro de masa guardan relación. En este caso el eje de rotación es móvil, como en el caso del cilindro que baja rodando sin resbalar por una cuesta inclinada.

#### Fuerzas y torque o momento de torsión

No todas las fuerzas aplicadas consiguen hacer que el objeto rote. Para ello hace falta el torque o momento de torsión, que dice cuán eficaz es la acción rotacional de una fuerza. Se define como el producto vectorial entre el vector de posición **r** respecto a cierto punto O y la fuerza **F** en cuestión. Se denota mediante la letra griega **τ** (en letra negrita, pues también es un vector):

Se requiere de fuerzas para mover un cuerpo. Si el centro de masas del sólido rígido se traslada, la ecuación de movimiento, de acuerdo a la segunda ley de Newton, es:

$$τ = r \times F$$

***

## Rotación con Rapidez y Aceleración Angular Constante.

La **velocidad angular** es una medida de la velocidad de rotación y se define como el ángulo que gira el vector de posición del objeto que rota, por unidad de tiempo.&#x20;

> \[!note]+
>
> Dos objetos que completan una vuelta o revolución al mismo tiempo, tienen la misma **velocidad angular**, pero no necesariamente la misma **velocidad lineal**; tienen la misma velocidad lineal si y solo tienen la misma velocidad angular y se encuentran a la misma distancia del centro.

### Aceleración angular constante

La **velocidad angular** de un objeto en rotación es la velocidad a la que gira. Si la velocidad angular está cambiando, entonces el objeto también tiene una **aceleración angular** , que se define como la tasa de cambio de la velocidad angular.

Para los objetos que giran con una **aceleración angular constante**, hay algunas ecuaciones, llamadas ecuaciones cinemáticas para el movimiento angular, que puede usar para determinar la posición angular o la velocidad angular del objeto en cualquier momento.

$$w_f = w_i+at$$ $$\theta_f = \theta_i + w_i+\cfrac{1}{2}at^2$$ $$w_f^2 = w_i^2+2a \left(\theta_f-\theta_i \right)$$

Donde $\theta =\text{posición angular}$, $w =\text{velocidad angular}$ y $a = \text{aceleración angular}$

***

## Energía Cinética Rotacional y Momento de Inercia.

La **energía cinética de rotación** o **energía rotacional** es la energía cinética de un cuerpo rígido, que gira en torno a un eje fijo. Esta energía depende del momento de inercia y de la velocidad angular del cuerpo. Mientras más alejada esté la masa del cuerpo respecto al eje de rotación, se necesitará más energía para que el cuerpo adquiera una velocidad angular.

Un cuerpo que rota en torno al eje x con velocidad angular $\omega$posee la energía rotacional:

$$
E_\mathrm{rot} = \frac{1}{2} I_x \omega^2
$$

Donde:

* $I\_x$: **Momento de inercia** del cuerpo en torno al eje x.
* $\omega$: **Velocidad angular**

En general, esto se puede expresar como:

$$
E_\mathrm{rot}= \frac{1}{2} \vec{\omega}^T I \vec{\omega} = \frac{1}{2} \sum_{\alpha, \beta = 1}^{3} I_{\alpha\beta} \omega_\alpha \omega_\beta
$$

Donde:

* $I$: **Tensor de inercia**
* $\vec{\omega}$: **Velocidad angular**

Para calcular la energía de un cuerpo que rota en torno a un eje arbitrario (**vector unitario** $\hat{n}$), la velocidad angular se expresará por sus componentes vectoriales:

$$
\vec{\omega} = \omega \hat{n} = \omega \cdot \begin{pmatrix}n_1\\n_2\\n_3\end{pmatrix}
$$

donde ; $\left| {\hat{n\}} \right| = 1$

en el cual los componentes de n que representa los componentes de la dirección del eje de x,y y z. La energía de rotación es ahora:

$$$
E_\mathrm{rot} = \frac{1}{2} \sum_{\alpha, \beta = 1}^{3} I_{\alpha\beta} n_{\alpha} n_{\beta} \omega^2 = \frac{1}{2} \theta_n \omega^2$$ Aquí es $\theta_n$el momento de inercia respecto a un eje arbitrario $\hat{n}$ $$\theta_n = \sum_{\alpha, \beta = 1}^{3} I_{\alpha\beta} n_{\alpha} n_{\beta}$$ ### Momento de inercia El **momento de inercia** de un cuerpo rígido respecto a cierto eje de rotación, representa su resistencia a cambiar su velocidad angular alrededor de dicho eje. Es proporcional a la masa y también a la ubicación del eje de giro, ya que el cuerpo, según su geometría, puede rotar más fácilmente en torno a ciertos ejes que en otros. Cabe señalar que, en general, el momento angular y la velocidad angular no son paralelas entre sí (excepto en la rotación alrededor de un eje principal de inercia). ![Sem-10-1](-Segundo/Mecánica/Investigaciones/Attachments/Sem-10-1.png) ## Momento angular La energía rotacional se puede expresar a través del **Momentum angular|momento angular**: $E_\mathrm{rot} = \frac{1}{2} \vec{\omega} \cdot \vec{L} = \frac{\vec{L}^2}{2I}$ donde $\vec{L} = I \cdot \vec{\omega}$ Cabe señalar que, en general, el momento angular y la velocidad angular no son paralelas entre sí (excepto en la rotación alrededor de un **eje principal de inercia**). Este es el momento de inercia de una distribución de masa discreta. Cuando la distribución es continua, la sumatoria se reemplaza con una integral y _Δm_ se convierte en un diferencial de masa _dm_. La integral se efectúa sobre todo el objeto: $$I = \int M \left( r^2 \right)dm$$ --- ## Referencias - https://es.wikipedia.org/wiki/Energ%C3%ADa_cin%C3%A9tica_rotacional
$$$
