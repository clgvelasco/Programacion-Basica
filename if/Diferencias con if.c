
#include <stdio.h>
#include <conio.h>
//Librerias

int main()
{
    int a,b,c;
    printf("Introduce un numero: "); scanf("%d",&a);
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
