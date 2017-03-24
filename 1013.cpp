#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int resultado = 0;
	int maior = 0;
			
	scanf("%d%d%d", &A, &B, &C);
		
	resultado = ( (A + B + (abs(A-B)) ) / 2);
	maior = ((resultado + C + (abs(resultado - C))) / 2);

	cout << maior << " eh o maior" << endl;
			
    return 0;
}