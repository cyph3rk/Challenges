#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int J = 60;
	int I = 1;
	while (J >= 0) {
		cout << "I=" << I << " J=" << J << endl;
		I += 3;
		J -= 5;
	}
				
	system("PAUSE");	
	return 0;
}
