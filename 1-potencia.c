/* 
 -----------------------------------------------------------------------------------------------------------------
   DISCLAIMER:
   Este codigo puede ser reutilizado, redistribuido y/o modificado siempre que se de credito a su autor original:
   Jorge Martinez Hurtado (jorgemhdev) | 2020

   Este programa eleva una base a un exponente, ambos parametros obtenidos por entrada de usuario. 
   Tambien muestra en pantalla los resultados de cada uno de los productos individuales. 
   
   Por comodidad a la hora de interpretar el codigo, divido su funcionamiento en funciones. 
   A mi parecer, asi se entiende mejor el funcionamiento del programa.
 -----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

//creamos variables globales base y exponente
int base;
int exponente;

void leeNumeros(){

//la funcion leeNumeros obtiene la base y el exponente mediante entrada de usuario por teclado	

	printf("Introduce la base...\n");
	scanf("%d", &base);
	
	printf("Introduce el exponente...\n");
	scanf("%d", &exponente);
	
	printf("\n");
	printf("A continuacion calcularemos %d elevado a %d.\n", base, exponente);

}

void calculaPotencia(){

/* La funcion calculaPotencia multiplica la base n veces, donde n es el exponente introducido por el usuario.
   A su vez, muestra cada uno de los resultados de las multiplicaciones realizadas hasta llegar al resultado final. */
   	
	printf("\n");
	printf("--------------------------------\n");
	printf("\n");
	
	int resultado = 1;
	int i = 0;
	int paso = 1;
	
	while(i < exponente){
					
		resultado = resultado * base;
		printf("%d ^ %d = %d\n", base, paso, resultado);
		paso++;
		i++;
		
	}
	
	//En la siguiente secuencia se muestra separado el resultado final de la potencia.
	
	printf("\n");
	printf("--------------------------------\n");
	printf("\n");
	printf("RESULTADO FINAL: %d ^ %d = %d\n", base, exponente, resultado);

}

void main(){
	
	//en la funcion main, simpelemente se llama a las dos funciones anteriores.
    
	leeNumeros();
    calculaPotencia();
    
}
