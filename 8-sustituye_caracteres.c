/* 
 -----------------------------------------------------------------------------------------------------------------
   DISCLAIMER:
   Este codigo puede ser reutilizado, redistribuido y/o modificado siempre que se de credito a su autor original:
   Jorge Martinez Hurtado (jorgemhdev) | 2020

   Este programa recoge una cadena y dos caracteres por entrada de usuario. A continuacion, busca el primer
   caracter en la cadena y lo sustituye por el segundo, mostrando la cadena transformada por pantalla.
   
   Por comodidad a la hora de interpretar el codigo, divido su funcionamiento en funciones. 
   A mi parecer, así se entiende mejor el funcionamiento del programa.
 -----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int LimpiarCaracter(char cadena[], char c1, char c2){
	//la funcion LimpiarCaracter sustituye los caracteres especificados y muestra por pantalla la cadena transformada.
	int i; //contador que recorre el array cadena
	int sustituciones = 0; //variable que contabiliza el numero de sustituciones, para determinar el valor de retorno de la funcion (ver abajo)
	while(cadena[i] != '\0'){
		//mediante este bucle recorremos el array, examinando todos sus caracteres
		if(cadena[i] == c1){ // si el caracter coincide con el especificado, se sustituye
			cadena[i] = c2;
			sustituciones++; //aumentamos la cantidad de sustituciones
			i++; //pasamos a la siguiente posicion
		} else { 
			i++; //si el caracter no coincide, pasamos a la siguiente posicion
		}	
	}
	//mostramos la cadena transformada
	printf("\nLa nueva cadena es: "); 
	i = 0;
	while(cadena[i] != '\0'){
		printf("%c", cadena[i]);
		i++;
	}
	printf("\n\n");
	//dependiendo del numero de sustituciones, retornamos 0 (ninguna) o 1 (una o varias)
	if(sustituciones == 0){
		return 0;
	} else {
		return 1;
	}
	
}

int main(){
	//declaramos las variables que albergaran la cadena y los dos caracteres, respectivamente
	char cadena[100];
	char c1;
	char c2;
	//recogemos entrada de usuario
	printf("Introduzca la cadena a examinar...\n");
	scanf("%s", cadena);
	printf("Introduzca el caracter a sustituir...\n");
	scanf(" %c", &c1);
	printf("Introduzca el nuevo caracter que se sustituira por el introducido anteriormente...\n");
	scanf(" %c", &c2);
	//se llama a la funcion LimpiarCaracter y dependiendo de su valor de retorno, se muestra un mensaje u otro.
	if(LimpiarCaracter(cadena, c1, c2) == 0){
		printf("No se han detectado caracteres a sustituir.");
	} else {
		printf("La cadena se ha modificado.");
	}

}
//Jorge Martinez Hurtado (jorgemhdev) | 2020
