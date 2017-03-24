#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int valor = 0;
	int maior = 0;
	int posicao = 0;
		
	cin >> valor;
	maior = valor;
	posicao = 1;

	for (int i = 2; i <= 100; i++) {
		cin >> valor;		
		if (valor > maior) {
			maior = valor;
			posicao = i;
		}
	}

	cout << maior << endl;
	cout << posicao << endl;
					
	return 0;
}
