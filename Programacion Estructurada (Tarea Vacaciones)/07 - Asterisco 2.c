/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int cont=0, f=1,c=1,lim;
    
    printf("Inserta un numero: "); 
    scanf("%d",&lim);
    
    while(f<=lim)
    {c=1; cont++;
        while(c<=cont)
        {printf("*"); c++;}
        f++; printf("\n\n");}
    
    getch();
    return 0;
}
