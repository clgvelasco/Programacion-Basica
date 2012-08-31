#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char texto[30];
    char texto_2[30];
    int longitud,longitud_2;
    
    printf("Escribe algo: ");
    gets(texto);
    
    printf("Escibe otra cosa: ");
    gets(texto_2);
    
    longitud= strlen(texto);
    longitud_2= strlen(texto_2);
    
    if(longitud>longitud_2)
    {
        printf("Tu primer texto es el mas largo");
    }
    
        if(longitud<longitud_2)
        {
            printf("Tu segundo texto es el mas largo");
        }
    
            if(longitud==longitud_2)
            {
                printf("Los dos textos son iguales");
            }
    
    getch();
    return 0;
    
}
