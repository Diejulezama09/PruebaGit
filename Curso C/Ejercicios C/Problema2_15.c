/* Problema 15: Hacer un programa que simule un cajero autómatico con un saldo
inicial de 1000 dolares. */

#include<stdio.h>

int main()
{
    int opcion;
    float saldo = 1000, agregar, retirar;

    printf("\tBienvenido a su cajero virtual!\n");
    printf("1. Ingresar dinero a la cuenta\n");
    printf("2. Retirar dinero de la cuenta\n");
    printf("3. Salir\n");
    printf("Opcion: \n"); scanf("%i",&opcion);

    switch (opcion)
    {
    case 1:
        printf("Cuanto dinero desea agregar a la cuenta: \n");
        scanf("%f",&agregar);
        saldo += agregar;
        printf("Su nuevo saldo es: %.2f",saldo);
        break;
    case 2:
        printf("Cuanto dinero desea retirar de la cuenta: \n");
        scanf("%f",&retirar);
        if (retirar > saldo)
        {
            printf("Ingreso un valor mayor a su saldo disponible!\n");
        }else
        {
            saldo -= retirar;
            printf("Su saldo actual es: %.2f",saldo);
        }
        break;
        
    case 3:
        break;    

    default:
        printf("Opcion invalida\n");
        break;
    }

    return 0;
}