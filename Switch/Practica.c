#include <stdio.h>//Librerias
#include <conio.h>

int main()
{
    char nota;//Variable tipo caracter
    printf("Introduce tu calificacion en letra: "); scanf("%c",&nota);
    
    switch(nota)//Declaracion de la variable con a que se trabajara el switch
    
    {   case 'A':printf("Tu calificacion es: 100\n"); break; case 'a':printf("Tu calificacion es: 100\n"); break;
        case 'B':printf("Tu calificacion es: 90\n"); break; case 'b':printf("Tu calificacion es: 90\n"); break;
        case 'C':printf("Tu calificacion es: 80\n"); break; case 'c':printf("Tu calificacion es: 80\n"); break;
        case 'D':printf("Tu calificacion es: 70\n"); break; case 'd':printf("Tu calificacion es: 70\n"); break;/*Casos con variables tipo char se declaran entre comillas simples ('a')*/
        default: printf("Estas reprobado\n"); }//Default para indicar que no es ninguno de los casos declarados
    
    getch();
    return 0;
}
