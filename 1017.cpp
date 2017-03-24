#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int tempo = 0;
	int velocidade = 0;
	double litrosGastos = 0;

	cin >> tempo;
	cin >> velocidade;

	litrosGastos = (double(tempo * velocidade) / 12.0);
	
	cout << setprecision(3);
	cout << std::fixed;

	cout << litrosGastos << endl;

    return 0;
}