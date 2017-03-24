#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
	int interacoes = 0;

	cin >> interacoes;

	for (int i = 1; i <= interacoes; i++) {
		cout << i << " " << i*i     << " " << i*(i*i) << endl;
		
	}

	return 0;
}