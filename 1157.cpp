#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{		
	int numero = 0;

	cin >> numero;
	for (int i = 1; i <= numero; i++) {
		if (numero % i == 0)
			cout << i << endl;
	}
	
	return 0;
}