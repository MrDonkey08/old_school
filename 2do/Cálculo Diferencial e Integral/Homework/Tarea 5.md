## Metodos Matemáticos II  
### Alan Yahir Juarez Rubio 23/10/2022
---
**Resuelve las integrales**

1.- (20 pts) $\int x^2\sqrt{x+1dx}$

$u=x^2$
$du=2x$
$v = \int \sqrt{x+1}\ dx$

$v=\cfrac{2\sqrt{(x+1)^3}}{3}$ $= \int \sqrt{x+1}\ dx$ $= \int \left(x+1\right)^{\frac{1}{2}}\ dx$ $= \cfrac{(x+1)^{1 + \frac{1}{2}}\ dx}{\cfrac{1}{2} + 1} + c$ $= \cfrac{(x+1)^{\frac{3}{2}}\ dx}{\cfrac{3}{2}} + c$

$v = \cfrac{\sqrt{(x+1)^{3}} dx}{3} + c$


$=x^2\cdot \cfrac{2\sqrt{(x+1)^3}}{3}-\ \int \cfrac{2\sqrt{(x+1)^3)}}{3} \cdot 2xdx$

$=\cfrac{2x^2\sqrt{(x+1)^3}}{3} - \cfrac{4}{3} \int x\sqrt{(x+1)^3)} dx$

$v = x$
$dv = 1$
$dv = \sqrt{(x+1)^3}$

$v = \cfrac{2\sqrt{(x+1)^3}}{5}dx$

$v=\int\sqrt{(x+1)^3}$ $=\int (x+1)^\frac{3}{2}$ $=\cfrac{(x+1)^\frac{5}{2}}{\cfrac{5}{2}} + c$ $=\cfrac{2(x+1)^\frac{5}{2}}{5} + c$ $=\cfrac{2}{5} \int \sqrt{(x+1)^5} dx$ $= \cfrac{2}{5} \cdot \cfrac{(x+1)^{\frac{7}{2}}}{\cfrac{7}{2}}$

$v = \cfrac{2}{5} \cdot \cfrac{(x+1)^{\frac{7}{2}}}{\cfrac{7}{2}}$ $= \cfrac{2}{5} \cdot \cfrac{2(x+1)^{\frac{7}{2}}}{7}$ $= \cfrac{4\sqrt{(x+1)^7}}{35}$

$=\cfrac{2x^2\sqrt{(x+1)^3}}{3} - \cfrac{4}{3}\left(\cfrac{2x\sqrt{(x+1)^5}}{5} - \int \cfrac{2x\sqrt{(x+1)^5}}{5} dx \right)$

$=\cfrac{2x^2\sqrt{(x+1)^3}}{3} - \cfrac{4}{3}\left(\cfrac{2x\sqrt{(x+1)^5}}{5} - \cfrac{2}{5} \int \sqrt{(x+1)^5} dx \right)$

$=\cfrac{2x^2\sqrt{(x+1)^3}}{3} - \cfrac{4}{3}\left(\cfrac{2x\sqrt{(x+1)^5}}{5}  \int \cfrac{4 \sqrt{(x+1)^7}}{35} + c\right)$

==$\int x^2\sqrt{x+1dx}=\cfrac{2x^2\sqrt{(x+1)^3}}{3} - \cfrac{8x\sqrt{(x+1)^5}}{15}  + \cfrac{16 \sqrt{(x+1)^7}}{105} + c$==

---
2.- (20 pts) $\int\cfrac{x}{(2x+1)^2 x}dx$

$\int\cfrac{x}{(2x+1)^2 x}dx = \int\cfrac{1}{(2x+1)^2}dx$

$t= 2x+1$, $dt= 2dx$, $\cfrac{dt}{z}=1dx$

$\int\cfrac{1}{(2x+1)^2}dx$ = $\int\cfrac{dt}{2t^2}$ $= \cfrac{1}{2} \int \cfrac{dt}{t^2}$ $=\cfrac{1}{2} \cdot \cfrac{t^{-1}}{-1}$ $=\cfrac{1}{2}\cdot\cfrac{1}{t}$ $= -\cfrac{1}{2t} + c$

==$\int\cfrac{x}{(2x+1)^2 x}dx$$\int x^2\sqrt{x+1dx} = \cfrac{1}{2(x+1)} + c$==

---
3.- (20 pts) $\int\cfrac{x^4}{3+2x^5} dx$

$t = 3+2x^5$
$dt = 10 x^4 dx$
$\cfrac{dt}{10}= x^4 dx$

$=\cfrac{1}{10} \cfrac{dt}{t} =$$\cfrac{1}{10}\cdot \ln\mid t\mid + c =$$\cfrac{1}{10} \cdot \ln \left(\mid 3+2x^5 \mid  \right) + c$

==$\int\cfrac{x^4}{3+2x^5} dx =$$\cfrac{1}{10} \cdot \ln \left(\mid 3+2x^5 \mid  \right) + c$==

---
4.- (20 pts) $\int \cos(3x)\sin(2x)dx$

$\int \cfrac{1}{2}\left( \sin \left(3x+2x \right) - \sin \left(3x-2x \right) \right)dx$ $=\cfrac{1}{2} \int \left( \sin \left(5x \right) - \sin \left(x \right) \right)dx$ $=\cfrac{1}{2} \int \left( \sin \left(5x \right) - \sin \left(x \right) \right)dx$ $=\cfrac{1}{2} \int \left( \sin \left(5x \right) \right) - \cfrac{1}{2} \int \left(\sin \left(x \right) \right)dx$ 

$t = 5x$
$dt = 5dx$
$\cfrac{dt}{5} = dx$

$=\cfrac{1}{2} \int \left(\sin \left(t \right) \cfrac{dt}{5} \right) - \cfrac{1}{2} \int \left(\sin \left(x \right) dx \right)$ $=\cfrac{1}{2} \cdot \cfrac{1}{5} \int \left(\sin \left(t \right) dt \right) - \cfrac{1}{2} \int \left(\sin \left(x \right) dx \right)$ $=\cfrac{1}{10}  \left(-\cos \left(t \right)  \right) - \cfrac{1}{2} \left(-\cos \left(x \right) \right) + c$  $=-\cfrac{1}{10}  \left(\cos \left(5x \right)  \right) + \cfrac{1}{2} \left(\cos \left(x \right) \right) + c$

==$\int \cos(3x)\sin(2x)dx$ $=-\cfrac{1}{10}  \left(\cos \left(5x \right)  \right) + \cfrac{1}{2} \left(\cos \left(x \right) \right) + c$==

---
5.- (20 pts) $\int\cfrac{1}{5x^2} dx$

$=\int \cfrac{dx}{5\left(1 + \cfrac{x^2}{5}\right)}$ $=\cfrac{1}{5} \int \cfrac{dx}{1 + \cfrac{x^2}{5}}$ $=\cfrac{1}{5} \int \cfrac{dx}{1 + \left(\cfrac{x}{\sqrt{5}}\right)^{2}}$ 

$t =\cfrac{5}{\sqrt 5}$ 
$dt = \cfrac{\sqrt 5}{5}$
$5dt = \sqrt5$

$=\cfrac{1}{5} \int \cfrac{\cfrac{5dt}{\sqrt{5}}}{1+t^2}$ $=\cfrac{\cfrac{5}{\sqrt{5}}}{5} \int \cfrac{dt}{1+t^2}$ $=\cfrac{5}{\sqrt 5} \int \cfrac{dt}{1+t^2}$ $=\cfrac{1}{\sqrt{5}} \int \cfrac{td}{1+t^2}$ $= \cfrac{1}{\sqrt{5}} \cdot \arctan \left(\cfrac{x}{\sqrt 5} \right) + c$

==$\int\cfrac{1}{5x^2} dx$ $= \cfrac{1}{\sqrt{5}} \cdot \arctan \left(\cfrac{x}{\sqrt 5} \right) + c$==

---
6.- (20 pts) $\int \cfrac{d}{dx}\left(\cfrac{e^x\ln(x)}{\sqrt{x^2+\sin^2(\cos^3(x-3))}} +8 \right) dx$

==$\int \cfrac{d}{dx}\left(\cfrac{e^x\ln(x)}{\sqrt{x^2+\sin^2(\cos^3(x-3))}} +8 \right) dx$ $=\cfrac{e^x\ln(x)}{\sqrt{x^2+\sin^2(\cos^3(x-3))}} + c$==

 