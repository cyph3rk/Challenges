#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int entrada[15];
	int par[5] = { 0, 0, 0, 0, 0 };
	int impar[5] = { 0, 0, 0, 0, 0 };
	
	for (int i = 0; i < 15; i++) {
		cin >> entrada[i];
	}

	int contPar = 0;
	int contImpar = 0;	
	for (int i = 0; i < 15; i++) {
		if (entrada[i] % 2 == 0) {
			if (contPar < 5) {
				par[contPar] = entrada[i];
				contPar++;
			}
			else {
				for (int l = 0; l < 5; l++) {
					cout << "par[" << l << "] = " << par[l] << endl;
					par[l] = 0;
				}
				contPar = 0;
				par[contPar] = entrada[i];
				contPar++;
			}
		}
		else {
			if (contImpar < 5) {
				impar[contImpar] = entrada[i];
				contImpar++;
			}
			else {
				for (int l = 0; l < 5; l++) {
					cout << "impar[" << l << "] = " << impar[l] << endl;
					impar[l] = 0;
				}
				contImpar = 0;
				impar[contImpar] = entrada[i];
				contImpar++;
			}
		}
	}

	for (int i = 0; i < contImpar; i++) {
		cout << "impar[" << i << "] = " << impar[i] << endl;
	}

	for (int i = 0; i < contPar; i++) {
		cout << "par[" << i << "] = " << par[i] << endl;
	}
		
	return 0;
}