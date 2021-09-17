/*       Programacion Básica
Operaciones aritméticas con variables de diferentes tipos

Autor: Jesus Martinez Javier
Modificado por: 
Descripción del programa: Seccion 2
• Modifica el programa para que ahora el usuario pueda introducir los valores. 
Cuidado con las divisiones.*/

/*Bibliotecas*/
#include<stdio.h>
//Declaracion de variables.
float a, b, sum, res, mul, div, div2;
//Estructura main
int main()
{
    //Pedir los valores de los dos números
    printf("Dame el valor de a \n");
    scanf("%f", &a);
    printf("Dame el valor de b \n");
    scanf("%f", &b);
    //Operaciones matematicas
    sum = (a + b);
    res = (a - b);
    mul = (a * b);
    div = (a / b);
    printf("Operaciones básicas\n");
    //Resultado mostrado en pantalla 
printf("La suma de los dos números es: %.2f\n", sum);
printf("La resta de los dos números es: %.2f\n", res);
printf("La multiplicación de los dos números es: %.1f\n", mul);
printf("La división de los dos números es: %.2f\n", div);

//Parar el programa
return 0;
}