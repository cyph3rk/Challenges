#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	double A = 0;
	double B = 0;
	double C = 0;

	scanf("%lf%lf%lf", &A, &B, &C);

	double delta = (B * B) - (4 * A * C);

	if ((A != 0) && (sqrt(delta) >= 0)) {
		double X1 = (-B + sqrt(delta)) / (2 * A);
		double X2 = (-B - sqrt(delta)) / (2 * A);

		cout << setprecision(5);
		cout << std::fixed;

		cout << "R1 = " << X1 << endl;
		cout << "R2 = " << X2 << endl;
	}
	else {
		cout << "Impossivel calcular" << endl;
	}

	return 0;
}

