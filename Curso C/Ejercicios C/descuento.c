/* 
    Una tienda ofrece un descuento del 15% sobre el total de la compra 
    y un cliente desea saber cuánto deberá pagar finalmente por su compra.
 */

#include <stdio.h>

int main()
{
    float importe, descuento, importeConDes;

    printf("Calcule el importe final a pagar con el 15 porciento de descuento\n");
    printf("Ingrese el valor a pagar: \n"); scanf("%f",&importe);

    descuento = (importe * 15)/100;

    importeConDes = importe - descuento;

    printf("El importe final es: %.1f",importeConDes); 

    return 0;
}