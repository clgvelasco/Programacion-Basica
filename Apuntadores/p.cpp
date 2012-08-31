#include <iostream>
using namespace std;

int main() {

	int arreglo[10];
	int *ptrnumero=NULL;

	for(int i=0; i<10; i++) {
		arreglo[i] = i+1;
	}

	ptrnumero = arreglo;

	cout << *ptrnumero << endl;//1
	cout << arreglo[0] << endl; //1

	ptrnumero++;
	cout << *ptrnumero << endl; //2

	ptrnumero+=3;
	cout << *ptrnumero << endl; // 5

	(*ptrnumero++); // Incrementa el contenido mas no la direccion
	cout << *ptrnumero << endl; //6

	//(*(ptrnumero-1)++); /* Primero diminuye la direccion de la memoria y despues aumenta el contenido de dicho
	//espacion en la memoria */
	//cout << *ptrnumero;

cin.get();
return 0;
}