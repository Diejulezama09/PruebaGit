#include <stdio.h>

int main()
{
    int num1, num2, suma = 0, mult = 0, resta = 0;
    float div = 0;
    
    printf("Digite dos numeros: \n");
    scanf("%i %i",&num1,&num2);
    
    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / (float)num2;

    printf("La suma es: %i \n",suma);
    printf("La resta es: %i \n",resta);
    printf("La multiplicacion es: %i \n",mult);
    printf("La division es: %.4f \n",div);

    return 0;
}