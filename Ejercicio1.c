/*       Programacion Básica 
Ejercicio 1 

Autor: Jesus Martinez Javier
Modificado por: 
Descripción del programa: 
Realiza un menú númerico de opciones, utiliza la instrucción if para cada opción, en cada o
pción se debe de  imprimir el mensaje “has seleccionado la opción: #de opción” */

/*Bibliotecas*/
#include<stdio.h>
/*Declaracion de variables*/

/*Estructura main*/
int main()
{
    int elige;
    printf("1------> Opcion 1\n");
    printf("2------> Opcion 2\n");
    printf("3------> Opcion 3\n");
    printf("\nDame tu opcion que elegistes\n");
    scanf("%d",&elige);
if (elige==1)
        {
        printf("Tu eleccion fue Opcion 1\n");
        }
    else
    if (elige==2)
        {
            printf("Tu eleccion fue Opcion 2\n");
        }
    else
    if (elige==3)
            {
            printf("Tu eleccion fue Opcion 3\n");
        }
    return 0;
}