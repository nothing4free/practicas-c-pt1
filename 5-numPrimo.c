/* 
 -----------------------------------------------------------------------------------------------------------------
   DISCLAIMER:
   Este codigo puede ser reutilizado, redistribuido y/o modificado siempre que se de credito a su autor original:
   Jorge Martinez Hurtado (jorgemhdev) | 2020

   Este programa recibe un numero mediante entrada de usuario y determina si es primo o no.
   
   Por comodidad a la hora de interpretar el codigo, divido su funcionamiento en funciones. 
   A mi parecer, así se entiende mejor el funcionamiento del programa.
 -----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int pideNumero(){
	
	//la funcion pideNumero obtiene un numero por entrada de teclado y lo devuelve
	int entrada;
	printf("Introduzca un numero entero mayor que 1...\n");
	scanf("%d", &entrada);
	return(entrada);
	
}

void hallaDivisores(int num){
	
	//la funcion hallaDivisores examina un numero que se le pasa al llamarla, y determina si es primo o no
	
	if(num <= 1){ //si el numero no es valido (<= 1), devuelve un mensaje de error
		
		printf("ERROR: introduzca un numero mayor que 1.\n");
		
	}
	else{ //si el numero es valido, procede a buscar sus divisores y mostrar por pantalla el resultado final
		
		int i = 1; //contador que recorre todos los numeros menores o iguales al introducido. Es el divisor para obtener el resto.
		int divisores = 0; //cantidad de divisores del numero. Se incrementa cada vez que el resto de la division num / i es cero.
		
		while(i <= num){ //bucle que recorre todos los numeros desde 1 hasta el introducido (incluyendo este ultimo)
			
			if((num % i) == 0){
				
				//si el resto de la division del numero introducido entre el contador es igual a cero, entonces sube la cantidad de divisores
				divisores++;
				i++;
				
			}
			else{
				
				//si no es cero, simplemente se incrementa el valor del divisor a probar.
				i++;
				
			}
			
		}
		
		if(divisores > 2){
			
			//si el numero tiene mas de dos divisores, entonces no es primo
			printf("%d no es primo.\n", num);
		
		}
		else if(divisores == 2){
			
			//si el numero tiene dos divisores (1 y y el mismo), entonces es primo.
			printf("%d es primo.\n", num);
		
		}
		
	}
	

}

int main(){
	
	//se almacena el numero introducido en la variable numero y se pasa a la funcion que determina si es primo o no
	int numero = pideNumero();
	hallaDivisores(numero);
	
}

//Jorge Martinez Hurtado (jorgemhdev) | 2020
