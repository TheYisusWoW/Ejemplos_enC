/*       Programacion Básica 
Operaciones aritméticas con variables de diferentes tipos

Autor: Jesus Martinez Javier
Modificado por: 
Descripción del programa: 
El programa debe de estar comentado para tú “yo del futuro” 
• Declara una variable de tipo entero. Con valor asignado 
• Declara una variable de tipo decimal (float). Con valor asignado
• Con esas variables realiza las operaciones aritméticas básicas (suma, resta multiplicación y división). 
• Imprime el resultado de cada operación de manera ordenada*/

/*Bibliotecas*/
#include<stdio.h>
//Declaracion de variables.
int a = 7;
float b = 11.69;
float sum, res, mul, div;
//Estructura main
int main()
{
printf("                Operaciones aritméticas\n");
sum = a + b;
res = a - b;
mul = (a*b);
div = (a/b);
printf("La suma de dos numeros es: %.3f\n", sum);
printf("La resta de dos numeros es: %.2f\n", res);
printf("La multiplicacion de dos numeros es: %.3f\n", mul);
printf("La division de dos numeros es: %.3f\n", div);
 return 0;
}