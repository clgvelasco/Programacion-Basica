/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int cont=0,c=1,f=1,lim,aux;
    
    printf("Inserta un numero: "); scanf("%d",&lim);
    aux=lim;
    while(f<=lim)
    {
        c=1; cont++;
        while(c<=lim)
        {
            if(c==f)    { printf("*");}
            else
            {if(c==aux) { printf("*");}
                else    { printf(" ");}}
            
            c++;}  { printf("\n");}
        aux--;
        f++;}

        getch();
        return 0;
}
