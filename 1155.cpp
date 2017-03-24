#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{		
	double soma = 0;

	cout.precision(2);
	cout << fixed;

	for (int i = 1; i <= 100; i++) {
		soma += (double)(1.0 / i);
	}

	cout << soma << endl;
	

	return 0;
}