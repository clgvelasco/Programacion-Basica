#include <stdio.h>//Librerias
#include <conio.h>

int main()
{
    char caracter;//Char es para una variable de tipo caracter
    printf("Introduce un caracter: "); scanf("%c",&caracter);//Char se guarda con %c
    
    switch(caracter) //Declaracion de la variable con la que se va a trabajar el switch
    
    {   case '@':printf("Es una arroba\n"); break;
        case '=':printf("Es un igual\n"); break;
        case 'A':printf("Es una A mayuscula"); break;   }/*Importante aclarar que en switch los casos con variables tipo char se indican entre comillas simples ('a'), e igual de importante aclarar que se tiene que dar la instruccion breake para que el switch se rompa, de lo contrario ingresaria en todas los casos y al usuario se le mostrarian todos los casos hasta que se tompa una instruccion o en su defecto a el defaul si esque se incluyera*/

    getch();
    return 0;
}
