#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main()
{		
	unsigned short int repeticoes = 0;
	queue<double> valores;

	cin >> repeticoes;

	for (int i = 0; i < repeticoes; i++) {
		double A, B, C, D;
		cin >> A >> B >> C >> D;
		valores.push(A);
		valores.push(B);
		valores.push(C);
		valores.push(D);
	}
		
	while (!valores.empty()) {
		int PA, PB;
		double G1, G2;
		
		PA = valores.front();
		valores.pop();
		PB = valores.front();
		valores.pop();
		G1 = valores.front();
		valores.pop();
		G2 = valores.front();
		valores.pop();		
				
		bool achou = false;
		int contador = 0;

		while (!achou) {
			if (PA <= PB) {
				PA += (G1 * PA) / 100;
				PB += (G2 * PB) / 100;
				contador++;
			}
			else {
				achou = true;
			}

			if (contador > 100) {
				achou = true;
			}
		}

		if (contador <= 100) {
			cout << contador << " anos." << endl;
		}
		else {
			cout << "Mais de 1 seculo." << endl;
		}
	}
	
	return 0;
}