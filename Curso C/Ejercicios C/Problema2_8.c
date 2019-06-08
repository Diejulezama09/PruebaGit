/* Problema 8: Ingresar por teclado el nombre, la edad y el sexo de cualquier persona e imprimir
solo si la persona es de sexo masculino y mayor de edad, el nombre de la persona. */

#include <stdio.h>
#include <string.h>

int main ()
{
    char nombre[30],sexo[20]; int edad;

    printf("Ingrese su nombre: \n"); gets(nombre);
    printf("Ingrese su sexo: \n"); gets(sexo);
    printf("Ingrese su edad: \n"); scanf("%i",&edad);

    if (strcmp(sexo,"masculino") == 0 && edad >=18)
    {
        printf("Es mayor de edad y de sexo masculino. Su nombre es %s",nombre);
    }
    
    return 0;
}