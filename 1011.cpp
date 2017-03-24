#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double raio = 0;
	double volume = 0;
	double pi = 3.14159;
		
	cin >> raio;

	volume = ( (double)(4/3.0) * pi * (raio * raio * raio) );
		
	cout << setprecision(3);
	cout << std::fixed;

	cout << "VOLUME = " << volume << endl;
		
    return 0;
}
