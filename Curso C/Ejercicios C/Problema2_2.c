/* Problema 2: Comprobar si el número ingresado es positivo o negativo. */

#include <stdio.h>

int main()
{   
    int num;

    printf("Ingrese un numero: \n"); scanf("%i",&num);

    if (num >= 0)
    {
        printf("El numero %i es positivo. \n",num);
    } else
    {
        printf("El numero %i es negativo. \n",num);
    }

    return 0;
}