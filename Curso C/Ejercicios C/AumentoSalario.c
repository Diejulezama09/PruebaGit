/* 
    Calcular le nuevo salrio de un obrero si obtuvo un incremento 
    del 25% sobre su salario anterior.
 */

#include <stdio.h>

int main()
{
    float salario, aumento, salarioFinal;

    printf("Ingrese su salario: \n"); scanf("%f",&salario);

    aumento = salario * 0.25;

    salarioFinal = salario + aumento;

    printf("Su salario con el 25 porciento de aumento es: %.2f",salarioFinal); 

    return 0;
}