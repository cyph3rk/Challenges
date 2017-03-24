#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double A = 0;
	double B = 0;
	double C = 0;
			
	scanf("%lf%lf%lf", &A, &B, &C);
	
	cout << setprecision(3);
	cout << std::fixed;
	
	cout << "TRIANGULO: " << (A * C) / 2 << endl;
	cout << "CIRCULO: "   << (C * C) * 3.14159 << endl;
	cout << "TRAPEZIO: "  << (C * (A + B)) / 2 << endl;
	cout << "QUADRADO: "  << (B * B) << endl;
	cout << "RETANGULO: " << (A * B) << endl;
			
    return 0;
}
