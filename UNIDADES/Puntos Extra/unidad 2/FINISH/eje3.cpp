
#include <iostream>
using namespace std;

int main() {

	int pasaporte, boleto, equipaje;

	cout << "Tiene boleto? ( 1 = si / 0 = no): ";
	cin >> boleto;

	if (boleto == 1)
	{
		cout << "Tiene pasaporte? (1 = si / 0 = no): ";
		cin >> pasaporte;

		if ( pasaporte == 1)
		{
			cout << "Su equiaje es legal? ( 1 = si / 0 = no): ";
			cin >> equipaje;

			if (equipaje == 1)
			{
				cout << "Ouede subirse al avion";
			}
			else
			{
				cout << "No puede abordar, su equipaje es prohibido ";
			}

		}
		else
		{
			cout << "No puede abordar el avion sin su pasaporte en regla";
		}
	}
	else
	{
		cout << "No puede abordar el avion si no tiene boleto";

	}
}
