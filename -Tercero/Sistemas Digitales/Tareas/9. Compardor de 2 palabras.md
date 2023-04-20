Comparador de 2 palabras de 2 bits

AB < CD 
AB = CD
AB > CD

m = 2⁴ = |16 combinaciones


---

## Expresión Booleana

(~A*~B*D)+(~B*C*D)+(~A*C)

---

## Mapas de Karnout

![](Attachments/Pasted%20image%2020230419085131.png)
Figura m

![](Attachments/Pasted%20image%2020230419085139.png)
Figura i

![](Attachments/Pasted%20image%2020230419085147.png)
Figura MCombinational Circuit

Combinational Circuit's Name : Comparador



Input Variables : 

     A = A
     B = B
     C = C
     D = D

Output Variables : 

     F|1 = m
     F2 = i
     F3 = M


## Tabla de verdad

| A   | B   | C   | D   | m | i  | M  |
| --- | --- | --- | --- | --- | --- | --- |
| 0   | 0   | 0   | 0   | 0   | 1   | 0   |
| 0   | 0   | 0   | 1   | 1   | 0   | 0   |
| 0   | 0   | 1   | 0   | 1   | 0   | 0   |
| 0   | 0   | 1   | 1   | 1   | 0   | 0   |
| 0   | 1   | 0   | 0   | 0   | 0   | 1   |
| 0   | 1   | 0   | 1   | 0   | 1   | 0   |
| 0   | 1   | 1   | 0   | 1   | 0   | 0   |
| 0   | 1   | 1   | 1   | 1   | 0   | 0   |
| 1   | 0   | 0   | 0   | 0   | 0   | 1   |
| 1   | 0   | 0   | 1   | 0   | 0   | 1   |
| 1   | 0   | 1   | 0   | 0   | 1   | 0   |
| 1   | 0   | 1   | 1   | 1   | 0   | 0   |
| 1   | 1   | 0   | 0   | 0   | 0   | 1   |
| 1   | 1   | 0   | 1   | 0   | 0   | 1   |
| 1   | 1   | 1   | 0   | 0   | 0   | 1   |
| 1   | 1   | 1   | 1   | 0   | 1   | 0   |

