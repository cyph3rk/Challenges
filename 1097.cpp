#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	
	int cont = 5;
	
	for (int i=1;i<=9;i+=2) {
		cout << "I=" << i << " J=" << cont+2 << endl;
		cout << "I=" << i << " J=" << cont+1 << endl;
		cout << "I=" << i << " J=" << cont << endl;
		cont = cont + 2;
	}

	return 0;
}
