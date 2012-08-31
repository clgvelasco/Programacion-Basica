
#include <stdio.h>
#include <conio.h>

int main()
{
    int arreglo[2][3]={{8,10,3},{9,3,7}};
    int arreglo1[2][3];
    int arreglo2[2][3];
    int f,c;
    
    for (f=0; f<2; f++) {
        for (c=0; c<3; c++) {
            printf("Escribe un numero: ");
            scanf("%d",&arreglo1[f][c]);
        }
    }
    
    printf("\n");
    
    for (f=0; f<2; f++) {
        for (c=0; c<3; c++) {
            arreglo2[f][c]=arreglo[f][c]+arreglo1[f][c];
            printf("la suma es %d\n",arreglo2[f][c]);
        }
    }
    
    getch();
    return 0;
}
