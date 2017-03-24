#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double A = 0;
	double B = 0;
	double MEDIA = 0;

	cin >> A;
	cin >> B;
	MEDIA = ( ( (A * 3.5) + (B * 7.5) ) / 11 );

	cout << setprecision(5);
	cout << std::fixed;

	cout << "MEDIA = " << MEDIA << endl;

    return 0;
}
