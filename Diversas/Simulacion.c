/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

/* Recordatorio: num++ es igual que numero+1
 num-- es igual que numero-1
 num+=3 es igual que numero+3
 num-=3 es igual que numero-3 */

#include <stdio.h>
#include <conio.h>

int main()
{
    int x,x1, y=10,y1=10;
    
    x=y++;
    
    printf("%d\n",x);
    printf("%d\n\n",y);
    
    x1=++y1;
    
    printf("%d\n",x1);
    printf("%d\n",y1);
    
    getch();
    return 0;
}
