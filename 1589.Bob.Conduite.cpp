/*
URI Online Judge - 1589 Bob Conduite

Entrada
Na primeira linha teremos um inteiro T (T ≤ 10000), 
indicando o número de casos de teste.

Na única linha de cada caso teremos dois números inteiros R1 e R2, 
indicando os respectivos raios. Os inteiros serão positivos e todas 
as contas caberão em um inteiro normal de 32 bits.

Saída
Em cada caso, imprima o menor raio possível em uma única linha
*/


#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int> numeros;
	int total = 0;

	cin >> total;

	for (int i = 0; i < total; i++)
	{
		int R1, R2;
		cin >> R1 >> R2;
		numeros.push(R1);
		numeros.push(R2);
	}
	
	while (!numeros.empty()) {

		int R1 = numeros.front();
		numeros.pop();
		int R2 = numeros.front();
		numeros.pop();

		cout << R1 + R2 << endl;
	}
	
	return 0;
}