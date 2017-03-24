#include <iostream>

using namespace std;

int main()
{
	double valor = 0;

	cin >> valor;

	int n100 = valor / 100;
	int resto100 = (int)valor % 100;

	int n50 = resto100 / 50;
	int resto50 = resto100 % 50;

	int n20 = resto50 / 20;
	int resto20 = resto50 % 20;

	int n10 = resto20 / 10;
	int resto10 = resto20 % 10;

	int n5 = resto10 / 5;
	int resto5 = resto10 % 5;

	int n2 = resto5 / 2;
	int resto2 = resto5 % 2;

	int n1 = resto2 / 1;
	int resto1 = resto2 % 1;
	
	double mvalor = valor - (int)valor;

	int m050 = mvalor / 0.50;
	double restom050 = (mvalor - (m050 * 0.50));
	
	int m025 = restom050 / 0.25;
	double restom025 = (restom050 - (m025 * 0.25));

	int m010 = restom025 / 0.10;
	double restom010 = (restom025 - (m010 * 0.10));

	int m005 = restom010 / 0.05;
	double restom005 = (restom010 - (m005 * 0.05));
			
	cout << "NOTAS:" << endl;
	cout << n100 << " nota(s) de R$ 100.00" << endl;
	cout << n50 << " nota(s) de R$ 50.00" << endl;
	cout << n20 << " nota(s) de R$ 20.00" << endl;
	cout << n10 << " nota(s) de R$ 10.00" << endl;
	cout << n5 << " nota(s) de R$ 5.00" << endl;
	cout << n2 << " nota(s) de R$ 2.00" << endl;
	
	cout << "MOEDAS:" << endl;
	cout << n1 << " moeda(s) de R$ 1.00" << endl;
	cout << m050 << " moeda(s) de R$ 0.50" << endl;
	cout << m025 << " moeda(s) de R$ 0.25" << endl;
	cout << m010 << " moeda(s) de R$ 0.10" << endl;
	cout << m005 << " moeda(s) de R$ 0.05" << endl;	
	cout << (restom005 / 0.01) << " moeda(s) de R$ 0.01" << endl;
	
	return 0;
}

