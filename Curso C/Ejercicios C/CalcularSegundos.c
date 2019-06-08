/* 
    Calcular la cantidad de segundos que están incluidos en el número de horas, mminutos
    y segundos ingresados por el usuario.
 */

#include <stdio.h>

int main()
{
    int horas, minutos, seg, t1, t2, t3, total;

    printf("Ingrese el numero de horas: \n"); scanf("%i",&horas);
    printf("Ingrese el numero de minutos: \n"); scanf("%i",&minutos);
    printf("Ingrese el numero de segundos: \n"); scanf("%i",&seg);

    t1 = horas*3600;
    t2 = minutos*60;
    t3 = seg;

    total = t1+t2+t3;

    printf("La cantidad de segundos en %i horas, %i minutos y %i segundos es: %i\n",horas,minutos,seg,total);

    return 0;
}