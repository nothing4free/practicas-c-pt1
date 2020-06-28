/* 
 -----------------------------------------------------------------------------------------------------------------
   DISCLAIMER:
   Este codigo puede ser reutilizado, redistribuido y/o modificado siempre que se de credito a su autor original:
   Jorge Martinez Hurtado (jorgemhdev) | 2020

   Este programa obtiene x numeros por entrada de usuario, donde x es una cantidad recibida por entrada de teclado.
   A continuacion, ordena los numeros introducidos, muestra el mayor y el menor, y calcula y muestra su media.
   
   Por comodidad a la hora de interpretar el codigo, divido su funcionamiento en funciones. 
   A mi parecer, así se entiende mejor el funcionamiento del programa.
 -----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int numeros[100]; //array que contendra los numeros introducidos

int cantidad; // variable que contiene la cantidad de numeros a introducir

void pideNumeros(){
	
	//lo funcion pideNumeros obtiene por entrada de teclado la cantidad de numeros a introducir y dichos numeros.
	
	int numTemp; //variable que almacena cada numero introducido antes de introducirlo en el array
	
	printf("Introduzca la cantidad de numeros...\n");
	scanf("%d", &cantidad);
	printf("\nIntroduzca los numeros separados por ENTER...\n");
	
	int i = 0;
	while(i < cantidad){ //mediante este bucle pedimos x numeros, donde x es la cantidad definida por el usuario
		
		scanf("%d", &numTemp);
		numeros[i] = numTemp;
		i++;
	
	}
	
/*  DESCOMENTAR PARA PROBAR LA FUNCION INDIVIDUALMENTE: muestra por pantalla los numeros introducidos	
	i = 0;
	
	while(numeros[i] != '\0'){
		
		printf("TEST: %d\n", numeros[i]);
		i++;
		
	}
*/	

}

void ordenaNumeros(){
	
	//la funcion ordenaNumeros ordena los numeros introducidos y muestra por pantalla la lista ordenada, el mayor y el menor.
	
	int primeraPosicion = 0; //posicion del numero a comparar; al finalizar, sera el menor
	int i = 0; //contador que recorre el array numeros[]
	int temporal; //variable temporal usada en la reasignacion de posiciones
	
	/*
	ALGORITMO DE ORDENACION: Explicacion
	
	El funcionamiento del algoritmo implementado es el siguiente:
	
    	- Se comienza comparando la primera posicion del arreglo con el resto. Si se encuentra un numero menor que el primero,
		dicho numero y la primera posicion intercambian sus valores. Asi sucesivamente, hasta llegar al final del array.
		
		- Tras el primer paso, la primera posicion del array es el numero menor, por lo que la variable primeraPosicion incrementa
		su valor en 1. El procedimiento anterior se repite, pero desde la segunda posicion del arreglo. Al terminar, la segunda
		posicion del array tomara el segundo valor mas pequenio.
		
		- Este funcionamiento se sucede hasta que la variable primeraPosicion llega al final del array, momento en el cual
		este estara completamente ordenado.
		
		- Para obtener los valores menor y mayor del array, simplemente basta con acceder a sus posiciones primera y ultima, respectivamente.

	*/
	
	while(primeraPosicion < (cantidad)){ //el algoritmo se ejecuta hasta llegar al final del arreglo
		
		while(i < cantidad){ 
		/*
			este bucle compara la posicion correspondiente a la variable primeraPosicion con el resto del array,
			ntercambiando los valores que sean necesarios
		*/
			
			if(numeros[primeraPosicion] > numeros[i]){
				
				//aqui realizo el intercambio de valores si es necesario
				temporal = numeros[i];
				numeros[i] = numeros[primeraPosicion];
				numeros[primeraPosicion] = temporal;
				i++;
			
			}
			
			else{
				
				//si no hay que intercambiar valores, comparo numeros[primeraPosicion] con el siguiente elemento del array
				i++;
			
			}			
			
		}
		/*
		al terminar la comprobacion de numeros[primeraPosicion] con el resto del array, incremento primeraPosicion en 1 y
		le doy dicho valor a i, para que mediante dicho contador se pueda recorrer todo el array de nuevo sin contar la(s)
		posicion(es) ya ordenada(s)
		*/
		primeraPosicion++;
		i = primeraPosicion;
	
	}
	
	//una vez el array ha sido ordenado, obtengo sus valores menor y mayor accediendo a sus posiciones primera y ultima, respectivamente
	
	printf("\n--------------------------------\n\n");
	printf("El numero menor es: %d\n", numeros[0]);
	printf("El numero mayor es: %d\n\n", numeros[cantidad - 1]);
	printf("--------------------------------\n\n");
	
/*  DESCOMENTAR PARA PROBAR LA FUNCION INDIVIDUALMENTE: muestra por pantalla los numeros ordenados	
	int j = 0;
	while(numeros[j] != '\0'){
		
		printf("TEST: %d\n", numeros[j]);
		j++;
	
	}
*/	
}

float calculaMedia(){
	
	//la funcion calculaMedia halla la media de los numeros introducidos y la devuelve mediante un return.
	
	int i = 0;
	int denominador = cantidad; //el denominador ha de ser la cantidad de numeros introducidos
	int numerador = 0; //el numerador sera la suma de los numeros introducidos, calculada en el bucle while a continuacion:
	
	while(numeros[i] != '\0'){
		
		numerador = numerador + numeros[i];
		i++;
		
	}
	
	//creo la variable media, le asigno el valor de la division numerador / denominador, y la deuvelvo mediante un return
	float media;
	media = (numerador / denominador);
	return(media);
	
}

int main(){
	
	//se llama a las funciones que piden y ordenan los numeros
	pideNumeros();
	ordenaNumeros();
	
	//se halla la media y se muestra por pantalla
	float media = calculaMedia();
	printf("La media de los numeros introducidos es: %f\n", media);	
	return 0;
		
}
