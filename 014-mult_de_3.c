/* 
 -----------------------------------------------------------------------------------------------------------------
   DISCLAIMER:
   Este codigo puede ser reutilizado, redistribuido y/o modificado siempre que se de credito a su autor original:
   Jorge Martinez Hurtado (jorgemhdev) | 2020

   Este programa obtiene n numeros por entrada de usuario; n es una cantidad definida por entrada de teclado.
   A continuacion, los divide en dos categorias: multiplos y no multiplos de 3, y las muestra por pantalla.
   
   Por comodidad a la hora de interpretar el codigo, divido su funcionamiento en funciones. 
   A mi parecer, así se entiende mejor el funcionamiento del programa.
 -----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

void halla_mult3(int numeros[]){
	//la funcion halla_mult3 divide los numeros introducidos en dos categorias: multiplos y no multiplos de 3.
	//al finalizar la categorizacion, muestra ambas categorias por pantalla.
	int i = 0; //contador que recorre el array inicial
	while(numeros[i] != 0){
		i++; //en esta ocasion, cuenta los caracteres que tiene el array inicial...
	}
	//para crear dos arrays de multiplos y no multiplos del mismo tamanio.
	int multiplos[i];
	int no_multiplos[i];
	i = 0; //reseteamos el contador
	int x = 0; //contador que recorre el array de multiplos
	int y = 0; //contador que recorre el array de no multiplos
	
	while(numeros[i] != '\0'){ //volvemos a recorrer todo el array inicial
		if((numeros[i] % 3) == 0){ //si el numero es multiplo de 3 (es decir, cumple que es divisor de 3)...
			multiplos[x] = numeros[i]; //... se agrega al array de multiplos
			i++;
			x++;
		} else { //si no es multiplo de 3, se agrega al arary de no multiplos.
			no_multiplos[y] = numeros[i];
			i++;
			y++;
		}	
	}
	//se agregan los caracteres nulos al final de cada array
	multiplos[x] = '\0';
	no_multiplos[y] = '\0';
	
	x = 0; //reseteo el contador de los multiplos a 0
	printf("\nLos multiplos de 3 introducidos son:\n");
	while(multiplos[x] != '\0'){ //muestro los multiplos por pantalla
		printf("%d ", multiplos[x]);
		x++;
	}
	y = 0; //reseteo el contador de los no multiplos a 0
	printf("\nLos no multiplos de 3 introducidos son:\n");
	while(no_multiplos[y] != '\0'){ //muestro los no multiplos por pantalla
		printf("%d ", no_multiplos[y]);
		y++;
	}
}


int main(){
	//la funcion main obtiene la cantidad de numeros y los mismos, y pasa un array con los numeros a la funcion halla_mult3
	int num;
	printf("Introducza la cantidad de numeros a comprobar (mayor que 0)...\n");
	scanf("%d", &num);
	if(num < 1){ //si la cantidad introducida es menor que 1, se muestra un mensaje de error y la ejecucion del programa se termina.
		printf("ERROR: valor no valido. Introduzca un valor mayor que 0.\n");
		return 1;
	}
	
	int numeros[num]; //se crea un array de numeros con la cantidad introducida
	int i = 0; //variable que contabilizara la cantidad de numeros introducidos por el usuario en el siguiente bucle
	printf("Introduzca %d numeros separados por ENTER...\n", num);
	while(i < num){
		scanf("%d", &numeros[i]);
		i++;
	}
	numeros[i] = '\0'; //se agrega el caracter nulo al final del array de numeros introducidos por el usuario
	
	halla_mult3(numeros); //se llama a la funcion halla_mult3 y se le pasa el array anterior.
}
//Jorge Martinez Hurtado (jorgemhdev) | 2020
