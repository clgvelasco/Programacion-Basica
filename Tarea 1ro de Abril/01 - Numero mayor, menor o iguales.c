/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()

{
    
    int a,b;
    printf("** Numero mayor, menor o iguales **");
    printf("\n\nIntroduce un numero: "); scanf("%d",&a);//Las variables tipo entero se guardan con %d
    printf("Introduce otro numero: "); scanf("%d",&b);
    
    if(a==b)
    {printf("\nLos numeros son iguales\n");}
    
    if (a>b)
    {printf("\nEl numero mayor es %d\n",a);}
    
    if(a<b)
    {printf("\nEl numero mayor es %d\n",b);} /*Para mostrar una variable en un texto primero se pone el tipo de variable que es en el lugar que quieras el texto y despues de las comillas pones coma y pones el nombre de la variable*/
    
    getch();
    return 0;   
}

