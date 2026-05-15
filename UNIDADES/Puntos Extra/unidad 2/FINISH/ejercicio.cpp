
#include <iostream>
using namespace std;

int main(){

	int dinero, comida, bebida, propina;

		cout << "Tiene dinero? (1 = si / 0 = no): "<<endl;
	cin >> dinero;

	if (dinero == 1)
	{
		cout << "Seleccione una comida: " << endl;
		cout << "1 = Hamburguesa" << endl;
		cout << "2 = Tacos" << endl;
		cout << "3 = Alitas" << endl;
		cout << "4 = Pizza" << endl;
		cout << "5 = Lasaña" << endl;

		cin >> comida;

		if (comida >= 1 && comida <= 5)
		{
			cout << "Desea bebida? ( 1 = si / 0 = no) : ";
			cin >> bebida;

			if (bebida == 1)
			{
				cout << "Desea dejar propina? (1 = si / 0 = no): " ;
				cin >> propina;

					if (propina == 1)
					{
						cout << "Gracias por su compra y la propina";
					}
					else
					{
						cout << "Gracias por la compra";
					}
			}
			else
			{
				cout << "Su comida viene sin bebida";
			}
		}
	}
	else
	{
		cout << "Comida invalida";
	}

	if (dinero == 0)
	{
		cout << "No puede comprar porque no tiene dinero";
	}

}


