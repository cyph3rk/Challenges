#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int valor = 0;
	
	cin >> valor;
	
	for (int i = 1; i <= 10; i++) {
		cout << i << " x " << valor << " = " << i * valor << endl;		
	}
					
	return 0;
}
