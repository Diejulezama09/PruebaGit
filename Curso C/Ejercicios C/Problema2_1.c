/* Probelma 1: Comprobar a través de un programa si un alumno aprobó o no
un examen (Aprueba si su nota es mayor a 10.5) */

#include <stdio.h>

int main()
{
    float examen;

    printf("INgrese la nota del examen: \n"); scanf("%f",&examen);

    if(examen >= 10.5)
    {
        puts("El alumno esta aprobado!"); //puts solo imprime dentro de un cndicional
    }

    return 0;
}