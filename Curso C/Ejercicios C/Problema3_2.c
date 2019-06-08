/* Problema 2: Digite un número. Si el número supera a 10, multiplique 
los 10  primeros numeros, sino, súmelos. */

#include<stdio.h>

int main()
{
    int numero, cont, suma=0, producto=1;

    printf("Ingrese el numero: \n"); scanf("%i",&numero);

    cont = 1;

    if (numero > 10)
    {
        while (cont <= 10)
        {
            producto *= cont;
            cont++;
        }

        printf("El producto de los 10 primeros numeros es: %i",producto);
    } 
    else
    {
        while (cont <= numero)
        {
            suma += cont;
            cont++;
        }

        printf("La suma es: %i",suma);        
    }
    
    return 0;
}