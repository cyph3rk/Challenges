#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	int X = 0;
	double Y = 0;
	double total = 0;
			
	cin >> X;
	cin >> Y;	
	
	total = double(X / Y);

	cout << setprecision(3);
	cout << std::fixed;

	cout << total << " km/l" << endl;

    return 0;
}