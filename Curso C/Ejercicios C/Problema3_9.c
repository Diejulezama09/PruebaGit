// Problema 9: Determinar si un número es primo o no.

#include <stdio.h>

int main()
{
    int i, numero, cont=0;

    printf("Ingrese un numero: \n"); scanf("%i",&numero);

    for (i = 1; i <= numero; i++)
    {
        if (numero%i == 0)
        {
            cont++;
        }
    }
    
    if (cont > 2)
    {
        printf("El numero es compuesto!\n");
    }
    else
    {
        printf("El numero es primo!\n");
    }
    
    return 0;
}