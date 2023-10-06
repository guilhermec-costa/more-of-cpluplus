/*
Manipulando character e strings

funções de teste e funções de conversão
\0 ou null terminator character. É um caracter que finaliza toda string no C e C++
quando o compilador encontra esse caracter na iteração, sabe que é o fim da string
é muito importante considerar o null terminator character para qualquer string. É o ponto de parada
as funções do cstring trabalham com base no null character como limite pra qualquer coisa.
*/

#include <cctype> // funções de caracter
#include <cstring> // funções para C-Style string
#include <iostream>
#include <string> // c++ string. Header file que inclui o protótipo da classe string
using namespace std;

void charFunctions() {
	char a{ 'a' };
	char _5{ '7' };
	cout << boolalpha;
	cout << static_cast<char>(toupper(a)) << endl;
	cout << _5 << " is a digit: " << static_cast<bool>(isdigit(_5)) << endl;
	cout << "a to upper: " << static_cast<char>(toupper('a')) << endl;
	cout << "is \".\" a ponctuation? " << static_cast<bool>(ispunct('?')) << endl;
	cout << "is \"a\" upper: " << isupper('a') << endl;
	/*
	isspace
	isalpha
	isdigit
	islower
	isupper
	isprint
	ispunct
	isalnum
	toupper
	tolower
	*/
}


void cStyleString() {
	// array de chars
	// toda string (C) tem um null terminator character ( tem o caracter \0 no fim)
	// portanto, a memória alocada é a quantidade de chars + 1.
	char name[] = "Guilherme"; // Guilherme\0: length: 10
	char sister[15] = "Isabela"; // isabela\0\0: length 9
	char dog[9];// ???????
	cout << sizeof(dog) << endl;
	// dog = "Churros"; -> Erro. Seria como fazer um endereço de memória igual a outro. Não é possível isso
	strcpy_s(dog, "Churros\0"); // certo
	sister[7] = 'b';
	for (auto letter : name) cout << static_cast<char>(toupper(letter)) << flush;
	cout << endl << sister << endl;
	cout << dog << endl;
	cout << name << endl << sizeof(name) << endl;
	strcat_s(sister, "abc"); // concat
	// strlen(): conta a quantidade de caracteres até antes do null terminator. Retorna um size_t.
	// é um unsigned long, independente do OS
	cout << sister << ": Length -> " << strlen(sister) << endl;
	cout << strcmp(sister, "Isabelababc") << endl;
}

void cStyleStringPractice() {
	char firstName[35]{};
	char lastName[50]{};
	char fullName[100]{};
	//cout << "Enter your first name: ";
	//cin >> firstName; // após isso, o \0 é colocado automaticamente
	//cout << "Enter your last name: " << flush;
	//cin >> lastName;
	//cout << "Your fist name has " << strlen(firstName) << " characters." << endl;
	//cout << "Your last name has " << strlen(lastName) << " characters." << endl;
	//strcpy_s(fullName, firstName);
	//strcat_s(fullName, " ");
	//strcat_s(fullName, lastName);
	//cout << "Your fullname: " << fullName << endl;
	cout << "--------------------" << endl;
	char fullName2[100];
	char temp[100]{};
	cout << "Now, type your fullname:";

	// pega 50 caracteres digitados. Considera tabs, spaces, quebras de linha como caracter. Não como interrupt
	// bom para inputs com espaço
	cin.getline(fullName2, 150); // retorna no enter
	cout << "Your fullname is " << fullName2 << endl;
	strcpy_s(temp, fullName2);
	cout << (strcmp(temp, fullName2) == 0 ? "They are the same" : "They are not the same") << endl;
	// strcpm: caso diferente, retorna -1 para a string, que lexicalmente, vem antes da segunda string
	// e 1 para a string, que lexicalmente, vem depois da segunda string
	for (size_t i{ 0 }; i < strlen(fullName2); ++i) {
		if (isalpha(fullName2[i])) 
			fullName2[i] = toupper(fullName2[i]);
	}
	cout << "Your fullname capitalized: " << fullName2 << endl;

}

void exercise1() {
	char firstName[50]{};
	char lastName[60]{};
	char fullName[110]{};
	cout << "Type your first name: ";
	cin.getline(firstName, 50);
	cout << "Type your last name: ";
	cin.getline(lastName, 60);
	cout << "Length of the first name (" << firstName << "): " << strlen(firstName) << " letters long." << endl;
	cout << "Length of the last name (" << lastName << "): " << strlen(lastName) << " letters long." << endl;
	//strcat_s(firstName, " ");
	strcpy_s(fullName, firstName);
	strcat_s(fullName, lastName);
	cout << "Length of the whole name: " << strlen(fullName) << " letters long." << endl;
}

void cppStrings() {
	// são objetos da classe string, do namespace std, da lib STL
	// dynamic size
	// muitos overloadings de constructor
	string name1; // é inicializado automaticamente para ""
	string name2{ "Guilherme" , 5};
	string name3; name3.assign("Isabela");
	string name4{ "Edson", 0, 2 };
	string name5(5, 'X');
	string name6();
	string name7(name4);
	string name8("Churros");
	string name9("Shoyou");
	cout << "Name 4: " << name4 << endl;
	cout << "Name 3: " << name3 << endl;
	cout << "Name 5: " << name5 << endl;
	cout << "Name 7: " << name7 << endl;
	cout << "Name 8: " << name8 << endl;

	name9 = "Shoyou folgado!";
	//concatenation
	cout << "My two dogs: " << name8 + " and " + name9 << endl;
	//string sentence = "Hello" + "World"; Ilegal. "Hello" + "World" são c-style literals, não objetos string
	// não é possível atribuir a uma string a concatenção de dois literals.
	// mas de uma string com um literal é possível
	string sentence = name8 + " Augusto";
	cout << sentence << endl;
}

int main() {
	//cStyleString();
	//charFunctions();
	//cStyleStringPractice();
	//exercise1();
	cppStrings();
	return 0;
}