#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int senha = 0;

	cin >> senha;
	while (senha != 2002) {		
		cout << "Senha Invalida" << endl;
		cin >> senha;
	}
	cout << "Acesso Permitido" << endl;
	
	return 0;
}
