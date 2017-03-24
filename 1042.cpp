#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int original[3] = {0,0,0};
	int ordenado[3] = {0,0,0};
	
	scanf("%d%d%d", &original[0], &original[1], &original[2]);

	ordenado[0] = original[0];
	ordenado[1] = original[1];
	ordenado[2] = original[2];

	for (int l = 0; l < 3; l++) {
		int menor = ordenado[l];
		for (int i = 0; i < 3; i++) {
			if (menor < ordenado[i]) {
				int aux = menor;
				menor = ordenado[i];
				ordenado[i] = aux;
				ordenado[l] = menor;
			}
		}	
		
	}

	for (int i = 0; i < 3; i++) {
		cout << ordenado[i] << endl;
	}
	cout << endl;
	
	for (int i = 0; i < 3; i++) {
		cout << original[i] << endl;
	}
	
	return 0;
}

