/* Problema 10: Una distribuidora de motocicletas tiene una promoción  de fin de año
que consiste en lo siguiente. Las motos marca Honda tienen un descuento del 5%, las
marcas Yamaha del 8% y las Suzuki del 10%. Las otras marcas tienen un descuento
del 2%. */

#include <stdio.h>
#include <string.h>

int main()
{
    char marca[20]; float precio, precioD, precioF;

    printf("Ingrese la marca de la motocicleta(en minuscula): \n"); gets(marca);
    printf("Ingrese el valor de la motocicleta: \n"); scanf("%f",&precio);

    if (strcmp(marca,"honda")==0)
    {
        precioD = precio*0.05;
        precioF = precio - precioD;
        printf("Tiene un descuento del 5 porciento. El valor final es %.1f",precioF);
    }
    else if (strcmp(marca,"yamaha")==0)
    {
        precioD = precio*0.08;
        precioF = precio - precioD;
        printf("Tiene un descuento del 8 porciento. El valor final es %.1f",precioF);
    }
    else if (strcmp(marca,"suzuki")==0)
    {
        precioD = precio*0.10;
        precioF = precio - precioD;
        printf("Tiene un descuento del 10 porciento. El valor final es %.1f",precioF);
    } else
    {
        precioD = precio*0.02;
        precioF = precio - precioD;
        printf("Tiene un descuento del 2 porciento. El valor final es %.1f",precioF);
    }    

    return 0;
}