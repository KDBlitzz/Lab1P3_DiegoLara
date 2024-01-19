#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "spanish"); // Para las tildes y/o acentos
	bool menu = true;
	while (menu) { // Inicio del menu
		// Variables utilizadas en el programa
		int opcion = 0; 
		double entrada = 0.00;
		double numerador = 0.00;
		double denominador = 0.00;
		double sumatoria = 0.00;
		int numIngresado = 0;

		// Menu 
		cout << "Ejercicio Práctico 1 – Viva Programar" << endl;
		cout << "Ejercicio práctico 2 – Sumatoria" << endl;
		cout << "3. Salir" << endl;
		cin >> opcion;

		switch (opcion)		{ // Switch case
		case 1: // Ejercicio 1
			cout << "Numero Ingresado: "; cin >> numIngresado;
			while (numIngresado < 0){ // validar que sea mayor o igual que 0
				cout << "Favor escribir un numero mayor o igual que 0\n"; cin >> numIngresado;
			}
			if (numIngresado % 3 == 0 && numIngresado % 5 == 0) { // Condicion if-else para poder validar cuando diga "Viva" "Programar" y ambos
				cout << "Salida:" << " Viva Progamar " << endl;
			} else if (numIngresado % 3 == 0){
				cout << "Salida:" << " Viva " << endl;
			} else if (numIngresado % 5 == 0) {
				cout << "Salida:" << " Programar " << endl;
			}
			else if (numIngresado % 2 == 0) {
				cout << "Salida: " << numIngresado << endl;
			}
			break;
		case 2: // Ejercicio 2 
			cout << "Entrada de datos: n =  "; cin >> entrada;
			while (entrada <= 1) // validacion para que sea un numero mayor a 1
			{
				cout << "Favor escribir un numero mayor a 1\n"; cin >> entrada;
			}
			for (double i = 1.00; i <= entrada; i++) // For que hace toda la sumatoria
			{
				numerador = 2.0*(i)-1;
				denominador = i*(i + 1);
				sumatoria += numerador / denominador; // Acumular la operacion en la sumatoria
			}
			cout << "La sumatoria desde 1 hasta " << entrada << " es: " << sumatoria << endl;
			break;
		case 3:
			menu = false;
			break;
		default: cout << "Opcion Invalida" << endl;
		}
   }
}
