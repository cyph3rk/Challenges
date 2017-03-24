#include <iostream>
#include <stdio.h>
#include <queue>
#include <string>

using namespace std;

#define SIM 1
#define NAO 2

#define PARTIDAS 0
#define INTER 1
#define GREMIO 2
#define EMPATE 3

int main()
{
	int jogos[4] = { 0, 0, 0, 0 };

	int contador = 0;
	int continua = 1;

	cout.precision(2);
	cout << fixed;
			
	while (continua == SIM) {
		int inter, gremio;
				
		cin >> inter >> gremio;
		
		if (inter == gremio) {       // Empates
			jogos[EMPATE]++;
		}
		else if (inter > gremio) {  // Inter vence
			jogos[INTER]++;
		}
		else {                      // Gremio Vence
			jogos[GREMIO]++;
		}
		
		jogos[PARTIDAS]++;
		
		continua = 0;
		while ((continua != SIM) && (continua != NAO)) {
			cout << "Novo grenal (1-sim 2-nao)" << endl;
			cin >> continua;
		}
	}	

	cout << jogos[PARTIDAS] << " grenais" << endl;
	cout << "Inter:" << jogos[INTER] << endl;
	cout << "Gremio:" << jogos[GREMIO] << endl;
	cout << "Empates:" << jogos[EMPATE] << endl;
	
	if (jogos[INTER] == jogos[GREMIO]) {
		cout << "Nao houve vencedor" << endl;
	} else if (jogos[INTER] > jogos[GREMIO]) {
		cout << "Inter venceu mais" << endl;
	}
	else {
		cout << "Gremio venceu mais" << endl;
	}
		
	return 0;
}
