## Matrices

### Matriz Identidad

La **matriz identidad de orden $n$** ($I_{n}$) es aquella _matriz cuadrada de orden $n$_ que tiene en su **diagonal principal** unos y en todo lo demás ceros. 

$$I_{2}=
\begin{bmatrix} 
1 & 0\\
0 & 1
\end{bmatrix},\
\
I_{3}=
\begin{bmatrix} 
1 & 0 & 0\\
0 & 1 & 0\\
0 & 0 & 1
\end{bmatrix} \tag{1}
$$

### Matriz inversa

Matrices cuadradas

La **matriz inversa** $A^{-1}$ es aquella **matriz** que al ser multiplicada por la **matriz original** $A$ te da la la **matriz identidad** $I_n$.

$$AA^{-1} = I_{n} = A^{-1}A \tag{2}$$



En estos casos se puede decir que si hay **conmutividad**.

##### Matriz inversa en sistemas de ecuaciones

Un _sistema de ecuaciones lineales_ se puede descomponer en una expresión de matrices

$$\left[\begin{array}{cccc|cc}
\
a_{11}x_{1} & a_{12}x_{1} & \cdots & a_{1n}x_{1}  & k_1\\
a_{21}x_{2} & a_{22}x_{2} & \cdots & a_{2n}x_{2}  & k_2\\
\vdots      & \vdots      & \ddots & \vdots       & \vdots\\ 
a_{n1}x_{n} & a_{n2}x_{n} & \cdots & a_{nn}x_{n} & k_n\\
\end{array} \right] \tag{3}
$$

$$A =\left[\begin{array}{cccc|cc}
\
a_{11} & a_{12} & \cdots & a_{1n} & k_1\\
a_{21} & a_{22} & \cdots & a_{2n} & k_2\\
\vdots & \vdots & \ddots & \vdots & \vdots\\ 
a_{n1} & a_{n2} & \cdots & a_{nn} & k_n\\
\end{array} \right],\ 
\
X=\left[\begin{array}{cccc|cc}
x_{1}\\
x_{2}\\
\vdots\\
x_{n}
\end{array} \right]\ \text{ y } \ 
\
B = \left[\begin{array}{cccc|cc}
k_{1}\\
k_{2}\\
\vdots\\
k_{n}
\end{array} \right] \tag{4}
$$

$$AX=B \tag{5}$$

Si existe $A^{-1}$, entonces

$$\eqalign{
AX       &= B \\
A^{-1}AX &= A^{-1}B\\
I_{n}X   &= A^{-1}B\\
X        &= A^{-1}B} \tag{6}$$

$$X =\left[\begin{array}{cccc|cc}
\
b_{11} & b_{12} & \cdots & b_{1n} \\
b_{21} & b_{22} & \cdots & b_{2n} \\
\vdots & \vdots & \ddots & \vdots \\ 
b_{n1} & b_{n2} & \cdots & b_{nn} \\
\end{array} \right]
\
\left[\begin{array}{cccc|cc}
k_{1}\\
k_{2}\\
\vdots\\
k_{n}
\end{array} \right] = 
\
\left[\begin{array}{cccc|cc}
b_{11}k_{1} + b_{12}k_{2} + \cdots+b_{1n}k_{n}\\
b_{21}k_{2} + b_{22}k_{2} + \cdots+b_{2n}k_{n}\\
\vdots\\
b_{n1}k_{2} + b_{n2}k_{2} + \cdots+b_{nn}k_{n}\\
\
\end{array} \right]\tag{7}
$$
