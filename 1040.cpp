#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
	double N1 = 0;
	double N2 = 0;
	double N3 = 0;
	double N4 = 0;
	double exame = 0;
	double mediaExame = 0;

	scanf("%lf%lf%lf%lf", &N1, &N2, &N3, &N4);

	double media = (((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10.0);
	
	if ( (media >= 5.0) && (media <= 6.9) ) {
		scanf("%lf", &exame);
	}
	
	cout << setprecision(1);
	cout << std::fixed;

	cout << "Media: " << media << endl;

	if (media >= 7) {
		cout << "Aluno aprovado." << endl;
	}
	else if (media < 5) {
		cout << "Aluno reprovado." << endl;
	}
	else {
		cout << "Aluno em exame." << endl;
		cout << "Nota do exame: " << exame << endl;
		mediaExame = ( (media + exame) / 2);
		if (mediaExame >= 5) {
			cout << "Aluno aprovado." << endl;
		}
		else {
			cout << "Aluno reprovado." << endl;
		}
		cout << "Media final: " << mediaExame << endl;
	}
		
	return 0;
}

