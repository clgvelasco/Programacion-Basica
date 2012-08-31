//librerias
#include <stdio.h>
#include <conio.h>

int main()
{
    int edad;
    
    printf("¿Cuantos años tienes?: "); scanf("%d",&edad);/*%c se usa para insertar caracteres especiales y se indica el
                                                                    numero de caracter con el codigo ASCII*/
    
    if(edad>=0 && edad<=3)//condicional if con operador de relacion "&&=y"
    {printf("Eres un bebe\n");}
    
    if(edad>=4 && edad<=11)//condicional if con operador de relacion "&&=y"
    {printf("Eres un ni%co\n",164);}
    
    if(edad>=12 && edad<=17)//condicional if con operador de relacion "&&=y"
    {printf("Eres un adolecente\n");}
    
    if(edad>=18 && edad<=59)//condicional if con operador de relacion "&&=y"
    {printf("Eres un adulto\n");}
    
    if(edad>=60 && edad<=100)//condicional if con operador de relacion "&&=y"
    {printf("Eres un adulto mayor\n");}
    
    if(edad>=101)//condicional if, no se necesita el operador de relacion ya que el programa te indica que es de 101 o mayor
    {printf("Por favor proporciona tu edad real\n");}
 
    getch();
    return 0;
    
}
