/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

/*Calcular el factorial
 ejemplo: Factorial de 4= (4*3*2*1)=24 */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a,acum=1;
    
    printf("** Factorial **");
    printf("\nInserta el valor del numero a calcular: "); scanf("%d", &a);
    
    while(a>=1) /* En cualquier factorial el numero minimo de multiplicacion es 1 por lo tanto la sentencia debe de ser a>=1 para que cuando el numero llegue a 1 se pare la sentencia y por concecuente se pare el ciclo */
    {acum=acum*a;
        a--;}
    
    printf("El factorial es: %d",acum);
    
    getch();
    return 0;
}
