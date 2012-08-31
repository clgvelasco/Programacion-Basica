#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char a[30],b[30],c[30],a1[30],b1[30],c1[30],a2[30],b2[30],c2[30];
    char texto1[30],texto2[30],texto3[30];
    
    printf("Introduce un texto: "); gets(texto1);
    printf("Introduce otro texto: "); gets(texto2);
    printf("Introduce otro texto: "); gets(texto3);
    
    strcpy(a,texto1);
    strcpy(a1,texto1);
    strcpy(a2,texto1);
    strcpy(b,texto2);
    strcpy(b1,texto2);
    strcpy(b2,texto2);
    strcpy(c,texto3);
    strcpy(c1,texto3);
    strcpy(c2,texto3);
    
    strcat(a,b);
    strcat(a,c);
    printf("%s\n",a);
    
    strcat(a1,c);
    strcat(a1,b);
    printf("%s\n",a1);
    
    strcat(b,a2);
    strcat(b,c);
    printf("%s\n",b);
    
    strcat(b1,c);
    strcat(b1,a2);
    printf("%s\n",b1);
    
    strcat(c,b2);
    strcat(c,a2);
    printf("%s\n",c);
    
    strcat(c1,a2);
    strcat(c1,b2);
    printf("%s",c1);
    
    getch();
    return 0;
}
