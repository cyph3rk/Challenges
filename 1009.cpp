#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string nome = "";
	double salario = 0;
	double totalVendas = 0;
	double comissao = 0;
	
	cin >> nome;
	cin >> salario;
	cin >> totalVendas;
	comissao = (double)((15 * totalVendas) / 100);
		
	cout << setprecision(2);
	cout << std::fixed;

	cout << "TOTAL = R$ " << double(salario + comissao) << endl;
	
    return 0;
}
