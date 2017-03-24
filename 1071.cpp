#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;
	int soma = 0;

	cin >> A;
	cin >> B;

	if (A > B) {
		int aux = A;
		A = B;
		B = aux;
	}

	if (A % 2 != 0) {
		A += 2;
	}
	else {
		A++;
	}
	for (int i = A; i < B; i+=2) {
		soma += i;
	}
	cout << soma << endl;

	return 0;
}
