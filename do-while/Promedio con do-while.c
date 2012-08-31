/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>


int main()
{
    float a=0,b,cont=0, acum=0;
    
    printf("** Introducir 10 numeros, calcular el promedio y decir el mayor de los 10 numeros **\n\n");
    do
    {printf("Intoduce un numero: "); scanf("%f",&b);
        acum=acum+b; cont++;
        if(b>=a)
        {a=b;}}
    while(cont<=9);
    
    acum=acum/10; printf("\nEl promedio es: %.2f\n",acum);
    printf("El numero mayor que introduciste es: %.2f\n",a);
    
    getch();
    return 0;
}
