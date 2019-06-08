/*
    Estructuras en C
*/
#include <stdio.h>
struct perro
{
    char nombre[30];
    int edadMeses;
    float peso;
}perro1={"Torino",10,3.50},
perro2={"Lucy",4,2.30};

int main()
{
    printf("El peso de %s es %.2fKg y tiene %i meses\n", perro2.nombre, perro2.peso, perro2.edadMeses);
    return 0;
}