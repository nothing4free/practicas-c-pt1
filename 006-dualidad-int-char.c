/* 
 -----------------------------------------------------------------------------------------------------------------
   DISCLAIMER:
   Este codigo puede ser reutilizado, redistribuido y/o modificado siempre que se de credito a su autor original:
   Jorge Martinez Hurtado (jorgemhdev) | 2020

   Este programa obtiene un caracter por entrada de teclado, muestra su valor en la tabla ASCII e imprime el
   siguiente valor de dicha tabla. Es un programa muy simple cuya finalidad es demostrar el funcionamiento de la
   dualidad int-char.
   
   Por comodidad a la hora de interpretar el codigo, divido su funcionamiento en funciones. 
   A mi parecer, así se entiende mejor el funcionamiento del programa.
 -----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

void imprimeValorSiguiente(char caracter){

	/*
	Los datos tipo char se pueden tratar como datos int si se trabaja con los valores ASCII de los caracteres.
	Dichos valores ASCII se pueden consultar en la tabla ASCII: https://elcodigoascii.com.ar/
	
	Por ejemplo, podemos hacer referencia a la letra mayuscula A de dos formas:
	 - 'A'
	 - 65 (su valor en la tabla ASCII)
	 
	Este programa trata el caracter introducido por el usuario como un numero entero para demostrar este concepto.
	El primer printf muestra tanto el valor ASCII (%d) como el caracter introducido (%c), y el segundo realiza 
	una operacion con el valor ascii.
	
	*/
	
	printf("El caracter introducido es: %c, y su valor en la tabla ASCII es %d\n", caracter, caracter);
	printf("Su valor siguiente en la tabla ASCII es: %d, que se corresponde con el caracter %c\n", (caracter + 1), (caracter + 1));
	
}


int main(){
	
	//pedimos una letra al usuario y la almacenamos en la variable tipo char "letra"
	char letra;
	printf("Introduzca una letra...\n");
	scanf("%c", &letra);
	imprimeValorSiguiente(letra); //le pasamos la letra introducida a la funcion expuesta anteriormente
	
}
