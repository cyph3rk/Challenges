#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <math.h>	

using namespace std;

int main()
{
	double X1 = 0;
	double Y1 = 0;
	
	double X2 = 0;
	double Y2 = 0;

	double distancia = 0;

	scanf("%lf%lf", &X1, &Y1);
	scanf("%lf%lf", &X2, &Y2);
	
	distancia = sqrt( ((X2-X1)*(X2-X1)) + ((Y2-Y1)*(Y2-Y1)));

	cout << setprecision(4);
	cout << std::fixed;

	cout << distancia << endl;

    return 0;
}