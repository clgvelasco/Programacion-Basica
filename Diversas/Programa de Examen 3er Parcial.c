
#include <stdio.h>
#include <conio.h>

void funcion1(int numero)
{
    numero=numero+10;
    printf("%d\n",numero);
}

int funcion2(int numero1, int numero2)
{
    int res;
    
    res=numero1%numero2;
    
    return res;
}

int main()
{
    int matriz[3][2]={{1,2},{3,4},{5,6}};
    int x,y,resultado;
    
    for (x=0; x<3; x++) {
        for (y=0; y<2; y++) {
            funcion1(matriz[x][y]);
        }
    }
    
    printf("\n%d\n",matriz[2][1]);
    printf("%d\n",matriz[1][1]);

    resultado=funcion2(matriz[2][1],matriz[1][1]);
    
    printf("\nEl resultado del modulo es: %d",resultado);
    
    getch();
    return 0;
}

