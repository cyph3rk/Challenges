/*
URI Online Judge - 1759 Ho Ho Ho

Entrada
A entrada é composta por um único inteiro N (0 < N ≤ 106)
representando quantos "Ho" serão falados por Noel.

Saída
A saída é composta por todos "Ho" que Papai Noel deve falar 
separados por um espaço. Após o último "Ho" deve ser apresentado um "!" encerrando o programa.
*/

#include <iostream>

using namespace std;

int main() {	
	int total = 0;

	cin >> total;
	for (int i = 0; i < total-1; i++)
	{
		cout << "Ho ";
	}
	cout << "Ho!" << endl;	

	return 0;
}