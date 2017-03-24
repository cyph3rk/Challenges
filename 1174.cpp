#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{		
	double X[100];
	
	for (int i = 0; i < 100; i++) {
		cin >> X[i];
	}

	cout.precision(1);
	cout << fixed;

	for (int i = 0; i < 100; i++) {
		if (X[i] <= 10) {
			cout << "A[" << i << "] = " << X[i] << endl;
		}
	}	

	return 0;
}