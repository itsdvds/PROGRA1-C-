#include <iostream>
using namespace std;

int main() {

	int nota, asistencia, proyecto;

	cout << "Ingrese su nota ( 0 - 100 ): ";
	cin >> nota;

	if (nota >= 61)
	{
		cout << "Asiste regularmente a clases? (1 = si / 0 = no): ";
		cin >> asistencia;

		if (asistencia == 1)
		{
			cout << "Entrego el proyecto final? ( 1 = si / 0 = no): ";
			cin >> proyecto;

			if (proyecto == 1)
			{
				cout << "Aprobo el curso con exito";
			}
			else
			{
				cout << "Aprobo pero no entrego el proyecto";
			}

		}
		else
		{
			cout << "Reprueba por faltar mucho ";
		}
	}
	else
	{
		if (nota >= 50)
		{
			cout << "Puede ir a recuperacion";
		}
		else if (nota >= 30)
		{
			cout << "Reprobo, pero puede repetir el curso";
		}
		else
		{
			cout << "Reprobado sin optar a repetir";
		}

	}
}