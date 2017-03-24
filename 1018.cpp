#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int valor = 0;
	
	cin >> valor;
	
	int n100 = valor / 100;
	int resto100 = valor % 100;

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
	
	cout << setprecision(3);
	cout << std::fixed;

	cout << valor << endl;
	cout << n100 << " nota(s) de R$ 100,00" << endl;
	cout << n50 << " nota(s) de R$ 50,00" << endl;
	cout << n20 << " nota(s) de R$ 20,00" << endl;
	cout << n10 << " nota(s) de R$ 10,00" << endl;
	cout << n5 << " nota(s) de R$ 5,00" << endl;
	cout << n2 << " nota(s) de R$ 2,00" << endl;
	cout << n1 << " nota(s) de R$ 1,00" << endl;
	
    return 0;
}

