
#include <stdio.h>
#include <conio.h>
 
/* Programa que defina una funcion sin parametros y sin retorno.
 Dicha funcion solicitara al usuario 3 numeros enteros y los imprimira de mayor a menor */

void numeros() //Funcion sin retorno(void) y sin parametros.
{
    int x1,x2,x3;
    
    printf("** Numeros de Mayor a menor **\n");
    printf("\nPor favor inserta un numero: "); scanf("%d",&x1);
    printf("Por favor inserta otro un numero: "); scanf("%d",&x2);
    printf("Por favor inserta otro numero: "); scanf("%d",&x3);
    
    if((x1>x2) && (x1>x3))
    {if(x2>x3)
    {printf("\nEl orden es %d, %d, %d\n\n",x1,x2,x3);}
    else
    {printf("\nEl orden es %d, %d, %d\n\n",x1,x3,x2);}}
    
    
    if((x2>x1) && (x2>x3))                 // todos los tipos de posibilidades para organizar 3 numeros de mayor a menor
    {if(x1>x3)
    {printf("\nEl orden es %d, %d, %d\n\n",x2,x1,x3);}
    else
    {printf("\nEl orden es %d, %d, %d\n\n",x2,x3,x1);}}
    
    
    if((x3>x1) && (x3>x2))
    {if(x1>x2)
    {printf("\nEl orden es: %d, %d, %d\n\n",x3,x1,x2);}
    else
    {printf("\nEl orden es: %d, %d, %d\n\n",x3,x2,x1);}}
    
    
    if(x1==x2||x1==x3||x2==x3)
    {printf("\nPorfavor inserta numeros diferentes\n\n");}
    
}

int main()
{
    numeros();//Llamada de la funcion.

    getch();
    return 0;
}

