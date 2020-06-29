## Prácticas en C, parte I
Estos son algunos ejercicios básicos de programación en C para practicar estructuras de control y asentar conceptos básicos como arrays o punteros. Estos ejercicios no abarcan conceptos como manipulación de ficheros o memoria dinámica, y corresponden a mi primer año de Ingeniería del Software en U-Tad.<br> 
La herramienta usada para compilar el código es TDM-GCC 4.9.2 (64-Bit).

## Enunciados de los ejercicios
### Ejercicio 1
Escribir un programa que lea dos números enteros. El primero es base entera positiva y el segundo un valor máximo. Calcula e imprime la secuencia de potencias de la base entera positiva (primer dato introducido) y que sean menores que el valor máximo (segundo dato introducido).<br>

### Ejercicio 2
Escribir un programa que lea dos números enteros positivos y calcule su máximo común divisor.<br>

### Ejercicio 3
Escribir un programa que lea dos números enteros positivos y calcule su mínimo común múltiplo.<br>

### Ejercicio 4
Escribir un programa que calcule y visualice el más grande, el más pequeño y la media de n números (n>0). El valor de n se solicitará al principio del programa y los números serán introducidos por el usuario.<br>

### Ejercicio 5
Determinar si un número dado por el usuario es primo o no.<br>

### Ejercicio 6
Escriba un programa que pida una letra al usuario y luego llame a una función que imprima el carácter siguiente en la tabla ASCII.<br>

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

### Ejercicio 11
Escribir una función EliminarVocales(char cadena[]) que reciba una cadena del programa principal y la transforme en otra (generalmente más corta) donde no estén las vocales.<br>
Si recibe, por ejemplo, la cadena "Ordenador", la debe transformar en la cadena "rdndr".<br>

### Ejercicio 12
Escribir un programa que pida una fecha en dos variables: día y mes.<br>
• Primero se debe pedir el mes, validando que se encuentra entre 1 (enero) y 12 (diciembre).<br>
• Luego se pedirá el día, validando que se encuentra entre 1 y 31, entre 1 y 30, o entre 1 y 28, dependiendo del valor del mes.<br>
• Finalmente escribir por pantalla la fecha leída.<br>
Notas:<br>
• Se considera que el año no es bisiesto.<br>
• Validar implica comprobar si el valor introducido es válido y en caso de que no lo sea, solicite de nuevo otro valor.<br>

### Ejercicio 13

Escribir un programa que reciba dos años, y determine todos los bisiestos comprendidos entre los mismos.<br>

### Ejercicio 14

Escribir un programa que solicite al usuario la cantidad de números n que va a introducir, debiendo validar que n sea un valor positivo. A continuación, vaya solicitando tantos números enteros como haya indicado el usuario con n, y muestre por pantalla los números que sean múltiplos de 3. Finalmente, deberá mostrar al usuario la media de los valores que no son múltiplos de 3.

### Ejercicio 15

(ISSUE OPEN) Realizar el Ejercicio 14, pero sin emplear vectores.

## ¿Puedo utilizar este código?
Este código puede ser reutilizado, redistribuido y/o modificado siempre que se dé crédito a su autor original:<br>
<b>Jorge Martínez Hurtado (jorgemhdev) | 2020</b>
