/*
Manipulando character e strings

funções de teste e funções de conversão
*/

#include <cctype>
#include <iostream>
using namespace std;

void charFunctions() {
	char a{ 'a' };
	char _5{ '7' };
	cout << boolalpha;
	cout << static_cast<char>(toupper(a)) << endl;
	cout << _5 << " is a digit: " << static_cast<bool>(isdigit(_5)) << endl;
	cout << "a to upper: " << static_cast<char>(toupper('a')) << endl;
	cout << "is \".\" a ponctuation? " << static_cast<bool>(ispunct('?')) << endl;
}


void cStyleString() {
	// array de chars
	// toda string (C) tem um null terminator character ( tem um caracter 0 no fim \0)
	// portanto, a memória alocada é a quantidade de chars + 1.
	char name[] = "Guilherme";
	for (auto letter : name) cout << static_cast<char>(toupper(letter)) << flush;
	cout << endl << sizeof(name) << endl; // 10
}


int main() {
	cStyleString();
	return 0;
}