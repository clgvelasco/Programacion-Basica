/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>


int main()
{
    int dia,mes,year;
    
    printf("** Fechas **\n\n");
    printf("Introduce el dia: "); scanf("%d",&dia);
    printf("Introduce el mes en numero: "); scanf("%d",&mes);
    printf("Introduce el año: "); scanf("%d",&year);
    
    // AÒo bisciesto year%4==0 && year%100!=0; AÒos bisciestos 2000 y similares year%4==0 && year%100==0; AÒo normal year%4!=0 && year%100!=0;
    
    
    //Febrero
    if(((year%4==0 && year%100!=0) || (year%4==0 && year%100==0)) && ((mes==2) && (dia>=1 && dia<=29)))
    {printf("\nLa fecha es correcta");}
    
    if(((year%4==0 && year%100!=0) || (year%4==0 && year%100==0)) && ((mes==2) && (dia>=30)))
    {printf("\nLa fecha es incorrecta");}
    
    if((year%4!=0 && year%100!=0) &&((mes==2) && (dia>=1 && dia<=28)))
    {printf("\nLa fecha es correcta");}
    
    if((year%4!=0 && year%100!=0) && ((mes==2) && (dia>=29)))
    {printf("\nLa fecha es incorrecta");}
    //Febrero
    
    
    
    //Meses con 31 dias
    if(((year%4==0 && year%100!=0) || (year%4!=0 && year%100!=0) || (year%4==0 && year%100==0)) && (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12) && (dia>=1 && dia<=31))
    {printf("\nLa fecha es correcta");}
    
    if(((year%4==0 && year%100!=0) || (year%4!=0 && year%100!=0) || (year%4==0 && year%100==0)) && (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12) && (dia>31))
    {printf("\nLa fecha es incorrecta");}
    //Meses con 31 dias
    
    
    
    //Meses con 30 dias
    if(((year%4==0 && year%100!=0) || (year%4!=0 && year%100!=0) || (year%4==0 && year%100==0)) && (mes==4||mes==6||mes==9||mes==11) && (dia>=1 && dia<=30))
    {printf("\nLa fecha es correcta");}
    
    if(((year%4==0 && year%100!=0) || (year%4!=0 && year%100!=0) || (year%4==0 && year%100==0)) && (mes==4||mes==6||mes==9||mes==11) && (dia>30))
    {printf("\nLa fecha es incorrecta");}
    //Meses con 30 dias
    
    
    /* Utilizar operadores de relacion || que significa O, sirve para no tener que escribir mas if, ya que solo toma
     en cuenta la condicion que se cumpla*/
    
    getch();
    return 0;
}
