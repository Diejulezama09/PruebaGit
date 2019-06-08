/* 
    Un alumno desea saber cual será su calificación final en la materia de algoritmos.
    Dicha calificación se compone de los siguientes porcentajes:
    *55% del promedio de sus tres calificaciones parciales.
    *30% de la calificación del examen final.}
    *15% de la calificación de un trabajo final.
 */

#include <stdio.h>

int main()
{
    float par1,par2,par3,final,trabajo,promedioParc,promedioFinal,promedioTra,calificacionFinal;

    printf("Ingrese las calificaciones de los tres parciales: \n"); scanf("%f %f %f",&par1,&par2,&par3);
    printf("Ingrese la calificacion del examen final: \n"); scanf("%f",&final);
    printf("Ingrese la calificacion del trabajo final: \n"); scanf("%f",&trabajo);

    promedioParc = ((par1+par2+par3)/3)*0.55;
    promedioFinal = final*0.30;
    promedioTra = trabajo*0.15;

    calificacionFinal = promedioParc+promedioFinal+promedioTra;

    printf("Su califiacion final es: %.1f\n",calificacionFinal);

    return 0;
}