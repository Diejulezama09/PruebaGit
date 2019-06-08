/* Problema 6: Ingresar un número y calcular e imprimir su raiz cuadrada. Si el numero
es negativo imprimir el numero y unn mennsaje que diga "tiene raiz imaginaria." */

#include <stdio.h>
#include <math.h>

int main()
{
    float num,raizcuad;

    printf("Ingrese un numero \n"); scanf("%f",&num);
    raizcuad = sqrt(num);

    if (num >= 0)
    {
        printf("La raiz cuadrada de %.1f es: %.2f\n",num,raizcuad);
    } else
    {
        printf("El numero %.1f tiene raiz imaginaria \n",num);
    }
        
    return 0;
}