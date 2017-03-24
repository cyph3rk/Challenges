#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{		
	int X[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	
	cin >> X[0];

	for (int i = 1; i < 10; i++) {
		X[i] = X[i-1] + X[i - 1];
	}

	for (int i = 0; i < 10; i++) {
		cout << "N[" << i << "] = " << X[i] << endl;
	}	

	return 0;
}