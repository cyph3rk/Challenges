#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main()
{
	int testes = 0;
	queue<double> valores;
	double A, B, C;
	
	cin >> testes;
	
	for (int i = 0; i < testes; i++) {
		scanf("%lf%lf%lf", &A, &B, &C);
		valores.push( ((A*2) + (B*3) + (C*5)) / 10);
	}

	cout.precision(1);
	cout << fixed;

	while (!valores.empty()) {
		cout << valores.front() << endl;
		valores.pop();
	}
					
	return 0;
}
