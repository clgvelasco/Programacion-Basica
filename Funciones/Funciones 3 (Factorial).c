
#include <stdio.h>
#include <conio.h>

/* Programa que defina una funcion con retorno y con parametros, dicha funcion calculara el factorial del numero que se reciba 
 como parametro en el main se solicitara un numero entero, el numero se mandara a la funcion y la funcion retornara el factorial 
 de dicho numero */

int factorial(int x) //Funcion con retorno (return x) y con parametros.
{
    int y;
    for (y=1; x>0; x--) {
        y=y*x;
    }
    printf("El factorial es: %d",y);
    
    return x;
}

int main()
{
    int num;    
    
    printf("** Factorial **");
    printf("\nInserta el valor del numero a calcular: "); scanf("%d", &num);
    
    factorial(num); //Llamada de la funcion.
    
    getch();
    return 0;
}

