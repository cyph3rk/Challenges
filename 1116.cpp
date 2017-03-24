#include <iostream>
#include <stdio.h>
#include <queue>
#include <string>

using namespace std;

int main()
{
	int total = 0;
	queue<int> valores;
		
	cin >> total;
	for (int i = 0; i < total; i++) {
		int A = 0;
		int B = 0;		

		cin >> A >> B;

		valores.push(A);
		valores.push(B);		
	}
	
	cout.precision(1);
	cout << fixed;

	while (!valores.empty()) {
		
		int A = valores.front();
		valores.pop();
		int B = valores.front();
		valores.pop();

		if ((B == 0)) {
			cout << "divisao impossivel" << endl;
		}
		else {			
			double aux = (double)A / B;
			cout << aux << endl;
		}
	}
		
	return 0;
}
