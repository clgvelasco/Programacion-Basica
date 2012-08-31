/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()
{
    float num=0, a=0, b=1, suma,cont=0;
    printf ("Inserta el numero de la serie que quiaras ver: "); scanf("%f",&num);
    
    printf("\n");
    
    suma=a+b;
    
    while (cont<num)
    {suma=a+b;
        a=b; b=suma;
        cont++;
        printf("No. %.0f = %.0f \n",cont,suma);}
    
    getch();
    return 0;
}
