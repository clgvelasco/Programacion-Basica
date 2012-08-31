
#include <stdio.h>
#include <conio.h>
#include <math.h>//Libreria math.h para funciones de pow y sqrt

int main()
{
    float a,b,c; int num;//Declaracion de variables float para los numeros introducidos e int para el nuemero del caso switch
    printf("Calculadora basica\n\n");
    
    printf("\n1: Sumar (dos numeros)\n");
    printf("\n2: Restar (dos numeros)\n");
    printf("\n3: Multiplicar (dos numeros)\n");
    printf("\n4: Dividir (dos numeros)\n");
    printf("\n5: Potencia a la n numero\n");
    printf("\n6: Raiz cuadrada\n");
    printf("\nIntroduce el numero correspondiente a la operacion que quieras realizar: ");scanf("%d",&num);
    
    if(num>=1&&num<=4)
    {printf("\n\nIntroduce el primer numero: "); scanf("%f",&a);
        printf("Introduce el segundo numero: "); scanf("%f",&b);}
    
    if(num==5)
    {printf("\nIntroduce el numero a elevar: "); scanf("%f",&a);
        printf("Introduce a que potencia quieres que se eleve: "); scanf("%f",&b);}
    
    if(num==6)
    {printf("\nIntroduce el numero al que se le aplicara la raiz: "); scanf("%f",&a);}
    
    switch(num)//Abertura del switch con la varible que va a trabajar
    
    {   case 1: c=a+b; printf("\n\n*La suma de tus numeros es: %.2f",c); break;
        case 2: c=a-b; printf("\n\n*La resta de tus numeros es: %.2f",c); break;
        case 3: c=a*b; printf("\n\n*La multiplicacion de tus numeros es: %.2f",c); break;
        case 4: c=a/b; printf("\n\n*La divicion de tus numeros es: %.2f",c); break;
        case 5: c=pow(a,b); printf("\n\n*La potencia es: %.2f",c); break;
        case 6: c=sqrt(a); printf("\n\n*La raiz cuadrada de %.0f es: %.2f",a,c); break;
        default: printf("Esta opcion no es valida");   }/*Al igual que el if, en switch
                                                         se pueden hacer operaciones aritmericas para despues mostrar los resultados con printf*/
    
    getch();
    return 0;
    
}
