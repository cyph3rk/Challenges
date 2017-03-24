#include <iostream>
#include <stdio.h>

using namespace std;

#define SIM 1
#define NAO 2

int main()
{
	double notas[2] = { 0, 0 };
	int contador = 0;
	int continua = 1;

	cout.precision(2);
	cout << fixed;
			
	while (continua == SIM) {
				
		cin >> notas[contador];
		
		if ( (notas[contador] >= 0) && (notas[contador] <= 10) ) {
			contador++;
		}
		else {
			cout << "nota invalida" << endl;
		}

		if (contador == 2) {
			cout << "media = " << (notas[0] + notas[1]) / 2 << endl;
			notas[0] = 0;
			notas[1] = 0;
			contador = 0;

			continua = 0;
			while ( (continua != SIM) && (continua != NAO) ) {
				cout << "novo calculo (1-sim 2-nao)" << endl;
				cin >> continua;
			}
		}

	}	
		
	return 0;
}
