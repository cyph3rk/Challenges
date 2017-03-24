#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	double notas[2] = { 0, 0 };
	int contador = 0;
			
	while (contador < 2) {
				
		cin >> notas[contador];
		
		if ( (notas[contador] >= 0) && (notas[contador] <= 10) ) {
			contador++;
		}
		else {
			cout << "nota invalida" << endl;
		}
	}

	cout.precision(2);
	cout << fixed;

	cout << "media = " << (notas[0] + notas[1]) / 2 << endl;
		
	return 0;
}
