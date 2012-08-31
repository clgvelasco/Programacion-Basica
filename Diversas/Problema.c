/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */


/* Resolver el enigma de (++num*x+x++) */

#include <stdio.h>
 #include <conio.h>


int main()
{
    int num=10, x=20;
    
    printf("%d\n",(++num*x+x++));
    
    /* ++num=11
     num++=10
     ++x=21
     x++=20 */
    
    getch();
    return 0;
}
