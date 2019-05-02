/*
Toma de decisiones if
operadores de igualdad      | Operadores de Relacion
==  x es igual que y            >   x es mayor que y
!=  x es diferente que y        <   x es menor que y
                                >=  x es mayor o igual que y
                                <=  x es menor o igual que y
*/

#include <stdio.h>

int main()
{
    int edad;
    printf("ingrese su edad\n");
    scanf("%d",&edad);
    if(edad >=18)
    {
       printf("eres mayor de edad\n"); 
    }
    else if (edad == 17)
    {
        printf("mal ahí perro, casi sos un macho alfa adulto\n");
    }
    else
    {
        printf("eres menor de edad\n");
    }
    

    return 0;  /*termina el programa*/
}