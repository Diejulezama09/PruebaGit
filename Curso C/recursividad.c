/*
    Funciones recursivas en C
*/

#include <stdio.h>
long factorial(long numero);
int main()
{
    /*
        Ejemplo del factorial de un número
        5!=5*4*3*2*1 o 5*4!
        4!=4*3*2*1 o 4*3!
        3!=3*2*1 o 3*2!
        2!=2*1 2*1!
        1!=1
        0!=1
    */
   int numero;
   printf("ingresa un numero\n");
   scanf("%i",&numero);
   for(int i = 0; i <= numero; i++)
   {
       printf("%ld\n",factorial(i));
   }
   return 0;
}
long factorial(long numero)
{
    if(numero <= 1)
    {
        return 1;
    }
    else 
    {
        return(numero * factorial(numero - 1));
    }
}