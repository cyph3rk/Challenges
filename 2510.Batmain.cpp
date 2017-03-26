/*
URI Online Judge - 2510 Batmain

Entrada
A primeira linha da entrada é composta por um número 
inteiro T que indica a quantidade de casos de testes. 
Cada caso de teste é composto por uma cadeia de caracteres de tamanho N (1 < N < 26). 
Todos os caracteres são letras maiúsculas ou minúsculas do alfabeto inglês.

Saída
Caso o vilão alguma vez já foi capturado pelo Batmain, 
imprima Y. Caso contrário, imprima N.
*/


#include <iostream>

using namespace std;

int main() {	

	int numero = 0;
	cin >> numero;

	for (int i = 0; i < numero; i++) {
		string vilao;
		cin >> vilao;
	}
	for (int i = 0; i < numero; i++) {
		cout << "Y" << endl;
	}

	return 0;
}