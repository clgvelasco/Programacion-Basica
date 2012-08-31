/* Programa que defina en el main un arreglo de 10 posiciones enteras
el arreglo se enviara a una funcion lamada lee_numeros que solicitara
al usuario los 10 valores para cada posicion del arreglo. En el main se
mandara llamar una funcion nombrada inprime_arreglo, la funcion recibira el arreglo como
parametro e imprimira en pantalla el contenido del arreglo.

En el main se mandara llamar una funcion nombradainvierte_erreglo, la funcion incertira el
rden de las pisiciones del arreglo

En el main se amdara llamar la funcion imprime_arreglo*/

#include <cstdlib>
#include <iostream>

using namespace std;
// cout cin getch

void lee_arreglo(int arreglo[]) {
	for(int i=0; i<10; i++) {
		cout << "Inserta un numero: ";
		cin >> arreglo[i];
	}
}

void imprime_arreglo(int arreglo[]) {
	for(int i=0; i<10; i++) {
		cout << arreglo[i] << ",";
	}
}

void invierte_arreglo(int arreglo[]) {
	int temp,arreglo1[10];
	for(int i=9,j=0; i>=0,j<10; i--,j++){
		arreglo1[j]=arreglo[i];
	}
	for(int i=0; i<10; i++) {
		arreglo[i]=arreglo1[i];
	}
}

int main(){
	int arreglo[10];

	lee_arreglo(arreglo);
	cout << "Los valores del arreglo son: ";

	imprime_arreglo(arreglo);

	invierte_arreglo(arreglo);
	cout << endl;

	imprime_arreglo(arreglo);

	cout << endl;
	system("pause");
	return 0;
}
