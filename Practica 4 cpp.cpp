#include "iostream"
#include <stdio.h>
using namespace std;
int main ()
{
	int NUM,CUA,CUB;
	cout << "Hola! Este programa 1.9 calcula el cuadrado y el cubo de un numero entero positivo" << "\n";
	cout << "Por favor ingrese el valor de numero: " << "\n";
	cin >> NUM;
	CUA=NUM*NUM;
	CUB=NUM*CUA;
	cout << "El cuadrado de "<<NUM<<" es: "<<CUA<<" y es cubo es: "<<CUB<<endl;
	return 0;
}
