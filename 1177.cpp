#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int valor = 0;
	int N[1000];

	cin >> valor;
	
	int contador = 0;
	for (int i = 0; i < 1000; i++) {
		N[i] = contador;
		contador++;
		if (contador >= valor) {
			contador = 0;
		}
	}
	for (int i = 0; i < 1000; i++) {
		cout << "N[" << i << "] = " << N[i] << endl;
	}
	
	return 0;
}