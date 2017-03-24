#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int nroFunc = 0;
	int horasFunc = 0;
	double valorhoras = 0;
	double salary = 0;
	
	cin >> nroFunc;
	cin >> horasFunc;
	cin >> valorhoras;
	salary = (double)(horasFunc * valorhoras);
		
	cout << setprecision(2);
	cout << std::fixed;

	cout << "NUMBER = " << nroFunc << endl;
	cout << "SALARY = U$ " << salary << endl;

    return 0;
}