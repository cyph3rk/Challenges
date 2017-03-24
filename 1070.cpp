#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int numero = 0;

	cin >> numero;
		
	if (numero % 2 == 0) {
		numero++;
	}
	for (int i = numero; i < (numero+12); i+=2) {
		cout << i << endl;
	}
	
	return 0;
}
