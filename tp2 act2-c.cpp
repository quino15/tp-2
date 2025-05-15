#include <iostream> // Solicitar biblioteca
using namespace std;
int main() // Funcion
{
	float numero1; // Varible Numero 1
	float numero2; // Variable Numero 2
	float numero3; // Variable Numero 3
	cout << "Este programa indica que numero es mayor y el menor entre 3 numeros " << endl; // Presentacion
	cout << endl; //v Separacion
	cout << "Ingrese el primer numero: " << endl; // Entrada del primer numero
	cin  >> numero1; // Datos guardado de numero
	cout << endl; // Separacion
	cout << "Ingrese el segundo numero:" << endl; // Entrada del segundo numero
	cin >> numero2; // Datos guardado de numero
	cout << endl; // Separacion
	cout << "Y por ultime ingrese el tercer numero: " << endl; // Entrada del tercer numero
	cin >> numero3; // Dato guardado del numero
	cout << endl; // Separacion
	if(numero1 > numero2 and numero2 > numero3)
	{
		cout << "El numero " << numero1 << " es el mayor y el numero " << numero3 << " es el menor" << endl;
	}
	else if(numero2 > numero3 and numero3 > numero1)
	{
		cout << "El numero " << numero2 << " es el mayor y el numero " << numero1 << " es el menor" << endl;
	}
	else if(numero3 > numero2 and numero2 > numero1)
	{
		cout << "El numero " << numero3 << " es el mayor y el numero " << numero1 << " es el menor" << endl;
	}
	else if(numero1 > numero3 and numero3 > numero2)
	{
		cout << "El numero " << numero1 << " es el mayor y el numero " << numero2 << " es el menor" << endl;
	}
	else if(numero2 > numero1 and numero1 > numero3)
	{
		cout << "El numero " << numero2 << " es el mayor y el numero " << numero3 << " es el menor"<< endl;
	}
	else if(numero3 > numero1 and numero3 > numero2)
	{
		cout << "El numero " << numero3 << " es el mayor y el numero " << numero2 << " es el menor"<< endl;
	}
	else if(numero1 == numero2 or numero1 == numero3)
	{
		cout << "Hay numeros repetidos, retirelos y intente de nuevo";
	}
	else if(numero2 == numero1 or numero2 == numero3)
	{
		cout << "Hay numeros repetidos, retirelos y intente de nuevo";
	}
	else if(numero3 == numero1 or numero3 == numero2)
	{
		cout << "Hay numeros repetidos, retirelos y intente de nuevo";
	}
	return 0;
}
