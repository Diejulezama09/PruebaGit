/*
    Arreglos en C
*/

#include <stdio.h>//directiva include
//funcion main inicia la ejecución del programa.

int main()
{
    //Col ...0 1 2
    //fila0 |5 3 1
    //fila1 |6 4 2
    int multi[2][3] = {{5,3,1},{6,4,2}};
    printf("%i\n",multi[1][1]);

    //int sizeA;
    //printf("Tamaño del arreglo\n");
    //scanf("%i",&sizeA);
    //int age[sizeA];
    //for(int i = 0; i < sizeA; i++)
    //{
    //    printf("ingrese el valor: %i\n",i+1);
    //    scanf("%i", &age[i]);
    //}
    //printf("Los valorrers del arreglo son: \n");
    //for(int i = 0; i < sizeA; i++)
    //{
    //    printf("%i-", age[i]);
    //}

    return 0;//indica que el programa se terminó con éxito.
}//Fin de la función main.