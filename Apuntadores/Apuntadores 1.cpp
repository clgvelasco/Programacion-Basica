#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int num=200, numero=100, *ptrApunta;
	ptrApunta=&num;
	ptrApunta=&numero;

	*ptrApunta=500;

	cout << num << endl; // 200

	*ptrApunta=num+numero;
	ptrApunta=&num;
	*ptrApunta=*ptrApunta+numero;

	cout << numero << endl; // 700
	cout << num << endl; // 900
 
	getch();
	return 0;
}