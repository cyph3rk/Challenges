#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{		
	double N[20];
	
	for (int i = 0; i < 20; i++) {
		cin >> N[i];
	}
		
	for (int i = 0; i < 10; i++) {
		int aux = N[i];
		N[i] = N[19 - i];
		N[19 - i] = aux;
	}	
	for (int i = 0; i < 20; i++) {
		cout << "N[" << i << "] = " << N[i] << endl;
	}

	return 0;
}