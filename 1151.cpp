#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{		
	int anterior = 0;
	int corrente = 1;

	int interacoes = 0;
	cin >> interacoes;
	
	cout << "0 1 ";
	for (int i = 0; i < interacoes-2; i++) {
		int novo = anterior + corrente;
		cout << novo;
		if (i < interacoes - 3) {
			cout << " ";
		}
				
		anterior = corrente;
		corrente = novo;
	}
	
	cout << endl;

	return 0;
}