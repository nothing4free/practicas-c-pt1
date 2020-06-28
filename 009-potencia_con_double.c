/* 
 -----------------------------------------------------------------------------------------------------------------
   DISCLAIMER:
   Este codigo puede ser reutilizado, redistribuido y/o modificado siempre que se de credito a su autor original:
   Jorge Martinez Hurtado (jorgemhdev) | 2020

   Este programa realiza una potencia a partir de una base y una exponente recibidas por entrada de usuario, con
   la peculiaridad de que la base y el resultado se almacenan en variables double, y que el resultado se muestra
   unicamente con dos cifras decimales.
   
   Por comodidad a la hora de interpretar el codigo, divido su funcionamiento en funciones. 
   A mi parecer, así se entiende mejor el funcionamiento del programa.
 -----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

void eleva_numeros(double base, int exponente){
	//en la funcion eleva_numeros, se reciben la base y el exponente, se realiza la potencia y se muestra el resultado
	int i = 1; //contador que realiza tantas multiplicaciones como el exponente especifique
	double resultado = base; //variable resultado que toma el valor de la base antes de realizar ninguna operacion
	if(base == 0){ //si la base es 0, el restulado es siempre 0
		printf("El restultado es: 0\n");
	} else {
		if(exponente == 0){ //si el exponente es 0, el resultado es siempre 1.
			printf("El restulado es: 1\n");
		} else {
			while(i < exponente){ //bucle que realiza la potencia
				resultado = resultado * base;
				i++;
			}
			printf("El resultado es: %.2f\n", resultado); //se muestra el resultado final
		}		
	}
}

int main(){
	//en la funcion main, se reciben la base y el exponente y se pasan a la funcion eleva_numeros
	double x;
	int n;
	printf("Introduzca la base...\n");
	scanf("%lf", &x);
	printf("Introuzca el exponente...\n");
	scanf("%d", &n);	
	eleva_numeros(x, n);
}
//Jorge Martinez Hurtado (jorgemhdev) | 2020
