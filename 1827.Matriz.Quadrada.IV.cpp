/*
URI Online Judge - 1827 Matriz Quadrada IV

Entrada
A entrada contém vários casos de teste e termina com EOF 
(fim de arquivo. Cada caso de teste consiste de um valor 
inteiro ímpar N (5 ≤ N ≤ 101) que é o tamanho da matriz.

Saída
Para cada caso de teste, imprima a matriz correspondente 
conforme o exemplo abaixo. Após cada caso de teste, imprima uma linha em branco.
*/

#include <iostream>
#include <queue>

using namespace std;

int main() {	
	int matriz[101][101];

	queue<int> numeros;
	while (true) {
		int numero = 0;

		cin >> numero;
		if (!std::cin) {
			break;
		}
		numeros.push(numero);		
	}

	while (!numeros.empty())
	{
		int tamanho = numeros.front();
		numeros.pop();

		for (int c = 0; c < tamanho; c++)
		{
			for (int l = 0; l < tamanho; l++)
			{
				matriz[l][c] = 0;
			}
			matriz[c][c] = 2;
		}

		for (int c = tamanho - 1; c >= 0; c--)
		{
			matriz[c][(tamanho - 1) - c] = 3;
		}

		for (int c = (tamanho / 3); c < (tamanho - (tamanho / 3)); c++)
		{
			for (int l = (tamanho / 3); l < (tamanho - (tamanho / 3)); l++)
				matriz[l][c] = 1;
		}
		if (tamanho % 2) 
		{
			matriz[(tamanho / 2)][(tamanho / 2)] = 4;
		}
		

		for (int c = 0; c < tamanho; c++)
		{
			for (int l = 0; l < tamanho; l++)
			{
				cout << matriz[l][c];
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}