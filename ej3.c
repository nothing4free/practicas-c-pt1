#include <stdio.h>

/*
FUNCIONAMIENTO DEL PROGRAMA
	1. se piden los dos numeros por pantalla
	2. se descompone factorialmente el primero, y se almacenan sus factores en un array.
	3. se descompone factorialmente el segundo, y se almacenan sus factores en un array.
	4. se multiplican los dos arrays y se guarda el resultado.
	5. se muestra en pantalla dicho resultado: el MCM. 
*/

int numero1;
int numero2;
int factoresTotales[100];

typedef struct{
	
	int base;
	int exponente;
	
}factores_t;

factores_t factores1[100];
factores_t factores2[100];
factores_t factoresFinal[100];

int MCM;

void pideNumero(){
	
	printf("Introduce el numero 1...\n");
	scanf("%d", &numero1);
	
	printf("Introduce el numero 2...\n");
	scanf("%d", &numero2);
	
	printf("--------------------------------\n");
	
}

void factoriza1(){
	
	int contador1 = 0; //contador del array estructura
	int divisor1 = 2; //empieza en 2 porque 1 es factor de todos los numeros, asi que lo obviamos

	while(divisor1 <= numero1){
		
		
		if((numero1 % divisor1) == 0){
			
			factores1[contador1].base = divisor1;
			factores1[contador1].exponente++;
			numero1 = (numero1 / divisor1);
			
		}
		
		else{
			
			divisor1++;
			
			if(factores1[contador1].base != '\0'){
				
				contador1++;
			
			}

			
		}
		
	}

/*
	int imprime = 0;
	
	while(factores1[imprime].base != '\0'){
		
		printf("Base: %d\n", factores1[imprime].base);
		printf("Exponente: %d\n", factores1[imprime].exponente);
		printf("-----------------\n");
		imprime++;
		
	}
*/

}

void factoriza2(){

	int contador2 = 0; //contador del array estructura
	int divisor2 = 2; //empieza en 2 porque 1 es factor de todos los numeros, asi que lo obviamos

	while(divisor2 <= numero2){
		
		
		if((numero2 % divisor2) == 0){
			
			factores2[contador2].base = divisor2;
			factores2[contador2].exponente++;
			numero2 = (numero2 / divisor2);
			
		}
		
		else{
			
			divisor2++;
			
			if(factores2[contador2].base != '\0'){
				
				contador2++;
			
			}

			
		}
		
	}

/*
	int imprime = 0;
	
	while(factores2[imprime].base != '\0'){
		
		printf("Base: %d\n", factores2[imprime].base);
		printf("Exponente: %d\n", factores2[imprime].exponente);
		printf("-----------------\n");
		imprime++;
		
	}
*/
}

void guardaArray(){
	
	int contador1 = 0; //recorre los arrays de factores
	int contador2 = 0; //recorre el array de factores comunes y no comunes
	
	int size1 = 0;
	int size2 = 0;
	
	while(factores1[size1].base != '\0'){
		
		size1++;
		
	}
	
	while(factores2[size2].base != '\0'){
		
		size2++;
		
	}

	printf("size1 = %d\n", size1);
	printf("size2 = %d\n", size2);
	printf("--------------------------------\n");
	
	if(size1 < size2){
		
		while(factores2[contador1].base != '\0'){
		
			if(factores1[contador1].base == factores2[contador1].base){ //si las bases son iguales, compara los exponentes y guarda la base con el mayor exponente
			
				if(factores1[contador1].exponente > factores2[contador1].exponente){
				
					if(factores1[contador1].base != '\0'){ //solo se graba si son distintos de \0
					
						factoresFinal[contador2].base = factores1[contador1].base;
						factoresFinal[contador2].exponente = factores1[contador1].exponente;
						contador2++;								
				
					}
				
				}
				else{ //si los exponentes son iguales o el segundo es mayor, se graba el segundo.
				
					if(factores1[contador1].base != '\0'){
					
						factoresFinal[contador2].base = factores2[contador1].base;
						factoresFinal[contador2].exponente = factores2[contador1].exponente;
						contador2++;					
					
					}

				}
			
				contador1++;
			
			}
		
			else{ //CORREGIR ERROR
			
				if(factores1[contador1].base != '\0'){
				
					factoresFinal[contador2].base = factores1[contador1].base;
					factoresFinal[contador2].exponente = factores1[contador1].exponente;
					contador2++;
				
				}
			
				if(factores2[contador1].base != '\0'){
				
					factoresFinal[contador2].base = factores2[contador1].base;
					factoresFinal[contador2].exponente = factores2[contador1].exponente;
					contador2++;				
				
				}
		
			contador1++;	
		
			}		
		
		}
		
	}
	
	if(size2 < size1 || size1 == size2){

		while(factores1[contador1].base != '\0'){
		
			if(factores1[contador1].base == factores2[contador1].base){ //si las bases son iguales, compara los exponentes y guarda la base con el mayor exponente
			
				if(factores1[contador1].exponente > factores2[contador1].exponente){
				
					if(factores1[contador1].base != '\0'){ //solo se graba si son distintos de \0
					
						factoresFinal[contador2].base = factores1[contador1].base;
						factoresFinal[contador2].exponente = factores1[contador1].exponente;
						contador2++;								
				
					}
				
				}
				else{ //si los exponentes son iguales o el segundo es mayor, se graba el segundo.
				
					if(factores1[contador1].base != '\0'){
					
						factoresFinal[contador2].base = factores2[contador1].base;
						factoresFinal[contador2].exponente = factores2[contador1].exponente;
						contador2++;					
					
					}

				}
			
				contador1++;
			
			}
		
			else{ //CORREGIR ERROR
			
				if(factores1[contador1].base != '\0'){
				
					factoresFinal[contador2].base = factores1[contador1].base;
					factoresFinal[contador2].exponente = factores1[contador1].exponente;
					contador2++;
				
				}
			
				if(factores2[contador1].base != '\0'){
				
					factoresFinal[contador2].base = factores2[contador1].base;
					factoresFinal[contador2].exponente = factores2[contador1].exponente;
					contador2++;				
				
				}
		
			contador1++;	
		
			}
		
		
		}
		
		
	}
		
	int imprime = 0;
	
	while(factoresFinal[imprime].base != '\0'){
		
		printf("Base: %d\n", factores2[imprime].base);
		printf("Exponente: %d\n", factores2[imprime].exponente);
		printf("-----------------\n");
		imprime++;
		
	}	

}

void main(){
	
	pideNumero();
	factoriza1();
	factoriza2();
	//guardaArray();
	
}
