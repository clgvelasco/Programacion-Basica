/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */


/* Acumulador es una variable que se incrementa o decrementa de forma no fija */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, acumulador=0, b; //Declaracion de acumulador en ceros
    
    printf("Inserta el valor de a: "); scanf("%d",&a);
    printf("Inserta el valor de b: "); scanf("%d",&b);
    
    if(a<=b) //If para declarar que la variable a es mayor que b y else para lo contrario asi while puede trabajar con ambos casos
    {while(a<=b)
    {acumulador=acumulador+a;
        a++;}} //a++ es el incremento de a en 1, al igual que a+=3 el incremento seria de 3.
    else
    {while (b<=a)
    {acumulador=acumulador+b;
        b=b+1;}}
    
    printf("Resultado= %d\n",acumulador);
    
    getch();
    return 0;
}
