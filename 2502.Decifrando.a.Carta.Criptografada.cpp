/*
URI Online Judge | 2502 - Decifrando a Carta Criptografada

Entrada
A entrada contém vários casos de teste. Cada caso de teste 
começa com uma linha indicando dois números inteiros C e N, 0 < C < 21 e 0 < N < 100. 
C é o tamanho da cifra. Nas duas linhas seguintes está a cifra de tamanho C indicando quais
caracteres da primeira linha será substituído por caracteres da segunda linha, um 
caracter aparece uma única vez, na primeira ou na segunda linha.

A cifra pode conter letras de ‘A’ a ‘Z’, números de ‘0’ a ‘9’ além do espaço em branco 
e alguns símbolos de pontuação: '.' ',' ';' ':' '(' ')' '!' e '?'.
Nas próximas N linhas estão frases e sentenças criptografadas pela cifra fornecida,
que você deve decifrar. Cada linha contém no mínimo 1 e no máximo 1000 caracteres. 
São permitidos quaisquer caracteres ASCII (não extendido) imprimíveis,
neste caso não estão presentes nenhum caracter acentuado, nem mesmo 'ç'.

Saída
Para cada caso de teste da entrada seu programa deve gerar para cada linha de frase 
e sentença de entrada, uma linha com a saída decifrada, respeitando a capitalização 
da letra (letras maiúsculas são decifradas como maiúsculas e minúsculas como minúsculas
quando for possível aplicar a diferenciação, se não for possível serão decifrados como letras minúsculas).
Após cada caso de teste deve ser impressa uma linha em branco, inclusive após o último.
*/

// Problema não resolvido
// Wrong answer (10%)

#include <iostream>
#include <queue>
#include <string>
#include <ctype.h>

using namespace std;

int main() {	

	queue<string> resposta;

	while (true) {

		int C = 0, N = 0;
		cin >> C >> N;

		if (!std::cin) {
			break;
		}

		string chave_1, chave_2;
		cin >> chave_1;
		cin >> chave_2;

		string cifraCriptografada;
		queue<string> cifras;

		cin.ignore();
		for (int c = 0; c < N; c++) {
			getline(std::cin, cifraCriptografada);;
			cifras.push(cifraCriptografada);
		}

		while (!cifras.empty()) {

			cifraCriptografada = cifras.front();
			cifras.pop();

			string saida = "";
			for (int i = 0; i < cifraCriptografada.length(); i++) {
				bool achou = false;

				saida += cifraCriptografada[i];
				for (int l = 0; l < C; l++) {
					if (toupper(cifraCriptografada[i]) == chave_2[l]) {
						if (isupper(cifraCriptografada[i])) {
							saida[i] = chave_1[l];
						}
						else {
							saida[i] = tolower(chave_1[l]);
						}
						achou = true;
						break;
					}
				}
				if (!achou) {
					for (int l = 0; l < C; l++) {
						if (toupper(cifraCriptografada[i]) == chave_1[l]) {
							if (isupper(cifraCriptografada[i])) {
								saida[i] = chave_2[l];
							}
							else {
								saida[i] = tolower(chave_2[l]);
							}
							break;
						}
					}
				}
			}
			resposta.push(saida);
		}
		resposta.push(" ");
	}

	while (!resposta.empty()) {
		string aux = resposta.front();
		resposta.pop();
		cout << aux << endl;
	}
				
	system("PAUSE");
	return 0;
}