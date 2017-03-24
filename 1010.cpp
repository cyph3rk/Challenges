#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
	int codigo1 = 0;
	int totPeca1 = 0;
	double valPeca1 = 0;
	double toalPeca1 = 0;

	int codigo2 = 0;
	int totPeca2 = 0;
	double valPeca2 = 0;
	double toalPeca2 = 0;

	scanf("%d%d%lf", &codigo1, &totPeca1, &valPeca1);
	scanf("%d%d%lf", &codigo2, &totPeca2, &valPeca2);

	toalPeca1 = (double)(totPeca1 * valPeca1);
	toalPeca2 = (double)(totPeca2 * valPeca2);
		
	cout << setprecision(2);
	cout << std::fixed;

	cout << "VALOR A PAGAR: R$ " << double(toalPeca1 + toalPeca2) << endl;
		
    return 0;
}

