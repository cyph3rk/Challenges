#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double raio = 0;
	double pi = 3.14159;
	double area = 0;

	cin >> raio;
	area = double(double(raio * raio)) * pi;

	cout << setprecision(4);
	cout << std::fixed;
	
	cout << "A=" << area << endl;

    return 0;
}
