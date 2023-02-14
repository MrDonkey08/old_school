	#include<stdio.h>
	
	int main(){
		int n1, n2;
		
		printf("Digite 2 números: ");scanf("%i %i,&n1,&n2");
		
		if (n1 % n2 == 0){
		printf("El número %i es divisible entre %i",n1,n2);
		}
		
		return 0;
	}

Después del if, se encuentra dos parentesis, dentro de ellos se encuentra una comparación, que si el modulo primer número ingresado respecto al segundo es igual a 0. Si lo es, imprime una que el primer número es divisible entre el segundo.

## 2
	#include<stdio.h>
	
	int main(){
	float examen;
	
	printf("Dígite la nota del examen: "); scanf("%f,&examen");

	 if (examen > 10.5){
		 puts("El alumno está aprobado");
		}
	return 0;
	}


# 2.1
	#include<stdio.h>
	int main(){
	
	int num;
	
	printf("Introduce un número entero"); scanf("%i,num");

	if (num > 0){
		print("El número %i es positivo", num)
		}
		else: printf("El número i% es negativo", num);
	
	}

# 3
	#inclde.<stdio>
	
	int main(){
	float nota;

	printf("Dígite la nota del examen: ");scanf("%f",&nota);
	

	if (nota > 10.5){
		puts("El alumnos está aprobado.");
		}
	else{
		puts("El alumno está desaprobado.");
		}

		return 0;
	}