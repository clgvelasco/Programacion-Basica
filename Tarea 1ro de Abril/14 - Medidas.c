/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <conio.h>

int main()
{
    float met,pies,pulg;
    
    printf("** Conversion de metros a pies y pulgadas **\n");
    printf("\nInserta la medida en metros: "); scanf("%f",&met);
    
    // 1 metro igual a  39.7 pulg, 1 pie igual a 12 pulg.
    
    pulg=met*39.37; pies=met*(39.37/12);
    
    printf("\n%.2f metros son %.2f pulgadas y %.2f pies\n\n",met,pulg,pies);

    getch();
    return 0;
}

