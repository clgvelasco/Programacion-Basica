/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203.
 
 Programa que pide numeros al usuario almacenados en un arreglo de 10 variables
 imprimiendo resultados de numeros positivos negativos pares y ceros*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int arreglo[10],cont,a,b,c,d; // Arreglo de 10 variables, y contadores para accion deseada.
    
    for(a=0,cont=0; cont<10; cont++) // Ciclo para llenar arreglos.
    {printf("Dame un numero: ");
        scanf("%d",&arreglo[cont]);}
    
    
    for(a=0,b=0,c=0,d=0,cont=0; cont<10; cont++)//For con contadores para cada if.
        {if(arreglo[cont]%2!=0)
            {a++;}
        
        if(arreglo[cont]>0)//Numeros positivos.
        {b++;}
        
        if(arreglo[cont]<0)//Numeros negativos.
        {c++;}
        
        if(arreglo[cont]==0)//Iguales a cero.
        {d++;}
    }
    
    printf("\nLos numeros impares son: %d\n",a);
    printf("Los numeros positivos son: %d",b);
    printf("\nLos numeros negativos son: %d",c);
    printf("\nLos numeros 0 son: %d",d);
    
    getch();
    return 0;
}
