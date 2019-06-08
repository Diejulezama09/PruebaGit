/* Programa que calcula área de trapecios */

#include <stdio.h>
#include <math.h>

int main ()
{
    int base_M, base_m, area, altura;

    printf("Ingrese el valor de la base mayor: ");scanf("%i",&base_M);
    printf("Ingrese el valor de la base menor: ");scanf("%i",&base_m);
    printf("Ingrese el valor de la altura: ");scanf("%i",&altura);

    area = ((base_M+base_m)*altura)/2;

    printf("\nEl area del trapecio es: %i",area);

    return 0;
}