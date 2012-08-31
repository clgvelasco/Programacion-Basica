#include <conio.h>
#include <iostream>

using namespace std;
// cout cin getch

void funcion(int num[]){ /* Declaracion de funcion, con parametros 
							para trasladar un arreglo desde main */
	num[0]=100;
}

int main() {

	int arr[5]; // Declaracion de arreglo de 5 pociciones
	funcion(arr); // Llamada de la funcion y evaluacion del arreglo antes declarado

	cout<< arr[0] <<endl; // imprimira 100 ya que en la funcion se le dio ese valor
	
getch();
return 0;
}