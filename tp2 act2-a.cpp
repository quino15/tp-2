#include <iostream> // Solicitar biblioteca
using namespace std;
int main() // Funcion
{
	float numero1; // Varible Numero 1
	cout << "Calculadora para ver que signo es el numero" << endl; // Presentacion
	cout << endl; // Separacion
	cout << "Ingrese el numero" << endl; // Pedirle al usuario el 1er numero
	cin >> numero1; // Dato guardado del numero1 en variable
	cout << endl; // Separacion
	if(numero1 > 0) // El numero es positivo, mayor a 0
	{
		cout << "El " << numero1 << " es un numero positivo"; // Resultado en pantalla
	}
	else if(numero1 < 0) // El numero 1 es negativo, menor a 0
	{
		cout << "El " << numero1 << " es un numero negativo"; // Resultado en pantalla
	}
	else if(numero1 == 0) // El numero 1 es 0 o nulo
	{
		cout << "El " << numero1 << " es nulo"; // Resultado en pantalla
	}
	return 0;
}
