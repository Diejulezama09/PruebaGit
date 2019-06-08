/* 
    Estruturas Anidadas en C
*/
#include <stdio.h>
#define lenght 2

struct owner
{
    char nombre [20];
    char direccion [30];
};

struct dog
{
    char nombre[20];
    int edadMeses;
    struct owner ownerDogs;    
}dogs[lenght]; 

int main()
{
    for (int i = 0; i < lenght; i++)
    {
        printf("Ingrese el nombre del perro\n");
        scanf("%s",dogs[i].nombre);
        printf("Ingrese la edad del perro en mesess\n");
        scanf("%i",&dogs[i].edadMeses);
        printf("Ingrese el nombre del dueño\n");
        scanf("%s",&dogs[i].ownerDogs.nombre);
        printf("Ingrese domicilio del dueño\n");
        scanf("%s",dogs[i].ownerDogs.direccion);
    }

    for (int i = 0; i <= 1; i++)
    {
        printf("El nombre del primer perro es %s y tiene %i meses. Su dueño es %s y vive en %s",dogs[i].nombre,dogs[i].edadMeses,dogs[i].ownerDogs.nombre,dogs[i].ownerDogs.direccion);
        printf("El nombre del segundo perro es %s y tiene %i meses. Su dueño es %s y vive en %s",dogs[i].nombre,dogs[i].edadMeses,dogs[i].ownerDogs.nombre,dogs[i].ownerDogs.direccion);
    }
    
    return 0;
}