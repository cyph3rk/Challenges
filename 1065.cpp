#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int numero = 0;
	int total = 0;
			
	for (int i = 0; i < 5; i++) {
		cin >> numero;
		if (numero % 2 == 0) {			
			total++;
		}
	}

	cout.precision(1);
	cout << fixed;

	cout << total << " valores pares" << endl;
	
	return 0;
}