/* 
    Programa que calcula el sueldo;
 */

#include <stdio.h>

int main()
{
    float dias_trabajados, valor_hora, horas, sueldo;

    printf("Calcule su sueldo bruto!\n");
    
    printf("\nIngrese la cantidad de horas trabajadas por dia: \n"); scanf("%f",&horas);
    printf("¿Cuanto cobra por hora?(Ingrese solo numeros): \n"); scanf("%f",&valor_hora);
    printf("Ingrese la cantidad de dias que trabaja al mes: \n"); scanf("%f",&dias_trabajados);

    sueldo = horas*valor_hora*dias_trabajados;

    printf("Su sueldo bruto es: %.2f",sueldo);

    return 0;
}