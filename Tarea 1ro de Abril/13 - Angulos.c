/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int angulo;
    printf("** Angulos **\n\n");
    printf("Introduce la medida de tu angulo: "); scanf("%d",&angulo);
    
    if(angulo==90)
    {printf("\nTu angulo es recto\n");}
    
    if(angulo>=91 && angulo<=360)
    {printf("\nTu angulo es obtuso\n");}
    
    if (angulo<=89 && angulo>=1)
    {printf("\nTu angulo es agudo\n");}
    
    if(angulo==0)
    {printf("\nNo tienes ningun angulo\n");}
    
    if (angulo>360)
    {printf("\nLos angulos mayores a 360%c no existen, porfavor introduce un angulo viable\n",167);}
    
    /*Angulo recto igual a 90∫, angulo obtuso igual a >90∫, angulo agudo igual a <90∫*/
    
    getch();
    return 0;
    
}

