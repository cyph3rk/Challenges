#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

#define cachorroQuente 1
#define xSalada        2
#define xBacon         3
#define torradaSimples 4
#define refrigerante   5

int main()
{
	double produto[6];
	produto[0] = 0.00;
	produto[cachorroQuente] = 4.00;
	produto[xSalada] = 4.50;
	produto[xBacon] = 5.00;
	produto[torradaSimples] = 2.00;
	produto[refrigerante] = 1.50;
	
	int codigo = 0;
	int quantidade = 0;
	double total = 0;

	scanf("%d%d", &codigo, &quantidade);

	total = produto[codigo] * quantidade;

	cout << setprecision(2);
	cout << std::fixed;

	cout << "Total: R$ " << total << endl;

	return 0;
}

