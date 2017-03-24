#include <iostream>
#include <stdio.h>
#include <queue>
#include <string>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;
	queue<string> resultados;

	string resposta = "";

	cin >> A >> B;
	while (A > 0 && B > 0) {		

		if (A > B) {
			int aux = A;
			A = B;
			B = aux;
		}

		int soma = 0;
		for (int i = A; i <= B; i++) {
			soma += i;
			resposta += std::to_string(i) + " ";
		}
		resposta += "Sum=" + std::to_string(soma);
		resultados.push(resposta);

		resposta.erase();

		cin >> A >> B;
	}

	while (!resultados.empty()) {
		cout << resultados.front() << endl;
		resultados.pop();
	}

	return 0;
}
