/* Expresión Condicional: El operador '?'
Sintaxis:
    
    Condicion ? Expresion11: Expresion2  */
// Numero par

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Ingrese un numero: \n"); scanf("%i",&numero);

    (numero%2 == 0) ? printf("El numero es par!") : printf("El numero es impar!"); //Se una principalmente para funciones
    // (numero%2 == 0) ? funcion1() : funcion2();
    

    return 0;
}