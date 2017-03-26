/*
URI Online Judge - 1789 A Corrida de Lesmas

Entrada

A entrada consiste de múltiplos casos de teste, e cada um 
consiste em duas linhas: A primeira linha contém um inteiro L (1 ≤ L ≤ 500) 
representando o número de lesmas do grupo, e a segunda linha contém L inteiros 
Vi (1 ≤ Vi ≤ 50) representando as velocidades de cada lesma do grupo.

A entrada termina com o fim do arquivo (EOF).

Saída
Para cada caso de teste, imprima uma única linha indicando o 
nível de velocidade da lesma mais veloz do grupo.
*/

#include <iostream>
#include <queue>

using namespace std;

int main() {	
	
	queue<int> numeros;

	while (true) {
		int L = 0;
		
		cin >> L;
		if (!std::cin) {
			break;
		}
		numeros.push(L);
		for (int i = 0; i < L; i++)
		{		
			int numero;
			cin >> numero;
			numeros.push(numero);
		}				
	}
		
	while (!numeros.empty())
	{
		int L = numeros.front();
		numeros.pop();
		int maior = numeros.front();
		numeros.pop();
		for (int i = 0; i < L-1; i++)
		{
			int aux = numeros.front();;
			numeros.pop();
			if (aux > maior)
			{
				maior = aux;
			}
		}	
		if (maior < 10) {
			cout << "1" << endl;
		}
		else if (maior < 20)
		{
			cout << "2" << endl;
		}
		else
		{
			cout << "3" << endl;
		}
	}
	
	return 0;
}