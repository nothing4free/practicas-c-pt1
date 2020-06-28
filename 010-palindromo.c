/* 
 -----------------------------------------------------------------------------------------------------------------
   DISCLAIMER:
   Este codigo puede ser reutilizado, redistribuido y/o modificado siempre que se de credito a su autor original:
   Jorge Martinez Hurtado (jorgemhdev) | 2020

   Este programa recibe una palabra o frase por entrada de usuario, y determina si es un palindromo o no.
   Para ello, se examina la palabra o frase de derecha a izquierda y de izquierda a derecha a la vez, comparando
   los caracteres a ambos lados en cada iteracion. Los caracteres seran iguales en todo momento si la palabra 
   o frase es palindromo.
   Informacion acerca de palindromos: https://es.wikipedia.org/wiki/palindromo
   
   Por comodidad a la hora de interpretar el codigo, divido su funcionamiento en funciones. 
   A mi parecer, así se entiende mejor el funcionamiento del programa.
 -----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int Palindromo(char cadena[]){
	//la funcion Palindromo recibe la palabra o frase y determina si es palindromo o no.
	int cant_caracteres = 0;
	while(cadena[cant_caracteres] != '\0'){
		cant_caracteres++; //determinamos la longitud en caracteres de la cadena introducida
	}
	int i = 0; //contador i que recorre el array de izquierda a derecha
	int j = cant_caracteres-1; //contador j cuyo valor inicial es el ultimo caracter del array (sin contar \0, de ahi el -1)
							   //este contador recorre el array de derecha a izquierda.
	
	while(i < cant_caracteres && j > 0){ //mediante este bucle y dos contadores, se recorre el array de dcha a izq. y viceversa, y se comparan los caracteres.
		if(cadena[i] != cadena[j]){ //si un caracter de la izquierda sea distinto a su equivalente en la derecha...
			return 0; //la cadena no es palindromo, y por ello se retorna un 0.
		} else { //si los caracteres coinciden, se pasa a los dos siguientes.
			i = i + 1; //pos1 -> pos2 (movimiento de izquierda a derecha)
			j = j - 1; //pos1 <- pos2 (movimiento de derecha a izquierda)
		}
	}
	return 1; //si no ha habido ningun return 0, eso significa que la cadena es palindromo, por lo que se devuelve 1.
}

int main(){
	//la funcion main obtiene la palabra o frase por entrada de usuario, y la pasa a la funcion palindromo.
	//en funcion del valor de retorno de la funcion palindromo, se muestra el resultado final.
	char cadena[100];
	printf("Introduzca la palabra o frase...\n");
	scanf("%s", cadena);
	
	if(Palindromo(cadena) == 1){ //si Palindromo(cadena) retorna 1, la palabra o frase es palindromo.
		printf("El texto introducido es palindromo.\n");
	} else {
		printf("El texto introducido no es palindromo.\n"); //si retorna 0 (!= 1), la palabra o frase es palindromo.
	}
}
