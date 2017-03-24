#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;

	scanf("%d%d", &A, &B);
	
	if (A < B) {
		if ((A == 0)) {
			cout << "Nao sao Multiplos" << endl;
		}
		else {
			if ((B % A) == 0) {
				cout << "Sao Multiplos" << endl;
			}
			else {
				cout << "Nao sao Multiplos" << endl;
			}
		}
	}
	else {
		if ((B == 0)) {
			cout << "Nao sao Multiplos" << endl;
		}
		else {
			if ((A % B) == 0) {
				cout << "Sao Multiplos" << endl;
			}
			else {
				cout << "Nao sao Multiplos" << endl;
			}
		}
	}

	return 0;
}

