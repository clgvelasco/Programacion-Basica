
/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c;
    
    printf("** Numero Central **");
    
    printf("\n\nIntroduce un numero: "); scanf("%d",&a);
    printf("Introduce otro numero: "); scanf("%d",&b);
    printf("Introduce otro numero: "); scanf("%d",&c);
    
    
    
    if((a<=b && a>=c) || ((a>=b && a<=c) && (a!=b && a!=c && c!=b)))/* operadores de relacion &&=y, y despues delimitias la instruccion if con los != para que si el usuario ponga 2 numeros iguales el unico texto que se imprima sea el de "Dos numeros iguales" y no se meta en los demas if.*/
        
    {printf("\nEl numero central es %d\n",a);}
    
    if ((b<=a && b>=c) || ((b>=a && b<=c) && (a!=b && a!=c && c!=b)))
    {printf("\nEl numero central es %d\n",b);}
    
    if((c<=b && c>=a) || ((c>=b && c<=a) && (a!=b && a!=c && c!=b)))
    {printf("\nEl numero central es %d\n",c);}
    
    if((a==b || a==c || c==b) && (a!=b || a!=c || c!=b))
    {printf("\nHay dos numeros iguales\n");}
    
    getch();
    return 0;
}
