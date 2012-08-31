#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void ejer() //Funcion para mostrar el apartado de ejercicios, incluye un random para dar opciones  arbitrariamente del 1 al 10.
{
    int x1,x2,x3=0,resul,acum=0;
    char resp;
    system("cls");
    srand (time(NULL));

    printf("Que tabla quieres practicar: "); scanf("%d",&x2);
    do{
        do{
            x1=rand() % 10 + 1;
                printf("Dime el resultado de %dx%d= ",x2,x1);
                    scanf("%d",&resul);
                        if(resul==(x2*x1)){
                            printf("Exelente\n\n"); getch(); system("cls"); x3++;}
                                else{
                                    printf("\nIntentalo nuevamente\n\n");}

        }while(x3<=6);

            printf("Continuar con mas ejercicios de la tabla del %d S/N: ",x2); scanf("%s",&resp);
                x3=0; system("cls");

    }while(resp!='n'&&'N');
}


void multplicar(int x) //Funcion para mostrar la tabla de multiplicar pedida en cada caso.
{
    system("cls");
    int i,j;

    printf("Elegiste la tabla del %d",x);
        printf("\n");

    for(i=x;i<=x;i++){
        for(j=1;j<=10;j++){
            printf("%dx%d= %d",i,j,(i*j));
                printf("\n");}
                    printf("\n");}
                        getch(); system("cls");
}

int main()
{
    int x1;
    printf("** Aprendiendo las tablas de multiplicar **\n\n");
    do{
    printf("Para salir presiona 0\n\n");
    printf("Selecciona la tabla de multiplicar que quieras ver del 1 al 15\n");
    printf("o teclea 16 para ir a los ejercicios: ");
    scanf("%d",&x1);

    switch(x1)//Switch para evaluar la tabla deseada
    {
        case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11:
            case 12: case 13: case 14: case 15: multplicar(x1); break;

            case 16: ejer(); break;//Case 16 para infresar en el apartado de ejercicios

        case 0: printf("\nEspero que aprendieras algo y hasta la proxima"); break;

        default: system("cls"); printf("Esta tabla no esta disponible\n\n"); break;}

    }while(x1!=0);

    getch();
    return 0;
}