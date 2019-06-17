// 14. Hacer un buvle do while para imprimir las letras minusculas del alfabeto.

#include <stdio.h>

int main()
{
    char letra = 'a'; // 61h

    do
    {
        printf("%c. \n",letra); // a
        letra++; // b c d e f g h i j k l m n o p q r s t u v w x y z.
    } while (letra <= 'z');
    

    return 0;
}