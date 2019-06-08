/* Problema 5: Calcular el mayor de dos numeros leidos del teclado
y visualizarlo en pantalla. */

#include <stdio.h>

int main ()
{
    int num1,num2;
    
    printf("Ingrese dos numeros: \n"); scanf("%i %i",&num1,&num2);

    if (num1 > num2)
    {
        printf("El mayor es %i",num1);
    }
    else if(num2 > num1)
    {
        printf("El mayor es %i",num2);
    } else
    {
        printf("Ambos numeros son iguales");
    }
    

    return 0;
}