/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>


int main()
{
    int a,b,c;
    
    printf("** Numeros diferentes **");
    printf("\n\nIntroduce un numero: "); scanf("%d",&a);
    printf("Introduce otro numero: "); scanf("%d",&b);
    printf("Introduce otro numero: "); scanf("%d",&c);
    
    if(a!=b&&a!=c&&b!=c)//Los tres numeros son diferentes
    {printf("\nLos tres numeros son diferentes\n");}
    
    if(a==b&&a==c&&b==c)//Los tres numeros son iguales
    {printf("\nLos tres numeros son iguales\n");}
    
    if((a==b&&a!=c) || (b==c&&b!=a) || (a==c&&c!=b))//Dos iguales y uno diferente
    {printf("\nHay dos numeros iguales y uno diferente");}

    getch();
    return 0;
}

