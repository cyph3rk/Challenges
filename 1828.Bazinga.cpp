/*
URI Online Judge - 1828 Bazinga!

Entrada

A entrada consiste em uma série de casos de teste. 
A primeira linha contém um inteiro positivo T (T ≤ 100), que representa o número de 
casos de teste. Cada caso de teste é representado por uma linha da entrada, 
contendo as escolhas de Sheldon e Raj, respectivamente, separadas por 
um espaço em branco. As escolha possíveis são as personagens do jogo: 
pedra, papel, tesoura, lagarto e Spock.

Saida
Para cada caso de teste deverá ser impressa a mensagem 
"Caso #t: R", onde t é o número do caso de teste (cuja contagem se inicia no número um) 
e R é uma das três reações possíveis de Sheldon: "Bazinga!", "Raj trapaceou!", ou "De novo!".
*/

#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {	

	queue<string> resultado;
	int total = 0;

	cin >> total;

	for (int i = 1; i <= total; i++) {
		string R1, R2;
		cin >> R1 >> R2;

		if (!R2.compare(R1)) {
			string aux = "Caso #";
			aux += std::to_string(i);
			aux += ": De novo!";
			resultado.push(aux);
			
		} else if (!R1.compare("tesoura")) {
			if (!R2.compare("papel") || !R2.compare("lagarto")) {
				string aux = "Caso #";
				aux += std::to_string(i);
				aux += ": Bazinga!";
				resultado.push(aux);
			} else 	{
				string aux = "Caso #";
				aux += std::to_string(i);
				aux += ": Raj trapaceou!";
				resultado.push(aux);
			}
		} else if (!R1.compare("papel")) {
			if (!R2.compare("pedra") || !R2.compare("Spock")) {
				string aux = "Caso #";
				aux += std::to_string(i);
				aux += ": Bazinga!";
				resultado.push(aux);
			}
			else {
				string aux = "Caso #";
				aux += std::to_string(i);
				aux += ": Raj trapaceou!";
				resultado.push(aux);
			}
		} else if (!R1.compare("pedra")) {
			if (!R2.compare("lagarto") || !R2.compare("tesoura")) {
				string aux = "Caso #";
				aux += std::to_string(i);
				aux += ": Bazinga!";
				resultado.push(aux);
			}
			else {
				string aux = "Caso #";
				aux += std::to_string(i);
				aux += ": Raj trapaceou!";
				resultado.push(aux);
			}
		} else if (!R1.compare("lagarto")) {
			if (!R2.compare("Spock") || !R2.compare("papel")) {
				string aux = "Caso #";
				aux += std::to_string(i);
				aux += ": Bazinga!";
				resultado.push(aux);
			}
			else {
				string aux = "Caso #";
				aux += std::to_string(i);
				aux += ": Raj trapaceou!";
				resultado.push(aux);
			}
		} else if (!R1.compare("Spock")) {
			if (!R2.compare("tesoura") || !R2.compare("pedra")) {
				string aux = "Caso #";
				aux += std::to_string(i);
				aux += ": Bazinga!";
				resultado.push(aux);
			}
			else {
				string aux = "Caso #";
				aux += std::to_string(i);
				aux += ": Raj trapaceou!";
				resultado.push(aux);
			}
		}

	}

	while (!resultado.empty()) {
		string aux = resultado.front();
		resultado.pop();
		cout << aux << endl;
	}
	
	return 0;
}