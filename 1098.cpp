#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	double cont = 5;	

	

	for (double i = 0	; i <= 2; i += 0.2) {

		if ( i == 0 || i == int(i) || i >= 1.9 ) {
			cout.precision(0);			
		}
		else {
			cout.precision(1);			
		}
		cout << fixed;

		cout << "I=" << i << " J=" << 1 + i << endl;
		cout << "I=" << i << " J=" << 2 + i << endl;
		cout << "I=" << i << " J=" << 3 + i << endl;
	}
					
	return 0;
}
