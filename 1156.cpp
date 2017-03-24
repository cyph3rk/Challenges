#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{		
	double soma = 1;

	cout.precision(2);
	cout << fixed;

	int contador = 2.0;
	for (int i = 3; i <= 39; i+=2) {
		soma += ((i*1.0) / contador);

		contador += contador;
	}

	cout << soma << endl;
	
	system("PAUSE");	
	return 0;
}