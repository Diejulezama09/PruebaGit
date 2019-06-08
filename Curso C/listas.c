/* 
    Listas Enlazadas: Estruturas autoenlazadas llamadas nodos.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    char *nombre;
    struct nodo *sig;
}libro;

libro *listaLibro(libro *lista)
{
    lista = NULL;
    return lista;
}

libro *agregarLibro(libro *lista, char *nombre)
{
    libro *nuevoLibro, *aux;
    nuevoLibro = (libro*)malloc(sizeof(libro));
    nuevoLibro->nombre = nombre;
    nuevoLibro->sig = NULL;
    if (lista == NULL)
    {
        lista = nuevoLibro;
    }
    else
    {
        aux = lista;
        while (aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nuevoLibro;
    }
    return lista;
}

int main()
{
    libro *lista = listaLibro(lista);
    lista = agregarLibro(lista, "HTML5 Avanzado");
    lista = agregarLibro(lista, "CSS3 Avanzado");
    while (lista != NULL)
    {
        printf("%s\n",lista->nombre);
        lista = lista->sig;
    }
     
    return 0;
}