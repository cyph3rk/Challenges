#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	string mes[12] = { "January", "February", "March", "April", "May", "June",
					   "July", "August", "September", "October", "November", "December" };
	int numero = 0;
	
	scanf("%d", &numero);

	cout << mes[numero-1] << endl;	

	return 0;
}
