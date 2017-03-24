#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int valor = 0;
	
	cin >> valor;
	
	for (int i = 0; i < 10000; i++) {
		int resto = i % valor;
		if (resto == 2) {
			cout << i << endl;
		}
	}
					
	return 0;
}
