/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

/* Programa que suma un arreglo de 5 numeros introducidos por el programador y otro arreglo de 5 numeros introducidos por el usuario, la suma de
 los numeros se realiza casilla por casilla */

#include <stdio.h>
#include <conio.h>

int main()
{
    float arreglo_1[]={3.8,9,15,12.3,7.6}; //Arreglo de 5 numeros introducido por el programador
    float arreglo_2[5];// Arreglo de 5 numeros introducido por el usuario
    float arreglo_3[5];// Arreglo de 5 numeros en el cual se efectua la suma de casillas del primer arreglo mas el segundo arreglo
    int x; //El contador no puede estar en float siempre debera de estar en variable tipo int
    
    for(x=0; x<=4; x++)
    {printf("Introduce un numero: "); scanf("%f",&arreglo_2[x]);} //LLenado de casillas por el usuario para el segundo arreglo
    
    printf("\n");
    
    for(x=0; x<=4; x++)
    {arreglo_3[x]=arreglo_1[x]+arreglo_2[x]; // Suma de arreglos 1 y 2, la variable x da la pauta en el cual se sumaran las casillas correspondientes
        printf("%.2f\n",arreglo_3[x]);} // Impresion al usuario de la suma de casillas
    
    getch();
    return 0;
}
