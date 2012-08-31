/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    
    printf("** Pares o nones **\n\n");
    printf("Introduce un numero: "); scanf("%d",&a);
    if(a%2==0)/*Para saber si un numero es par se indica una divicion entre 2
               y si el residuo es 0 es par de lo contrario es non*/
    {printf("Tu numero es par\n");}
    else
    {printf("Tu numero es non\n");}
    
    getch();
    return 0;
}
