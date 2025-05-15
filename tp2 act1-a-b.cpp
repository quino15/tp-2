#include <iostream> // Solicitar biblioteca
using namespace std;
int main() // Funcion
{
	float numero1; // Varible Numero 1
	float numero2; // Variable Numero 2
	cout << "Este programa indica que numero es mayor entre 2 numero " << endl; // Presentacion
	cout << endl; // Separacion
	cout << "Ingrese el primer numero: " << endl; // Entrada del primer numero
	cin  >> numero1; // Datos guardado de numero
	cout << endl; // Separacion
	cout << "Ingrese el segundo numero:" << endl; // Entrada del segundo numero
	cin >> numero2; // Datos guardado de numero
	cout << endl;
	if(numero1 < numero2)
	{
		cout << "Entre los 2 numeros el mas grande es: " << numero2 << endl;
	}
	else if(numero2 < numero1)
	{
		cout << "Entre los 2 numeros el mas grande es: " << numero1 << endl;
	}
	else if(numero1 = numero2)
	{
		cout << "Ambos numeros son iguales" << endl;
	}
	return 0;
}
