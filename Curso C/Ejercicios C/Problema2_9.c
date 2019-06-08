/* Problema 9: Hacer un programa que borre la pantalla al ingesar 1. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tecla;

    printf("Programa de borrado de pantalla!!!!!! \n");
    printf("Programa de borrado de pantalla!!!!!! \n");
    printf("Programa de borrado de pantalla!!!!!! \n");
    printf("Ingrese el numero 1: \n"); scanf("%c",&tecla);

    if (tecla == '1')
    {
        system("cls"); // Limpia lo ingresado en pantalla.
        printf("Ha funcionado el limpiado de pantalla! \n");
    } else
    {
        fflush(stdin); // Limpia el buffer para poder almacenar mas información.
        printf("NO ha funcionado el limpiado de pantalla! \n");
        printf("Por faavor ingrese el numero 1: \n"); scanf("%c",&tecla);
        
        if (tecla == '1')
        {
            system("cls");
        } else
        {
            printf("No funcino! Adios!");
        }
                
    }
    
    return 0;
}