/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    float a,b,c,total;
    
    printf("** Resolveremos la ecuacion (a^3+b^2)+c^2 **\n");
    printf("\nIntroduce el valor de a: "); scanf("%f",&a);
    printf("Introduce el valor de b: "); scanf("%f",&b);
    printf("Introduce el valor de c: "); scanf("%f",&c);
    
    total=(pow(a,3)+powf(b,2))+pow(c,2);//pow se utiliza para realizar potencias y es necesario incluir la libreria math.h
    
    printf("\nEl resultado de tu ecuacion es: %.2f\n\n",total);

    getch();
    return 0;
}

