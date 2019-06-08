/* 
    Conversión de Grados Celsius a Farenheit
 */


#include <stdio.h>

int main()
{

    float cel = 0, far = 0;
    printf("Ingrese la temperatura en grados Celsius: \n");
    scanf("%f",&cel);
    far = (cel * 1.8) + 32;
    printf("La conversión a Farenheit es: %.1f\n",far);

    return 0;
}