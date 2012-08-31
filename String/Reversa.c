#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char texto[30];
    char texto_2[30];
    
    printf("Escribe algo: ");
    gets(texto);
    
    strcpy(texto_2,texto);
    
    strrev(texto_2);
    
    strcmp(texto,texto_2);
    
    if(strcmp(texto,texto_2)==0)
    {
        printf("La palabra es palindrome");
    }
    else
    {
        printf("La palabra no es palindrome");
    }
    
    getch();
    return 0;
}
