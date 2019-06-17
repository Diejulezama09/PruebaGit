/* DO WHILE
Saludo y mostrar los 10 primeros numeros */

#include <stdio.h>

// int main()
// {
//     char opc;

//     do
//     {
//         fflush(stdin);
//         printf("Hola!\n");
//         printf("Ingrese la letra 's' para saludar nuevamente: \n");
//         scanf("%c",&opc);
//     } while (opc == 's' || opc == 'S');
    

//     return 0;
// }

int main()
{
    int i = 1;

    do
    {
        printf("%i. \n",i);
        i++;
    } while (i <= 10);
    

    return 0; 
}