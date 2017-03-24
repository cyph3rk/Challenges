#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{		
	int idade = 0;
	int contador = 0;
	int soma = 0;

	cin >> idade;
	while (idade >= 0) {
		contador++;
		soma += idade;
		cin >> idade;
	}

	cout.precision(2);
	cout << fixed;
	cout << (double)soma / contador << endl;
	
	return 0;
}