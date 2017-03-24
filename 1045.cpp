#include <iostream>
#include <math.h>

using namespace std;

#define A 0
#define B 1
#define C 2

int main()
{
	double lados[3] = { 0, 0, 0 };
		
	scanf("%lf %lf %lf", &lados[A], &lados[B], &lados[C]);
	
	for (int l = 0; l < 3; l++) {
		double maior = lados[l];
		for (int i = 0; i < 3; i++) {
			if (maior > lados[i]) {
				double aux = maior;
				maior = lados[i];
				lados[i] = aux;
				lados[l] = maior;
			}
		}
	}

	if (lados[A] >= (lados[B] + lados[C])) {
		cout << "NAO FORMA TRIANGULO" << endl;
	}
	else { 
		double quadradoA = pow(lados[A], 2);
		double quadradoB = pow(lados[B], 2);
		double quadradoC = pow(lados[C], 2);

		if (quadradoA == quadradoB + quadradoC) {
			cout << "TRIANGULO RETANGULO" << endl;
		}
		if (quadradoA > quadradoB + quadradoC) {
			cout << "TRIANGULO OBTUSANGULO" << endl;
		}
		if (quadradoA < quadradoB + quadradoC) {
			cout << "TRIANGULO ACUTANGULO" << endl;
		}
		if ( (lados[A] == lados[B]) && (lados[A] == lados[C]) && (lados[B] == lados[C]) ) {
			cout << "TRIANGULO EQUILATERO" << endl;
		} 
		else if ( (lados[A] == lados[B]) || (lados[A] == lados[C]) || (lados[B] == lados[C]) ) {
			cout << "TRIANGULO ISOSCELES" << endl;
		}
	}
	
	return 0;
}

