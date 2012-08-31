#include <stdio.h>//Librerias
#include <conio.h>

int main()
{
    int dia;//Variable tipo entero, importante seÒalar que el switch solo se trabaja con variable int o char
    printf("Introduce un numero del 1 al 7: "); scanf("%d",&dia);
    
    switch(dia)//Declaracion de la variable que se va a trabajar con el switch
    
    {   case 1:printf("Lunes\n"); break;//Los casos siempre tinen que concluirse con un break
        case 2:printf("Martes\n"); break;
        case 3:printf("Miercoles\n"); break;
        case 4:printf("Jueves\n"); break;
        case 5:printf("Viernes\n"); break;
        case 6:printf("Sabado\n"); break;
        case 7:printf("Domingo\n"); break;
        default: printf("Este numero no corresponde a un dia\n"); }//Default para indicar que no es ninguno de los casos declarados
    
    getch();
    return 0;
}
