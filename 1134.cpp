#include <iostream>
#include <stdio.h>

using namespace std;

#define ALCOOL 1
#define GASOLINA 2
#define DIESEL 3
#define FIM 4

#define SIM 1
#define NAO 0

int main()
{
	int combustivel[5] = { 0, 0, 0, 0, 0 };
	int continua = 1;

	while (continua == SIM) {
		int aux = 0;
		cin >> aux;

		switch (aux)
		{
			case ALCOOL: {
				combustivel[ALCOOL]++;
			} break;

			case GASOLINA: {
				combustivel[GASOLINA]++;
			} break;

			case DIESEL: {
				combustivel[DIESEL]++;
			} break;

			case FIM: {
				continua = NAO;
			} break;

			default:
				break;
		}
	}

	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << combustivel[ALCOOL] << endl;
	cout << "Gasolina: " << combustivel[GASOLINA] << endl;
	cout << "Diesel: " << combustivel[DIESEL] << endl;

	return 0;
}
