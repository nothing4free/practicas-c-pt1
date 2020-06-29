/* 
 -----------------------------------------------------------------------------------------------------------------
   DISCLAIMER:
   Este codigo puede ser reutilizado, redistribuido y/o modificado siempre que se de credito a su autor original:
   Jorge Martinez Hurtado (jorgemhdev) | 2020

   Este programa recibe una palabra o frase por entrada de usuario, y la modifica quitando sus vocales. Al final,
   muestra la entrada sin vocales por pantalla.
   
   Por comodidad a la hora de interpretar el codigo, divido su funcionamiento en funciones. 
   A mi parecer, así se entiende mejor el funcionamiento del programa.
 -----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int EliminarVocales(char cadena[]){
	//la funcion EliminarVocales recibe una cadena de caracteres, y copia los caracteres que no sean vocales a una nueva cadena.
	int i = 0; //contador que recorre la cadena inicial
	int j = 0; //contador que recorre la cadena nueva. Se incrementa solo si el caracter examinado NO es vocal.
	char nuevaCadena[100]; //definimos un nuevo array de caracteres
	while(cadena[i] != '\0'){ //este bucle pasa todos los caracteres que no sean vocales a la nueva cadena.
		if(cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' ||  cadena[i] == 'o' || cadena[i] == 'u' || cadena[i] == 'A' || cadena[i] == 'E' || cadena[i] == 'I' || cadena[i] == 'O' || cadena[i] == 'U'){
			i++; //si el caracter en la cadena inicial es una vcoal, se examina el siguiente y la nueva cadena no se manipula.
		} else {
			nuevaCadena[j] = cadena[i]; //si el caracter en la cadena inicial no es una vocal, se copia en la nueva cadena.
			i++; //pasamos al siguiente caracter en la cadena inicial
			j++; //pasamos al siguiente caracter a escribir en la cadena nueva
		}
	}
	nuevaCadena[j] = '\0'; //se agrega el caracter nulo al final de la nueva cadena
	j = 0; //reseteo el contador que recorre la nueva cadena
	while(nuevaCadena[j] != '\0'){ //muestro la nueva cadena por pantalla
		printf("%c", nuevaCadena[j]);
		j++;
	}
}

int main(){
	//en la funcion main, se define la cadena, se lee la entrada de usuario y se pasa a la funcion ElminarVocales.
	char cadena[100];
	printf("Introduzca la palabra o frase...\n");
	scanf("%[^\n]", cadena);
	EliminarVocales(cadena);
}
//Jorge Martinez Hurtado (jorgemhdev) | 2020
