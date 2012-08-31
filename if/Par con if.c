
#include <stdio.h>
#include <conio.h>

int main()
{
    
    int a;
    
    printf("Introduce un numero: "); scanf("%d",&a);
    if(a%2==0)/*Para saber si un numero es par se indica una divicion entre 2
               y si el residuo es 0 es par de lo contrario es non*/
    {printf("Tu numero es par");}
    else
    {printf("Tu numero no es par");}

	
	getch();
    return 0;
}
