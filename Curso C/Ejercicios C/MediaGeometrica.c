/* 
    Calculo de la media geometrica de tres numeros.
 */

#include <stdio.h>
#include <math.h>

int main ()
{
    float n1,n2,n3,mediaGeo;

    printf("Ingrese el valor de 3 numeros: \n"); scanf("%f %f %f",&n1,&n2,&n3);

    mediaGeo = cbrt(n1*n2*n3);

    printf("La media geometrica de los 3 numeros ingresados es: %.2f",mediaGeo);

    return 0;
}