/* 
 -----------------------------------------------------------------------------------------------------------------
   DISCLAIMER:
   Este codigo puede ser reutilizado, redistribuido y/o modificado siempre que se de credito a su autor original:
   Jorge Martinez Hurtado (jorgemhdev) | 2020

   Dados dos valores, un minimo y un maximo, este programa calcula el cuadrado de todos los numeros contenidos
   en el rango determinado por dichos valores.
   
   Por comodidad a la hora de interpretar el codigo, divido su funcionamiento en funciones. 
   A mi parecer, así se entiende mejor el funcionamiento del programa.
 -----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

//declaramos variables globales que contendran los valores minimo y maximo.
int min;
int max;

void muestra_cuadrados(int min, int max){
	//la funcion muestra_cuadrados se encarga de elevar los numeros al cuadrado y mostrar los resultados por pantalla
	printf("x      x*x\n");
	printf("----------\n");
	int square;
	for(min; min <= max; min++){
		//mediante este bucle elevamos todos los numeros al cuadrado y los mostramos por pantalla
		square = min * min;
		printf("%d      %d\n", min, square);
	}
}



int main(){
	//en la funcion main se obtienen los valores minimo y maximo y se pasan a la funcion muestra_cuadrados.
	printf("Introduzca el valor minimo...\n");
	scanf("%d", &min);
	printf("Introduzca el valor maximo...\n");
	scanf("%d", &max);
	muestra_cuadrados(min, max);
}

//Jorge Martinez Hurtado (jorgemhdev) | 2020
