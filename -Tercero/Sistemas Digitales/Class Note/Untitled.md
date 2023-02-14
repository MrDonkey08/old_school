Medio sumador (half Adder, H.A)

`A` y `B` son los sumando
`S` se la salida suma
`c` es la salida acarreo de salida

---
|  -  | Entradas |  -  |  Salidas  |  -  |
| --- | -------- |  -  | - ------- | --- |
|  m  |    A     |  B  |     C     |  S  |
|  0  |    0     |  0  |     0     |  0  |
|  1  |    0     |  1  |     0     |  1  |
|  2  |    1     |  0  |     0     |  1  |
|  3  |    1     |  1  |     1     |  0  |

---
$m = 2^n$
$n=2$ variables $A$ y $B$

$m = 2^2 = A$ combinaciones

---
Resolver con mintérminos

Acarreo de calida

$c= m_3$

$c = AB$

Suma

$$\begin{array}{l}
s = m_1 + m_2 = \sum m (1,2)
s = \overline{A}B + A\overline{B} = A\oplus B
\end{array}$$

> or exclusiva (xor) 7486 uno impar

|  A  |  B  | A $\oplus$ B |                     |
|:---:|:---:|:------------:|:-------------------:|
|  0  |  0  |      0       |                     |
|  0  |  1  |      1       | $\to \overline{A}B$ |
|  1  |  0  |      1       | $\to A\overline{B}$ |
|  1  |  1  |      0       |                     |

> $A\oplus B = \overline{A}B + A\overline{B}$

---
## Sumador completo (Full Adder, F.A)

---


---
| m   | A   | B   | C   | K   | S   |
| --- | --- | --- | --- | --- | --- |
| 0   | 0   | 0   | 0   | 0   | 0   |
| 1   | 0   | 0   | 1   | 0   | 1   |
| 2   | 0   | 1   | 0   | 0   | 1   |
| 3   | 0   | 1   | 1   | 1   | 0   |
| 4   | 1   | 0   | 0   | 0   | 1   |
| 5    |     |     |     |     |     |


---
