/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

/* Programa que muestra la posicion de cada uno de los numeros introducidos en este arreglo */

#include <stdio.h>
#include <conio.h>

int main()
{
    int numeros[5],x; // Arreglo de 5 numeros
    
    for(x=0; x<=4; x++)
    {printf("Escribe un numero: "); scanf("%d",&numeros[x]);} // LLenado de casillar por parte del usuario
    printf("\nLos valores del arreglo son: \n\n");
    
    for(x=0; x<=4; x++)
    {printf("Posicion %d: %d\n",x,numeros[x]);} // Impresion en pantalla de la posicion y numero de cada casilla del arreglo

	getch();
    return 0;
    
}
