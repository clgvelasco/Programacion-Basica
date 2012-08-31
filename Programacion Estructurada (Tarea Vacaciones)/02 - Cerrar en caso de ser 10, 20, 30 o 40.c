/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    
    printf("** Cerrar en caso de ser 10, 20, 30 o 40 **\n\n");
    
    do
    {printf("Inserta un numero entero: "); scanf("%d",&num);}
    while(num!=10 && num!=20 && num!=30 && num!=40);//Condicion para que cierre en caso de 10, 20, 30, 40;
    
    getch();
    return 0;
}
