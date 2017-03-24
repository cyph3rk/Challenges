#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main()
{		
	int N = 0;
	queue<int> valores;

	cin >> N;
		
	for (int i = 0; i < N; i++) {
		valores.push(N - i);
	}
	
	int resultado = 1;
	while (!valores.empty()) {
		resultado *= valores.front();
		valores.pop();
	}

	cout << resultado << endl;

	return 0;
}