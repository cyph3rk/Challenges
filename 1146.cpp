#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main()
{
	queue<int> valores;
	int entrada = 1;
	
	while (entrada != 0) {
		cin >> entrada;
		if (entrada != 0) {
			valores.push(entrada);
		}
	}

	while (!valores.empty()) {
		int aux = valores.front();
		for (int i = 1; i <= aux; i++) {
			cout << i;
			if (i < aux) {
				cout << " ";
			}
		}
		cout << endl;
		valores.pop();
	}
	
	return 0;
}