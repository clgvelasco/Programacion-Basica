#include <conio.h>
#include <iostream>

using namespace std;
// cout cin getch

int main(){
	int *arreglo, dimension=0; // Declaracion de un puntero llamado arreglo
	arreglo=NULL; // arreglo apuntando a valor nulo

	cout<< "Escribe la dimension del arreglo: ";
	arreglo = new int [dimension]; // Dimensionar arreglo a peticion del usuario
	cin>> dimension;
	
	for(int x=0; x<dimension; x++){
		cout<< "Escribe un numero: "; // Rellenar el arreglo 
		cin>> arreglo[x];
	}

	for(int x=0; x<dimension; x++){
		cout<< arreglo[x] << endl; // Imprimir el arreglo
	}

getch();
return 0;
}