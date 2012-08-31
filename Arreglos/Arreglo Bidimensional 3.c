
#include <stdio.h>

int main()
{
    int arreglo[3][3];
    int f,c,acum,acum1,acum2,acum3,acum4,acum5;
    
    for (f=0; f<3; f++) {
        for (c=0; c<3; c++) {
            printf("Escribe un numero: ");
            scanf("%d",&arreglo[f][c]);
            
        }
    }
    
    for (acum=0,f=0; f<1; f++) {
        for (c=0; c<3; c++) {
            acum=arreglo[f][c]+acum;
            
        }
    }
    
    for (acum1=0,f=1; f<2; f++) {
        for (c=0; c<3; c++) {
            acum1=arreglo[f][c]+acum1;
            
        }
    }
    
    for (acum2=0,f=2; f<3; f++) {
        for (c=0; c<3; c++) {
            acum2=arreglo[f][c]+acum2;
            
        }
    }
  
    printf("Fila 0 = %d\n",acum);
    printf("Fila 1 = %d\n",acum1);
    printf("Fila 2 = %d\n",acum2);
    
    for (acum3=0,c=0; c<1; c++) {
        for (f=0; f<3; f++) {
            acum3=arreglo[f][c]+acum3;
            
        }
    }
    
    for (acum4=0,c=1; c<2; c++) {
        for (f=0; f<3; f++) {
            acum4=arreglo[f][c]+acum4;
            
        }
    }
    
    for (acum5=0,c=2; c<3; c++) {
        for (f=0; f<3; f++) {
            acum5=arreglo[f][c]+acum5;
            
        }
    }
    
    printf("Columna 0 = %d\n",acum3);
    printf("Columna 1 = %d\n",acum4);
    printf("Columna 2 = %d\n",acum5);
    
    return 0;
}
