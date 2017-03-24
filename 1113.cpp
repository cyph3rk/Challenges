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

	cin >> A >> B;
	while (A != B) {		
		
		if (A < B) {
			resultados.push("Crescente");
		}
		else {
			resultados.push("Decrescente");
		}
		cin >> A >> B;
	}

	while (!resultados.empty()) {
		cout << resultados.front() << endl;
		resultados.pop();
	}

	return 0;
}
