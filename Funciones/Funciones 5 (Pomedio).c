
#include <stdio.h>
#include <conio.h>

/* Programa que defina una funcion sin retorno y con parametros,dicha funcion recibira 3 numeros de tipo float e imprimira en pantalla 
 el promedio de los 3 numeros. En el main se solicitara los 3 numeros y se mandaran como parametros a la funcion */

void prom(float x, float y, float z)//Funcion sin retorno (void) y con parametros.
{
    float promedio;
    
    promedio=(x+y+z)/(3);
    printf("\nTu promedio es: %.2f",promedio);
}


int main()
{
    float a,b,c;
    
    printf("** Promedio de 3 numeros **\n");
    printf("Inserta un numero: "); scanf("%f",&a);
    printf("Inserta otro numero: "); scanf("%f",&b);
    printf("Inserta otro numero: "); scanf("%f",&c);
    
    prom(a,b,c);//Llamado de la funcion.
    
    getch();
    return 0;
}

