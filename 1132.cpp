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
			
	for (int i = A; i <= B; i++) {
		if ((i % 13) != 0) {
			soma += i;
		}
	}
		
	cout << soma << endl;
			
	return 0;
}
