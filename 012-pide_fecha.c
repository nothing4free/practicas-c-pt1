/* 
 -----------------------------------------------------------------------------------------------------------------
   DISCLAIMER:
   Este codigo puede ser reutilizado, redistribuido y/o modificado siempre que se de credito a su autor original:
   Jorge Martinez Hurtado (jorgemhdev) | 2020

   Este programa recibe un mes y un dia por entrada de usuario y evalua si el dia pertenece al mes seleccionado.
   Si es asi, muestra la fecha por pantalla. Si no, muestra un mensaje de error.
 -----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>


int main(){
	//declaro la variable que contendra el mes y le asigno el valor de la entrada de usuario
	int mes;
	printf("Introduzca el mes...\n");
	scanf("%d", &mes);
	if(mes < 1 || mes > 12){ //si introduce un mes no valido, muestra un mensaje de error
		printf("ERROR: mes no existente. Introducza un numero comprendido entre 1 y 12.\n");
		return 1; //terminamos ejecucion del programa
	}
	
	//delcaro la variable que contendra el dia y le asigno el valor de la entrada de usuario
	int dia;
	printf("Introduzca el dia...\n");
	scanf("%d", &dia);
	if(dia < 1){ //si el dia es menor que 1, devuelve un mensaje de error
		printf("ERROR: dia no existente. Introduzca un numero comprendido entre 1 y 31.\n");
		return 1;
	}
	if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
		if(dia > 31){ //en los meses con 31 dias, si el valor del dia es superior a 31, muestra un mensaje de error
			printf("ERROR: dia no existente en el mes introducido.\n");
			return 1; //terminamos ejecucion del programa
		}
	}
	if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
		if(dia > 30){ //en los meses con 30 dias, si el valor del dia es superior a 30, muestra un mensaje de error
			printf("ERROR: dia no existente en el mes introducido.\n");
			return 1; //terminamos ejecucion del programa
		}
	}
	if(mes == 2){
		if(dia > 28){ //en febrero (mes 2), si el valor del dia es superior a 28, muestra un mensaje de error
			printf("ERROR: dia no existente en el mes introducido.\n");
			return 1; //terminamos ejecucion del programa
		}
	}
	//si todo ha ido bien, esta linea de codigo se ejecuta y muestra la fecha por pantalla.
	printf("\nLa fecha en formato DD/MM es: %d / %d\n", dia, mes);
}
//Jorge Martinez Hurtado (jorgemhdev) | 2020
