/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int cont=1,numero,may=0,men;
    men=numero;
    
    printf("** Numero mayor y menor de una serie de numeros **\n\n");
    
    do
    {printf("introduce un numero: "); scanf("%d",&numero);
        if(may<=numero)
        {may=numero;}
        if(men>=numero)
        {men=numero;}
        cont++;}
    while(cont<=10);
    
    printf("\nEl numero mayor fue: %d",may);
    printf("\nEl numero menor fue: %d",men);
    
    getch();
    return 0;   
}
