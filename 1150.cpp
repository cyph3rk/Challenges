#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{			
	int X = 0;	

	cin >> X;
	int Z = X;

	while (Z <= X) {
		cin >> Z;
	}
	
	int soma = 0;
	int contador = 0;
	while (soma <= Z) {

		soma += X+contador;
		contador++;
	}

	cout << contador << endl;
	
	return 0;
}