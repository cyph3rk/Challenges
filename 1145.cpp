#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int X = 0;
	int Y = 0;

	cin >> X >> Y;

	int contador = 0;
	for (int i = 1; i < Y; i++) {
		cout << i;
		contador++;
		if (contador == X) {
			cout << endl;
			contador = 0;
		}
		else {
			cout << " ";
		}
	}
	cout << Y << endl;
	
	return 0;
}