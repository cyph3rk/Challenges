#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	double salario = 0;
	double imposto = 0;

	scanf("%lf", &salario);

	if (salario > 4500.0) {
		imposto = (salario - 4500) * 0.28;
		imposto = imposto + (1500 * 0.18);
		imposto = imposto + (1000 * 0.08);
	}
	else if (salario > 3000) {
		imposto = (salario - 3000) * 0.18;		
		imposto = imposto + (1000 * 0.08);
	}
	else if (salario > 2000) {
		imposto = (salario - 2000) * 0.08;
	}
	else {
		imposto = 0;
	}

	cout.precision(2);
	cout << fixed;

    imposto == 0 ? cout << "Isento" : cout << "R$ " << imposto;

	cout << endl;	

	return 0;
}
