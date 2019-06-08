/* Problema 12: Seleccionar un tipo de vehiculo e  indicar el peaje
a pagar según un valor númerico:
1 - turismo, peaje = $500
2 - autobus, peaje = $3000
3 - motocicleta, peaje = $300
Caso contrario - vehiculo no autorizado */

#include <stdio.h>

int main()
{
    int vehiculo; 
    
    printf("Indique su vehiculo. Ingrese 1 para turismo. Ingrese 2 para autobus o ingrese 3 para motocicleta.\n");
    scanf("%i",&vehiculo);
    
    switch (vehiculo)
    {
    case 1:
        printf("Debe pagar $500 pesos de peaje.");
        break;
    case 2:
        printf("Debe pagar $3000 pesos de peaje.");
        break;
    case 3:
        printf("Debe pagar $300 pesos de peaje.");
        break;
    
    default:
        printf("Vehiculo no autorizado.");
        break;
    }

    return 0;
}