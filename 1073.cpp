#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
	int valor = 0;

	cin >> valor;
	
	for (int i = 2; i <= valor; i+=2) {
		cout << i << "^2 = " << (int)pow(i, 2) << endl;
	}
	
	return 0;
}
