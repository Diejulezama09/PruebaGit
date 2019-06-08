/*  
    Arreglos en Estructuras
*/
#include <stdio.h>
struct perro
{
    char nombre[30];
    int edad;
    float peso;
}perros[2];
int main()
{
    for (int i = 1; i < 3; i++)
    {
        printf("%i Ingrese el nombre del perro: \n",i);
        scanf("%s",&perros[i].nombre);
        printf("%i Ingrese la edad en meses del perro: \n",i);
        scanf("%i",&perros[i].edad);
        printf("%i Ingrese el peso del perro: \n",i);
        scanf("%f",&perros[i].peso);
    }

    for (int i = 1; i < 3; i++)
    {
        printf("%i El nombre del perro es: %s\n",i,perros[i].nombre);
        printf("%i La edad en meses del perro es de: %i\n",i,perros[i].edad);
        printf("%i El peso del perro es: %.2f\n",i,perros[i].peso);
    }
    return 0;
}
