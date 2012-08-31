/* Programa que defina en el main un arreglo de 5 posiciones enteras
el arreglo se enviara a una funcion lamada lee_numeros que solicitara
al usuario los 5 valores para cada posicion del arreglo. Despues de la
llamada a funcion de lee_numeros, el arreglo se enviara a una segunda funcion
lamada imprime_mayor la funcion imprimira en pantalla el mayor de los numeros
del arreglo. */

#include <conio.h>
#include <iostream>

using namespace std;
// cout cin getch

void imprime_mayor(int arr[]) { //Recibo el arreglo que como es puntero no nececita el * al principio

	int may=0;

	for(int i=0; i<5; i++) {
		if(arr[i]>may) { // Evaluacion de cada numero del arreglo para comprobar si
			may=arr[i]; // es mayor que el anterior
		}
	}
	cout << "El numero mayor fue: " << may;
}

void lee_numeros(int arr[]) {

	for(int i=0; i<5; i++){
		cout << "Escribe un numero: ";  // Relleno del arreglo
		cin >> arr[i];
	}
}

int main() {

	int arreglo[5];

	lee_numeros(arreglo); //Como los arreglos en si son apuntadores mando a la funcion
	imprime_mayor(arreglo);//el arreglo completo en ambas funciones

	getch();
	return 0;
}
