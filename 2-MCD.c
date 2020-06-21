/* 
 -----------------------------------------------------------------------------------------------------------------
   DISCLAIMER:
   Este codigo puede ser reutilizado, redistribuido y/o modificado siempre que se de credito a su autor original:
   Jorge Martinez Hurtado (jorgemhdev) | 2020

   Este programa halla el MCD (maximo comun divisor) de dos numeros, y lo muestra por pantalla.
   
   Por comodidad a la hora de interpretar el codigo, divido su funcionamiento en funciones. 
   A mi parecer, asi se entiende mejor el funcionamiento del programa.
 -----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
//declaramos variables globales que recogen la entrada de usuario.
int numero1;
int numero2;

//declaramos arrays globales en los que almacenaremos los divisores de los dos numeros.
int divisores1[100];
int divisores2[100];

//la variable MCD contendra el resultado final.
int MCD;

void pideNumero(){
	
	//la funcion pideNumero obtiene los dos numeros por entrada de usuario por teclado
	
	printf("Introduce el numero 1...\n");
	scanf("%d", &numero1);
	
	printf("Introduce el numero 2...\n");
	scanf("%d", &numero2);
	
	printf("--------------------------------\n");
	
}

void calculaDiv1(){
	
	//la funcion calculaDiv1 obtiene los divisores del primer numero introducido.
	
	int i = 1;
	int contadorDivisor1 = 0;
	
	while(i <= numero1){
		
		if((numero1 % i) == 0){
			
			divisores1[contadorDivisor1] = i;
			contadorDivisor1++;
			i++;
			
		}
		else{
	
			i++;
	
		}
	
	}

/*  
	DESCOMENTAR PARA PROBAR LA FUNCION INDIVIDUALMENTE: imprime los divisores del numero 1
	divisores1[contadorDivisor1+1] = '\0';
	int k = 0;
	while(divisores1[k] != '\0'){
		
		printf("%d\n", divisores1[k]);
		k++;
		
	}
*/

}

void calculaDiv2(){
	
	//la funcion calculaDiv1 obtiene los divisores del segundo numero introducido.
	
	int j = 1;
	int contadorDivisor2 = 0;
	
	while(j <= numero2){
		
		if((numero2 % j) == 0){
			
			divisores2[contadorDivisor2] = j;
			contadorDivisor2++;
			j++;
			
		}
		else{
	
			j++;
	
		}
	
	}	
	
/*  
	DESCOMENTAR PARA PROBAR LA FUNCION INDIVIDUALMENTE: imprime los divisores del numero 2
	divisores2[contadorDivisor2+1] = '\0';
	int k = 0;
	while(divisores2[k] != '\0'){
		
		printf("%d\n", divisores2[k]);
		k++;
		
	}	
*/	
	
}

void calculaMCD(){
	
	//la funcion calculaMCD compara los divisores de ambos numeros y almacena en la variable MCD el mayor de ellos.
	
	//determinamos la cantidad de divisores del primer numero
	int size1 = 0;
	while(divisores1[size1] != '\0'){
		
		size1++;
		
	}
	
	//declaramos variables contador para los siguientes bucles
	int contador1 = 0;
	int contador2 = 0;
	
	/*
	Los siguients bucles anidados comparan los arrays en los que se encuentran los divisores de los dos numeros. Su funcionamiento es el siguiente:
	
    Compara el primer divisor del primer numero con todos los divisores del segundo.		
	 -> Si coinciden los valores, se actualiza el valor de la variable MCD y se pasa al segundo divisor del primer numero, repitiendose el mismo proceso.
	 -> Si no coinciden los valores, se pasa al segundo divisor del primer numero, repitiendose el mismo proceso.
	
	Este proceso se repite hasta que se llega al caracter nulo en el array de los divisores del primer numero. En ese instante, la variable MCD
	tendra el divisor comun mas alto, dado que los contadores de los bucles van aumentando su valor cada vez estos se ejecutan.
	*/
		
	while(contador1 < size1){ //bucle que recorre el array de los divisores del primer numero...
		
		while(divisores2[contador2] != '\0'){ // ... y lo compara con todos los divisores del segundo numero.
			
			if(divisores1[contador1] == divisores2[contador2]){
				
				MCD = divisores1[contador1]; // se actualiza el valor de la variable MCD con el que, en el momento, es el divisor comun mas alto.
				contador2++;
				
			}
			
			else{
				
				contador2++;
				
			}
			
		}
	
	contador1++;
	contador2 = 0;
	
	}
	
	//se muestra por pantalla el valor de la variable MCD, cuyo valor tras la ejecucion del bucle es el divisor comun mas alto.
	printf("El MCD de %d y %d es: %d\n", numero1, numero2, MCD); 

}

void main(){
	
	pideNumero();
	calculaDiv1();
	calculaDiv2();
	calculaMCD();
	
}

//Jorge Martinez Hurtado (jorgemhdev) | 2020
