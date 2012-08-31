//Suma de la diagonal en arreglo bidimensional

#include <stdio.h>
#include <conio.h>

int main()
{
    int arreglo[3][3]={{8,7,5},{3,9,2},{6,8,2}};
    int acum=0,x;
    
    for (x=0; x<3; x++) {
        acum=arreglo[x][x]+acum;
    }
    printf("La suma es: %d",acum);

    getch();
    return 0;
}