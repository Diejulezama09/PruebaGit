/* 
    Asignación Dinámica de Memoria en C
        --Liberar memoria inámica
        free () fgets()
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define lenght 2

int size;
struct dogs
{
    char name[20];
    char *p_name;
}dogs[lenght];

int main ()
{
    for (int i = 0; i < lenght; i++)
    {
        printf("Ingrese el nombre del perro\n");
        fgets(dogs[i].name,20,stdin);
        size = strlen(dogs[i].name);
        printf("%i\n",size);
        dogs[i].p_name = malloc(size * sizeof(char));
        if (NULL == dogs[i].p_name)
        {
            printf("Error al asignar memoria\n");
        }
        else
        {
            strcpy(dogs[i].p_name,dogs[i].name);            
        }
        
    }
        
    for (int i = 0; i < lenght; i++)
    {
        printf("El mombre del perro es %s\n",dogs[i].p_name);
    }
    
    return 0;
}