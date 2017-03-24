#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int testes = 0;

	int R = 0;
	int S = 0;
	int C = 0;
	
	cin >> testes;

	for (int i = 0; i < testes; i++) {	

		int quantidade = 0;
		char cobaia = '0';

		cin >> quantidade >> cobaia;
		
		switch (cobaia)
		{
			case 'R' : {
				R += quantidade;
			}break;

			case 'S' : {
				S += quantidade;
			} break;

			case 'C': {
				C += quantidade;
			}break;		
		}			
	}

	cout.precision(2);
	cout << fixed;

	cout << "Total: " << R + S + C << " cobaias" << endl;
	cout << "Total de coelhos: " << C << endl;
	cout << "Total de ratos: " << R << endl;
	cout << "Total de sapos: " << S << endl;

	cout << "Percentual de coelhos: " << (double)(C * 100) / (R + S + C) << " %" << endl;
	cout << "Percentual de ratos: " << (double)(R * 100) / (R + S + C) << " %" << endl;
	cout << "Percentual de sapos: " << (double)(S * 100) / (R + S + C) << " %" << endl;
				
	return 0;
}
