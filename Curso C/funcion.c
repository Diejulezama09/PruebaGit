/*
    Funciones básicas en C
*/

#include <stdio.h> // Directiva include
// Función main inicia la ejecución del programa
//    void saludo()
//    {
//        printf("Hola codigofacilito\n");
//        return;
//    }
int suma();
int main()
{   
    printf("%i\n",suma());

    return 0; // INdica que le programa se terinó con éxito
}//Fin de la función main

int suma()
{
    int num1 = 12;
    int num2 = 4;
    int suma = num1 + num2;
    return suma;
}