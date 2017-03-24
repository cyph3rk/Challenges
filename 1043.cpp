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

	cout << setprecision(1);
	cout << std::fixed;

	if (  ((fabs(B-C)) < A) &&
		  (A < (B + C)) && 
		  ((fabs(A-C)) < B) &&
		  (B < (A + C)) && 
		  ((fabs(A-B)) < C) &&
		  (C < (A + B)) ) {
		cout << "Perimetro = " << (A + B + C) << endl;
	}
	else {
		cout << "Area = " << ( ((A+B)*C)/2 ) << endl;
	}
	
	return 0;
}

