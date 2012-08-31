//Librerias
#include <stdio.h>
#include <conio.h>

int main()
{
    float salario,impuestos,neto,horas;
    printf("Cuantas horas trabajaste: "); scanf("%f",&horas);
    salario=horas*20;
    
    if(salario>=0 && salario<=100)//Concicional if con operador de relacion "&&=y"
    {impuestos=salario*.02; neto=salario-impuestos;}
    
    if(salario>=101 && salario<=500)
    {impuestos=salario*.05; neto=salario-impuestos;}/*Dentro de los if puede haber instrucciones de operadores aritmeticos tal y como se muestra en esta linea */
    
    if(salario>=501 && salario<=2000)
    {impuestos=salario*.08; neto=salario-impuestos;}
    
    if(salario>=2001)/* Condicional if sin operador de relacion ya que se dice que si la cantidad es mayor a 2001 se le cobrara un impuesto del 10% */
    {impuestos=salario*.1; neto=salario-impuestos;}
    
    printf("Tu salario sin impuestos es: %.2f\n",salario);
    printf("Los impuestos son: %.2f\n",impuestos);
    printf("EL total con los impuestos ya rebajados es: %.2f\n",neto);/*Estos printf se muestran solo si uno de los casos anteriores es verdadero, no es necesario incluirlos en todos los if ya que solo uno de estos es verdadero y por lo tanto solo uno es que se mostrara el usuario*/
    
    getch();
    return 0;
}
