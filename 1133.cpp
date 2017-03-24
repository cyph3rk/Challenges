#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;

	cin >> A;
	cin >> B;

	if (A > B) {
		int aux = A;
		A = B;
		B = aux;
	}
			
	for (int i = A+1; i < B; i++) {
		int resto = (i % 5);
		if (resto == 2 || resto == 3) {
			cout << i << endl;
		}
	}

	return 0;
}
