#include <iostream>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int diferenca = 0;
		
	cin >> A;
	cin >> B;
	cin >> C;
	cin >> D;
	diferenca = ((A * B) - (C * D));
		
	cout << "DIFERENCA = " << diferenca << endl;

    return 0;
}