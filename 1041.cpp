#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	double X = 0;
	double Y = 0;

	scanf("%lf%lf", &X, &Y);

	if (X == 0 && X == Y) {
		cout << "Origem" << endl;
	}
	else if (X == 0 && Y != 0) {
		cout << "Eixo Y" << endl;
	}
	else if (X != 0 && Y == 0) {
		cout << "Eixo X" << endl;
	}
	else if (X > 0 && Y > 0) {
		cout << "Q1" << endl;
	}
	else if (X < 0 && Y >0) {
		cout << "Q2" << endl;
	}
	else if (X < 0 && Y < 0) {
		cout << "Q3" << endl;
	}
	else if (X > 0 && Y < 0) {
		cout << "Q4" << endl;
	}
			
	return 0;
}

