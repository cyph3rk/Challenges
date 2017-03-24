#include <iostream>
#include <stdio.h>
#include <queue>
#include <math.h>

using namespace std;

int main() {	
	queue<int> numeros;	
	
	while (true) {
		int A = 0, B = 0, C = 0;

		cin >> A;
		if (A == 0) {
			break;
		}
		cin >> B >> C;
		numeros.push(A);
		numeros.push(B);
		numeros.push(C);
	}

	while (!numeros.empty()) {
		int A = numeros.front();
		numeros.pop();
		int B = numeros.front();
		numeros.pop();
		int C = numeros.front();;
		numeros.pop();

		int resultado = sqrt((100 * (A * B)) / C);
		cout << resultado << endl;
	}

	return 0;
}