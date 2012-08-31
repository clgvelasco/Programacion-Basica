/* Alumno: Cesar Luis Garcia Velasco
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()
{
    float   inversion,interes=0,total=0,i;
    int contador=1,years;
    
    printf("Calculo de intereses con una tasa del 15 porciento\n\n");
    printf("Introduce el capital de la inversion: "); scanf("%f",&inversion);
    printf("¿Cuantos años invertiras este capital?: "); scanf("%d",&years);
    
    total=inversion;
    while(contador<=years)
    {i=inversion*.15+i;
        interes=(inversion)*.15;
        inversion=inversion+interes;
        total=(total*1.15);
        printf("con:%d, int:%.2f, Total:%.2f\n",contador,interes,total);
        contador++;}
    
    
    printf("\nEl interes es de %.2f pesos\n",i);
    printf("El capital total en %d a%cos es %.2f pesos\n\n",years,164,total);
    
    getch();
    return 0;  
}


