/*
  Entrada
  A entrada contém vários casos de teste e termina com EOF. 
  Cada caso de teste consiste de uma linha contendo o número N de 
  reclamações sobre a copa encaminhadas para a presidente (0 ≤ N ≤ 100).

  Saída
  Para cada teste, a saída consiste de uma linha dizendo 
  "vai ter copa!" caso não haja reclamações para a presidente.
  Caso haja reclamações, a saída deverá dizer "vai ter duas!".
*/

#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int> numeros;

	while (true) {
		int reclamacoes;
		cin >> reclamacoes;
		if (!std::cin) {
			break;
		}
		numeros.push(reclamacoes);
	}

	while (!numeros.empty()) {

		int reclamacoes = numeros.front();
		numeros.pop();

		if (reclamacoes) {
			cout << "vai ter duas!" << endl;
		}
		else {
			cout << "vai ter copa!" << endl;
		}		
	}
	
	return 0;
}