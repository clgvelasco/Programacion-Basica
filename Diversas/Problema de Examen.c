
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion,acum,cont,x1,x2,x3;
    
    do{ //do para dar vuelta mientras la condicion del while no se haga falsa en este caso es opcion!=4
        
        printf("Menu\n");
        printf("1. Suma de numeros del 1 al 100\n");
        printf("2. Suma de numeros pares del 1 as 100\n");    // redaccion del menu para el programa
        printf("3. Acomodo de numeros del mayor al menor\n");
        printf("4. Salir\n");
        printf("Elige una opcion: "); scanf("%d",&opcion);
        
        switch (opcion) // switch para evaluar la variable que en este caso es opcion
        
        {   case 1:
                cont=1; acum=0; // contador y acumulador se inician en 1 y 0 respectivamente para que acumulador no acumule otra cosa
                while(cont<=100){
                    acum=acum+cont; cont++;} // contar de uno en uno hasta el 100
                printf("La suma de los numeros es: %d\n\n",acum);
                break;
                
            case 2: acum=0; cont=2; // contador y acumulador se inician en 1 y 0 respectivamente para que acumulador no acumule otra cosa
                while(cont<=100)
                {acum=acum+cont; cont+=2;} // suma de contador en 2 para asegurar los pares
                printf("La suma de los numeros pares es: %d\n\n",acum);
                break;
                
            case 3:
                printf("Inserta un numero: "); scanf("%d",&x1);
                printf("Inserta otro numero: "); scanf("%d",&x2);
                printf("Inserta otro numero: "); scanf("%d",&x3);
                
                if((x1>x2) && (x1>x3))
                {if(x2>x3)
                {printf("El orden es %d, %d, %d\n\n",x1,x2,x3);}
                else
                {printf("El orden es %d, %d, %d\n\n",x1,x3,x2);}}
                
                
                if((x2>x1) && (x2>x3))                 // todos los tipos de posibilidades para organizar 3 numeros de mayor a menor
                {if(x1>x3)
                {printf("El orden es %d, %d, %d\n\n",x2,x1,x3);}
                else
                {printf("El orden es %d, %d, %d\n\n",x2,x3,x1);}}
                
                
                if((x3>x1) && (x3>x2))
                {if(x1>x2)
                {printf("El orden es: %d, %d, %d\n\n",x3,x1,x2);}
                else
                {printf("El orden es: %d, %d, %d\n\n",x3,x2,x1);}}
                
                
                if(x1==x2||x1==x3||x2==x3)
                {printf("Porfavor inserta numeros diferentes\n\n");}
                break;
                
            case 4: printf("Hasta la siguiente"); break; // solo agregue una despedida para asegurar al usuario que ha salido del programa
                
            default: {printf("Por favor inserta una opcion viable\n\n");}
                break; // default para que si el usuario introduce una opcion que no es viable se le haga saber al usuario
                //que se ha equivocado y que inserte un caracter valido
                
        } // fin del switch
        
    } while (opcion!=4); // final del do-while con la condicion que indica que la variable llamada opcion sea diferente de cuatro
    
} // final del int main()