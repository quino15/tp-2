#include <iostream> // Solicitar biblioteca
using namespace std;
int main() // Funcion
{
	int numero1; // Varible Numero 1
	cout << "Este programa indica si el numero es par o impar " << endl; // Presentacion
	cout << endl; //v Separacion
	cout << "Ingrese el numero: " << endl; // Entrada del primer numero
	cin  >> numero1; // Datos guardado de numero
	cout << endl; // Separacion
	if(numero1 % 2 == 0) // Verifica si el resto del numero al dividir entre 2 es igual a 0
	{
		cout << "El numero " << numero1 << " es par."; // Resultado de que es par expresado en pantalla
	}
	else
	{
		cout<<"El numero es impar"; // Resultado que es impar expresado en pantalla
	}
	return 0;
}
