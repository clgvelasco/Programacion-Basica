/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,acum=0,x,z;
    
    printf("** Pares existentes del numero mayor al menor **\n\n");
    
    printf("Inserta el valor de a: "); scanf("%d",&a);
    printf("Inserta el valor de b: "); scanf("%d",&b);
    x=a; z=b;
    
    if(a<=b)
    {while(a<=b)
    {if(a%2==0)
    {acum=acum+1;}
        a++;}}
    else
    {while(b<=a)
    {if(a%2==0)
    {acum=acum+1;}
        a--;}}
    
    printf("Hay %d numeros pares del %d al %d",acum,x,z);
    
    getch();
    return 0;
}
