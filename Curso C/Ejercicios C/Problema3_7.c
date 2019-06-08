// Problema 7: Suma de los 10 primeros numeros pares.

#include <stdio.h>

// int main()
// {
//     int i, suma = 0;

//     for (i = 1; i <= 100; i++)
//     {
//         if (i%2 == 0)
//         {
//             suma += i;
//         }
//     }

//     printf("La suma de los numeros pares: %i",suma);    

//     return 0;
// }
int main()
{
    int i, suma = 0;

    for (i = 0; i <= 100; i+=2) //i = i +2
    {
        suma += i;
    }

    printf("La suma de los numeros pares: %i",suma);    

    return 0;
}