/*
    Funciones de retorno en C
*/

#include <stdio.h>

int suma();
int num3 = 2;
int main()
{
    int num1,num2;
    printf("Ingrese el primer valor\n");
    scanf("%i",&num1);
    printf("Ingrese el segundo valor\n");
    scanf("%i",&num2);
    printf("El resultado de la suma es: %i\n",suma(num1,num2));

    return 0;
}

int suma(int num1, int num2)
{
    int suma = num1 + num2 + num3;
    return suma;
}