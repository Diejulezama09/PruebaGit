/* Problema 7: INgresar por teclado el nombre y el signo de cualquier persona e imprima
el nombre solo si la persona es de Aries, caso cosa contrario imprima no es signo Aries. */

#include <stdio.h>
#include <string.h>

int main()
{
    char nombre[30],signo[20];

    printf("Ingrese su nombre: \n");
    gets(nombre);
    printf("Ingrese su signo: \n");
    gets(signo);

    if (strcmp(signo,"aries") == 0)
    {
        printf("Es signo aries. Su nombre es %s \n",nombre);
    } else
    {
        printf("No es signo Aries.");
    }

    return 0;
}