/* 
    Sacar la hipotenusa de un triangulo rectangulo,
    pidiendo al usuario el valor de los catetos.
 */
#include<stdio.h>
#include<math.h>

int main()
{
    float cat1, cat2, hipotenusa;
    printf("Digite el valor de los dos catetos del triangulo rectangulo: ");
    scanf("%f %f",&cat1,&cat2);
    hipotenusa = sqrt(pow(cat1,2)+pow(cat2,2));
    printf("La hipotenusa del triangulo rectangulo es igual a: %.2f",hipotenusa);

    return 0;
}