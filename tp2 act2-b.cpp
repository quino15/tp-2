#include <iostream> // Solicitar biblioteca
using namespace std;
int main() // Funcion
{
	float numero1; // Varible Numero 1
	float numero2; // Variable Numero 2
	cout << "Calculadora rara" << endl; // Presentacion
	cout << endl; // Separacion
	cout << "Ingrese el primer numero" << endl; // Pedirle al usuario el 1er numero
	cin >> numero1; // Dato guardado del numero1 en variable
	cout << endl; // Separacion
	cout << "Ahora ingrese el siguente numero" << endl; // Pedirle al usuario el 2do numero
	cin >> numero2; // Dato guardado del numero2 en variable
	cout << endl; // Separacion
	if(numero1 > numero2) // Si el numero 1 es mayor al numero 2
	{
		float suma = numero1 + numero2; // Variable de la suma
		float resta = numero1 - numero2; // Variable de la resta
		cout << "La suma entre los 2 numeros es de: " << suma << endl; // Resultado de suma en pantalla
		cout << "Su procedimiento es: " << numero1 << " + " << numero2 << " = " << suma << endl; // Procedimiento de la suma
		cout << endl; // Separacion
		cout << "La resta entre los 2 numeros es de: " << resta << endl; // Resultado de la resta en pantalla
		cout << "Su procedimiento es: " << numero1 << " - " << numero2 << " = " << resta; // Procedimiento de la resta 
	}
	else if(numero1 < numero2) // Si el numero 2 es menor al numero 2
	{
		float multiplicacion = numero1 * numero2; // Variable de la multiplicacion
		float division = numero1 / numero2; // Variable de la division
		cout << "La multiplicacion entre los 2 numeros es de: " << multiplicacion << endl; // Resultado de la multiplicacion en pantalla
		cout << "Su procedimiento es: " << numero1 << " x " << numero2 << " = " << multiplicacion << endl; // Procedimiento de la multiplicacion
		cout << endl; // Separacion
		cout << "La division entre los 2 numeros es de: " << division << endl; // Resultado de la division en pnatalla
		cout << "Su procedimiento es de: " << numero1 << " : " << numero2 << " = " << division; // Procedimiento de la division  
	}
	return 0;
}
