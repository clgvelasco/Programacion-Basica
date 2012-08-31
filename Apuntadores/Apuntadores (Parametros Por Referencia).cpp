#include <conio.h>
#include <iostream>

using namespace std;
// cout cin getch

float funcion(int *x, float *z){ //Recibir la direccion de memoria
	float res= *x + *z; //Sumas x y z pero modificas la direccion por tanto las variables del main seran cambiadas
	*x = *x + 5; //Suma a la variable del main por ser direccion de memoria
	*z = *z * 2;
	return res;
}

int main() {
	
	int num1 = 50;
	float b = 10;
 
	cout << funcion(&num1, &b) << endl; // Pasamos la direccion de memoria por tanto estas variables van a cambiar en la funcion
	cout << num1 << endl; // Imprimir la variable ya modificada en la funcion
	cout << b << endl;
	
getch();
return 0;
}