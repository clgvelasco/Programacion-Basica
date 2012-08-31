/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("** Multiplo de 4 y 5 **");
    printf("\n\nIntroduce un numero entero: "); scanf("%d",&a);
    
    if(a%4==0 && a%5==0)/* a%4==0 quiere decir que en la divicion no quedan reciduos por lo tanto el
                         numero es dibisible */
    {printf("\nEl numero %d si es multiplo de 4 y 5\n",a);}
    else
    {printf("\nEl numero %d no es multiplo de 4 y 5\n",a);}
	
	getch();
    return 0;
}

