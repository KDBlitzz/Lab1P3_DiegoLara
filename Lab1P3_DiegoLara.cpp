#include <iostream>
using namespace std;
int main()
{
	bool menu = true;
	while (menu) {
		int opcion = 0;
		cout << "Ejercicio Práctico 1 – Viva Programar" << endl;
		cout << "Ejercicio práctico 2 – Sumatoria" << endl;
		cout << "3. Salir" << endl;
		cin >> opcion;

		switch (opcion)		{
		case 1: 
			int numIngresado;
			cout << "Numero Ingresado: "; cin >> numIngresado;
			if (numIngresado < 0){
				cout << "Favor escribir un numero mayor o igual que 0"; cin >> numIngresado;
			}
			if (numIngresado % 3 == 0){
				cout << "Salida:" << " Viva " << endl;
			} else if (numIngresado % 5 == 0) {
				cout << "Salida:" << " Programar " << endl;
			}
			
			break;
		case 2: 
			break;
		case 3:
			menu = false;
			break;
		default: cout << "Opcion Invalida" << endl;
		}
   }
}
