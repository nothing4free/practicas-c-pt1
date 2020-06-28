## Prácticas en C, parte I
Estos son algunos ejercicios básicos de programación en C para practicar estructuras de control y asentar conceptos básicos. Estos ejercicios no abarcan conceptos como manipulación de ficheros o memoria dinámica. Corresponden a mi primer año de Ingeniería del Software en U-Tad.<br> 
La herramienta usada para compilar el código es TDM-GCC 4.9.2 (64-Bit).

## Enunciados de los ejercicios
### Ejercicio 1
Escribir un programa que lea dos números enteros. El primero es base entera positiva y el segundo un valor máximo. Calcula e imprime la secuencia de potencias de la base entera positiva (primer dato introducido) y que sean menores que el valor máximo (segundo dato introducido).

### Ejercicio 2
Escribir un programa que lea dos números enteros positivos y calcule su máximo común divisor.

### Ejercicio 3

Escribir un programa que lea dos números enteros positivos y calcule su mínimo común múltiplo.

### Ejercicio 4

Escribir un programa que calcule y visualice el más grande, el más pequeño y la media de n números (n>0). El valor de n se solicitará al principio del programa y los números serán introducidos por el usuario.

### Ejercicio 5

Determinar si un número dado por el usuario es primo o no.

### Ejercicio 6

Escriba un programa que pida una letra al usuario y luego llame a una función que imprima el carácter siguiente en la tabla ASCII.

### Ejercicio 7

Suponiendo que un programa ha leído unv alor entero mínimo min y un valor entero máximo max, escribir un bucle for que muestre por pantalla una tabla de valores y valores al cuadrado para todos los números copmredidos entre min y max.
Ejemplo: si min vale 9 y max vale 12, el resultado sería:

x     x*x<br> 
9     81<br> 
10    100<br> 
11    121<br> 
12    144<br> 

### Ejercicio 8

Realiza el código de la función LimpiarCaracter(), que recibe tres argumentos: una cadena de caracteres y dos caracteres c1 y c2. La función se encargará de buscar en la cadena todas las ocurrencias del primero de los caracteres (c1) y sustituirlo por el segundo (c2) en todos los casos en los que se haya encontrado. Además, la función debe devolver:<br>
• el valor 0 si no ha encontrado ninguna ocurrencia de c1<br>
• el número de veces que lo ha encontrado, caso de que así haya sido.<br>

### Ejercicio 9

Escribir un programa completo (cabecera, includes...) que realice las siguientes operaciones:<br>
• Declarar una variable x (tipo double) y otra n (tipo int).<br>
• Leer el valor de ambas variables mediante scanf.<br>
• Calcular x^n a base de multiplicar x tantas veces como indique n.<br>
• Mostrar el resultado utilizando un formato que sólo muestre 2 cifras en la parte decimal.<br>

### Ejercicio 10

Realizar un programa en C que reconozca si una palabra es un palíndromo. Una palabra es un palíndromo si se lee igual de izquierda a derecha que de derecha a izquierda.<br> 
Para reconocer si una palabra es o no un palíndromo utilizar una función. Para simplificar el problema, escribir el texto todo en mayúsculas y sin acentos.<br>
int Palindromo (char palabra[]):<br>
• Devuelve 1: si la cadena “palabra” es palíndromo. Se ignorarán los espacios en blanco. Por ejemplo: “DABALE ARROZ A LA ZORRA EL ABAD” o “SALTA LENIN EL ATLAS” son palíndromos.<br>
• Devuelve 0: si no lo es.<br>

## ¿Puedo utilizar este código?
Este código puede ser reutilizado, redistribuido y/o modificado siempre que se dé crédito a su autor original:<br>
<b>Jorge Martínez Hurtado (jorgemhdev) | 2020</b>
