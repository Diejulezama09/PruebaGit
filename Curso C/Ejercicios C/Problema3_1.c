// Suma de los n primeros números.

#include <stdio.h>

int main()
{
    int cont, n, suma=0;

    printf("Ingrese el total de numeros a sumar: \n"); scanf("%i",&n);

    cont = 1;

    while (cont <= n)
    {
        suma += cont; // suma = 1 3 6 10 15
        cont++; // 1 2 3 4 5 
    }
    
     printf("La suma es: %i",suma);

    return 0;
}