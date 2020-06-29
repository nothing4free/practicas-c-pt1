/* 
 -----------------------------------------------------------------------------------------------------------------
   DISCLAIMER:
   Este codigo puede ser reutilizado, redistribuido y/o modificado siempre que se de credito a su autor original:
   Jorge Martinez Hurtado (jorgemhdev) | 2020

   Este programa recibe un intervalo de anios por entrada de usuario y determina todos los bisiestos comprendidos
   en dicho intervalo. El algoritmo usado para determinar si un anio es bisiesto o no se puede consultar en:
   https://docs.microsoft.com/es-es/office/troubleshoot/excel/determine-a-leap-year
   
   Por comodidad a la hora de interpretar el codigo, divido su funcionamiento en funciones. 
   A mi parecer, así se entiende mejor el funcionamiento del programa.
 -----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

void halla_bisiestos(int anio1, int anio2){
	//la funcion halla_bisiestos determina todos los anios bisiestos entre anio1 y anio2 (incluidos)
	printf("Los anios bisiestos entre %d y %d son:\n", anio1, anio2);
	while(anio1 <= anio2){ // bucle que recorre todos los anios entre anio1 y anio2 (incluidos)
		//implementacion del algoritmo expuesto anteriormente.
		if((anio1 % 4) == 0){ //si el anio es divisible por 4, se prueba si es divisible por 100. Si no, no es bisiesto.
			if((anio1 % 100) == 0){ //si el anio es divisible por 100 y 400, es bisiesto. Si lo es por 100 pero no por 400, no lo es.
				if((anio1 % 400) == 0){
					printf("%d, ", anio1);
					anio1++;
				} else  {
					anio1++;
				}
			} else {
				printf("%d, ", anio1);
				anio1++;
			}
		} else {
			anio1++;
		}
	}	
}



int main(){
	//en el main se piden los valores de anio1 y anio2 y se pasan a la funcion halla_bisiestos
	int anio1;
	int anio2;
	printf("Introduzca el primer anio...\n");
	scanf("%d", &anio1);
	printf("Introduzca el ultimo anio...\n");
	scanf("%d", &anio2);
	
	halla_bisiestos(anio1, anio2);
}
//Jorge Martinez Hurtado (jorgemhdev) | 2020
