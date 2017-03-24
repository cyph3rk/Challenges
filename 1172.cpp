#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{		
	unsigned short int X[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	
	for (int i = 0; i < 10; i++) {
		int aux = 0;
		
		cin >>aux;

		if (aux <= 0) {
			X[i] = 1;
		}
		else {
			X[i] = aux;
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << "X[" << i << "] = " << X[i] << endl;
	}	

	return 0;
}