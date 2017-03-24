#include <iostream>

using namespace std;

int main()
{
	int valor = 0;
	int hora = 0;
	int minuto = 0;
	int segundo = 0;
	
	cin >> valor;

	hora = (valor / 3600);
	minuto = ((valor - (hora*3600) ) / 60);
	segundo = (valor - (((hora*60) + minuto) * 60));
		
	cout << hora << ":" << minuto << ":" << segundo << endl;
				
    return 0;
}