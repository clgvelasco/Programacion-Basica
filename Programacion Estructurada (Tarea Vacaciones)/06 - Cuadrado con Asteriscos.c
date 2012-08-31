/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int f=1,c=1,lim;

    printf("\n Inserta el tamanho de tu recuadro: ");
    scanf("%d",&lim);

    if(lim<=20) {
    while(f<=lim){ //mientras cumpla la condicion va a ejecutar lo que esta entrea las llaves
        c=1;
        while(c<=lim) {
            if(f==1 || f==lim) {
                printf("*");
            }
        else if(c==1 || c==lim) {
            printf("*");
        }
            else {
                printf(" ");
            }
            c++;
        }
        printf("\n");
        f++;
    }
}
    else {
        printf("El limite de el recuadro es de 20 asteriscos");
    }

    getch();
    return 0;
}
