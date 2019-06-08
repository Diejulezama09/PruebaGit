// Problema 10: Factoriql de un número.

#include <stdio.h>

int main()
{
    int i, numero, factorial = 1;

    printf("Ingrese el numero a calcular: \n"); scanf("%i",&numero);

    for (i = 1; i <= numero; i++)
    {
        factorial *= i;
    }
    
    printf("Le factorial del numero ingresado es: %i",factorial);

    return 0;
}