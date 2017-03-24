#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main()
{		
	unsigned short int repeticoes = 0;
	queue<int> valores;

	cin >> repeticoes;

	for (int i = 0; i < repeticoes; i++) {
		int A;
		cin >> A;
		valores.push(A);
	}
	
	while (!valores.empty()) {
		
		int numero = valores.front();
		valores.pop();
				
		bool achouErro = false;
		for (int i = 2; i < numero; i++) {
			if (numero % i == 0) {
				achouErro = true;				
			}
		}
		if ( (achouErro) || (numero == 0) || (numero == 1) ) {
			cout << numero << " nao eh primo" << endl;
		}
		else {
			cout << numero << " eh primo" << endl;
		}
	}

	return 0;
}