/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()
{
    char vocal;
    
    printf("** Las vocales **");
    printf("\n\nIntroduce una letra: "); scanf("%c",&vocal);
    
    
    switch (vocal)
    
    {case'a': case'e': case'i': case'o': case'u':printf("Esta letra es una vocal\n"); break;
        case'A': case'E': case'I': case'O': case'U':printf("Esta letra es una vocal\n"); break;
            /* para los case se puede poner un case seguido de otro con dos puntos, mientras quieras que se imprima lo mismo en cualquier caso de los declarados*/
        default:printf("\nEsta letra no es una vocal\n");}
    
    getch();
    return 0;
}

