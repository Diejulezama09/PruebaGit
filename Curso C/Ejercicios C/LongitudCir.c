// Calculo de la longitud de una circunferencia

#include <stdio.h>
#include <math.h>

int main()
{
    float radio, longitudCir;
    printf("Ingrese el valor del radio de la circunferencia: \n");
    scanf("%f",&radio);
    longitudCir = 2*M_PI*radio;
    printf("El valor de la circunferencia del circulo es: %.2f",longitudCir);

    return 0;
}