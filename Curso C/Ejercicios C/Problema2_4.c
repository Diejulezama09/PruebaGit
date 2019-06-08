/* Problema 4: Determinar si un numero es par o impar. */

#include <stdio.h>

int main()
{
    int num;

    printf("Ingrese un numero: \n"); scanf("%i",&num);

    if (num % 2 == 0)
    {
        puts("El numero es par!\n");
    }
    if (num % 2 != 0)
    {
        puts("El numero es impar!\n");
    }
    
    return 0;
}