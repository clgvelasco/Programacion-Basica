/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,acum=0;
    printf("Inserta un numero: "); scanf("%d",&a);
    printf("Inserta un numero: "); scanf("%d",&b);
    
    if(a<=b)
    {while(a<=b)
    {acum=acum+a;
        a++;}}
    else
    {while(b<=a)
    {acum=acum+a;
        a--;}}
    
    printf("Suma de numeros: %d\n",acum);
    
    getch();
    return 0;
}
