#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double A = 0;
	double B = 0;
	double C = 0;
	double MEDIA = 0;
		
	cin >> A;
	cin >> B;
	cin >> C;
	MEDIA = (((A * 2) + (B * 3) + (C * 5)) / 10);

	cout << setprecision(1);
	cout << std::fixed;

	cout << "MEDIA = " << MEDIA << endl;

    return 0;
}