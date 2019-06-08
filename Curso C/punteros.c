/*
    Apuntadores en C
        "Llamada a funciones por Referencia"
*/

#include <stdio.h>
void cubo(int *n);
int main()
{
    int num = 5;
    printf("Valor orginal %i\n",num);
    cubo(&num);
    printf("El nuevo valor %i\n",num);

    return 0;
}
void cubo(int *n)
{
    *n = *n * *n * *n;
}