/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

/* Do while es una sentencia repetitiva que ejecuta un conjunto de instrucciones mientras
 una condicion es verdadera, su caracteristica principal es la de evaluar "al final" la condicion. */

#include <stdio.h>
 #include <conio.h>

/*Repeticion de numero iniciando en 1 y terminando en 11 segun la condicion del while*/

int main()
{
    int numero=1;
    
    do
    {printf("%d\n",numero);
        numero++;}
    while(numero<=11);
    
    getch();
    return 0;
}
