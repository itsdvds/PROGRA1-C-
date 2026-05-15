
#include <iostream>
using namespace std;

int main() {

	int edad, condicion, experiencia;

	cout << "Ingrese su edad : " ;
	cin >> edad;

	if (edad >= 15)
	{
		cout << "Tiene buena condicion fisica? (1 = si / 0 = no): ";
		cin >> condicion;

		if (condicion == 1)
		{
			cout << "Tiene experiencia? ( 1 = si / 0 = no): ";
			cin >> experiencia;

			if (experiencia == 1)
			{
				cout << "Quedas en el equipo titular";
			}
			else
			{
				cout << "Quedas como suplente";
			}

		}
		else
		{
			cout << "No entras por mala condicion fisica";
		}
	}
	else
	{
		cout << "NO entras por ser menor a 15 años";

	}
}
