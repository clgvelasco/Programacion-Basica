/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()

{
    float f,c;
    
    printf("** Convercion de Fahrenheit a Celsius **");
    
    printf("\n\nIntroduce los grados Fahrenheit: "); scanf("%f",&f);
    
    
    {c=(f-32)*(.5);/* La formula original es c=(F-32)*(5/9), pero ya que 5/9 es .5 sustitui esa parte*/
        printf("\nLa temperatura en Fahrenheit es: %.2f\n\n",c);}
    
    getch();
    return 0;
}
