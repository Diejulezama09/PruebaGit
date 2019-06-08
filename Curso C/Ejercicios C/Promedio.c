/* Calculo del promedio de 3 numeros */

#include <stdio.h>

int main(){

    float num1, num2, num3, promedio;
    printf("Ingrese el primer valor: \n"); scanf("%f",&num1);
    printf("Ingrese el segundo valor: \n"); scanf("%f",&num2);
    printf("Ingrese el tercer valor: \n"); scanf("%f",&num3);
    
    promedio = (num1+num2+num3)/3;

    printf("El promedio de los valores ingresados es: %.2f",promedio);

    return 0;
}