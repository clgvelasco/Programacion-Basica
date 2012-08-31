/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int tareas,prac,exam,final;
    
    printf("** Calificacion final **\n\n");
    printf("30: Practicas (El total de practicas son 5)\n");
    printf("30: Tareas (El total de tareas son 3)\n");
    printf("40: Examen (La calificación del examen es de 0 a 10, en donde 10 es el 100)\n)");
    
    printf("\n\n¿Cuantas practicas entregaste?: "); scanf("%d",&prac);
    printf("\n¿Cuantas tareas entregaste?: "); scanf("%d",&tareas);
    printf("\n¿Cual fue tu calificación de examen?: "); scanf("%d",&exam);
    
    if(prac>=6)
    {printf("\nEl numero total de practicas es 5, por favor insterta el numero de practicas correcto\n");}
    else
    {prac=(30/5)*prac;
        
        if(tareas>=4)
        {printf("\nEl numero maximo de tareas es 3, por favor inserta el numero de tareas correcto\n");}
        else
        {tareas=(30/3)*tareas;
            
            if(exam>=11)
            {printf("\nLa calificacion maxima de examen es 10, por favor inserta la calificacion correcta\n");}
            else
            {exam=(40/10)*exam;
                
                final=prac+tareas+exam;
                
                if(final>=70)
                {printf("\nFelicidades, tu calificacion final es %d, aprobaste\n",final);}
                else
                {printf("\nTu calificacion final es %d, reprobaste, nos vemos el siguiente semestre\n",final);}}}}
    
    
    getch();
    return 0;
}

