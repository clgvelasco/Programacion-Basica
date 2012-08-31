/* Programa que defina en el main 3 variables, 2 enteras y una de tipo float
las direcciones de memoria se enviaran a una funcion llamada promedio, en la
funcion se duplicara el contenido de cada direccion de memoria, una vez duplicado
el valor de cada direccion de memoria se obtendra el promedio y se retornara al main.

En el main se leeran el contenido de las variables y se imprimiran en pantalla despues de la
llamada a funcion */

#include <conio.h>
#include <iostream>

using namespace std;
// cout cin getch

float promedio (int *x, int *y, float *z) { // Recibo direccion de memoria
	float prom;

	*x=*x*2;// Modifico variables a traves de direccion de memoria
	*z=*z*2;// para que la variable del main sea modificada
	*y=*y*2;

	prom=(*x+*y+*z)/3;

	return prom;//Retorno para imprimir el promedio en el main
}

int main() {

	int x,y;
	float z;

	cout << "Escribe un numero: ";
	cin >> x;

	cout << "Escribe otro numero: ";
	cin >> y;

	cout << "Escribe otro numero: ";
	cin >> z;
	
	cout << endl << "El promedio de tus numeros duplicados es: " << promedio(&x,&y,&z) <<endl <<endl;/* Mando a la funcion las 
	variables con un & para indicar que solo mandare las direcciones de memoria y asi las variables se modificaran desde la funcion*/

	cout << "Tus variables duplicadas respectivamente son: " << endl << x << endl << y <<endl << z << endl;/* Imprimo directamente ya 
	que al haber mandado direcciones de memoria las variables del main se modifican con lo que se hizo en la funcion */

getch();
return 0;
}
