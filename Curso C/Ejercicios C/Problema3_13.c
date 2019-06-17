/* Problema 13: Hacer un programa que imprima la suma de todos los numeros pares que hay 
desde el 1 hasta n, y diga cuantos números hay. */

#include <stdio.h>

int main ()
{
    int numero, i, suma=0, numerosP=0;

    printf("Especifique el numero hasta el cual se debe sumar los pares: \n");
    scanf("%i",&numero);

    for (i = 1; i <= numero; i++)
    {
        if (i%2 == 0)
        {
            suma += i;
            numerosP++;
        }
    }
    
    printf("Hay %i numeros pares. La suma de los pares es: %i",numerosP,suma);

    return 0;
}