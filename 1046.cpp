#include <iostream>

using namespace std;

int main()
{
	int inicio = 0;
	int fim = 0;
	int duracao = 0;
				
	scanf("%d %d", &inicio, &fim);

	if (inicio == fim) {
		duracao = 24;
	} else if (inicio < fim) {
		duracao = fim - inicio;
	} else {
		duracao = (24 - inicio) + fim;
	}

	cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
		
	return 0;
}

