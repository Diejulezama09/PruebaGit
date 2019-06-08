/* 
Problema 16: Hacer un menu que considere las siguientes opciones:
    Caso 1: Cubo de un número.
    Caso 2: Número par o impar.
    Caso 3: Salir.
 */

#include<stdio.h>
#include<math.h>

int main()
{
    int opcion, numero, cubo=0; 

    printf("\tBienvenido al menu de operaciones matematicas!\n");
    printf("1. Calcule el cubo de un numero\n");
    printf("2. Ingrese un numero. Se le dira si es par o impar\n");
    printf("3. Salir.\n");
    printf("Opcion: \n"); scanf("%i",&opcion);

    switch (opcion)
    {
    case 1:
        printf("Ingrese un numero: \n"); scanf("%i",&numero);
        cubo = pow(numero,3);
        printf("El cubo del numero %i es: %i",numero,cubo);
        break;

    case 2:
        printf("Ingrese un numero: \n"); scanf("%i",&numero);
        if (numero%2 == 0)
        {
            printf("El numero %i es par!",numero);
        }
        else
        {
            printf("El numero %i es impar!",numero);
        }
        break;
        
    case 3:
        printf("Adios!");
        break;

    default:
        printf("No ingreso una opcion valida!");
        break;
    }

    return 0;
}