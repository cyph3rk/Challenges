#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	string filo1, filo2, filo3;
						
	cin >> filo1;
	cin >> filo2;
	cin >> filo3;

	if (filo1.compare("vertebrado") == 0) {
		if (filo2.compare("ave") == 0) {
			if (filo3.compare("carnivoro") == 0) {
				cout << "aguia" << endl;
			}
			else { // Onivaro
				cout << "pomba" << endl;
			}

		}
		else { // mamifero
			if (filo3.compare("onivoro") == 0) {
				cout << "homem" << endl;
			}
			else { // Herbivoro
				cout << "vaca" << endl;
			}
		}
	}
	else { // invertebrado
		if (filo2.compare("inseto") == 0) {
			if (filo3.compare("hematofago") == 0) {
				cout << "pulga" << endl;
			}
			else { // herbivoro
				cout << "lagarta" << endl;
			}

		}
		else { // anelideo
			if (filo3.compare("hematofago") == 0) {
				cout << "sanguessuga" << endl;
			}
			else { // onivoro
				cout << "minhoca" << endl;
			}
		}
	}

	return 0;
}
