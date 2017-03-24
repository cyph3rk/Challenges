#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int interacoes = 0;

	cin >> interacoes;
		
	int contador = 1;
	for (int i = 1; i <= interacoes; i++) {
		cout << contador << " " << contador + 1 << " " << contador + 2 << " PUM" << endl;
		contador += 4;
	}

	return 0;
}
