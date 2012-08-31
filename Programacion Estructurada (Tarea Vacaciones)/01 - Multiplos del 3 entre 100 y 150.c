/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>



int main()
{
    int acum=102;//El multiplo de 3 inmediato despues del 100 es 102
    
    printf("** Multiplos del 3 entre el 100 y el 150 **\n\n");
    
    do
    {printf("%d\n",acum);
        acum=acum+3;}
    while(acum>=100&&acum<=150);//Condicion para que se muestren los multiplos entre el 100 y 150
    
	getch();
    return 0;
}
