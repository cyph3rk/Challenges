#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{			
	int A = 0;
	bool leuA = false;

	int N = 0;
	bool leuN = false;

	string entrada = "";
	getline(cin, entrada);

	string numero = "";

	for (int i = 0; i <= entrada.length(); i++) {
				
		if (entrada[i] != ' ') {
			numero += entrada[i];
		}
		else {
			if (!leuA) {
				A = strtol(numero.c_str(), NULL, 10);
				numero = "";
				leuA = true;
			}
			if (!leuN) {
				N = strtol(numero.c_str(), NULL, 10);
				if (N > 0) {
					numero = "";
					leuN = true;
				}
				else {
					numero = "";
				}
			}
		}
	}

	if (!leuN) {
		N = strtol(numero.c_str(), NULL, 10);	
	}

	int soma = 0;
	for (int i = 0; i < N; i++) {
		soma += (A+i);		
	}
	cout << soma << endl;
	
	return 0;
}