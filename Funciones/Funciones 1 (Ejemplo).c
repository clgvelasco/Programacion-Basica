//
//  main.c
//  Funciones 1
//
//  Created by Cesar Luis Garcia Velasco on 11/06/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include <conio.h>

int sumar(int x, int y)
{
    int res;
    res=x+y;
    return res;
}

int main()
{
    int valor1,valor2,resultado;
    printf("Introduce un numero entero: ");
    scanf("%d",&valor1);
    
    printf("Introduce otro numero entero: ");
    scanf("%d",&valor2);
    
    resultado=sumar(valor1, valor2);
    
    printf("La suma de los numeros es %d: ",resultado);
    
    getch();
    return 0;
}

