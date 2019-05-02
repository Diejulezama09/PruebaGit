#include <stdio.h>
#include <stdlib.h>

int main()
{
    float maximo;
    float minimo;
    float acumulador;
    float auxiliarInt;
    int i;

    // Solicito el primer numero, el cual por ser el primero sera tanto el
    // maximo como el minimo y el primer numero a ser acumulado.

    printf("Ingrese un numero: ");
    scanf("%f",&auxiliarInt);
    maximo = auxiliarInt;
    minimo = auxiliarInt;
    acumulador = auxiliarInt;

    // Solicito el resto de los numeros
    for(i=0;i<4;i++)
    {
        printf("ingrese un numero: ");
        scanf("%f",&auxiliarInt);
        acumulador = acumulador + auxiliarInt;

        if(auxiliarInt > maximo)
        {
            maximo=auxiliarInt;
        }
        if(auxiliarInt < minimo)
        {
            minimo=auxiliarInt;
        }
    }

    printf("El minimo es: %.1f\n",minimo);
    printf("El maximmo es: %.1f\n",maximo);
    printf("El promedio es: %.1f\n",acumulador/5);

    return 0;
}