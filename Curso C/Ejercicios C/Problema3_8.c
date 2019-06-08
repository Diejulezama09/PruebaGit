/* Problema 8: Hacer un arbol de '*' del tipo:
Ejemplo:
+
**
***
****
*****
*/

#include <stdio.h>

int main(){
	int numfilas,i,j;
	
	printf("Digite el numero de filas: ");scanf("%i",&numfilas);
	
	for(i=0;i<numfilas;i++)
    {
		for(j=0;j<=i;j++)
        {
			printf("*");
		}
		printf("\n");
	}	
	
	return 0;
}