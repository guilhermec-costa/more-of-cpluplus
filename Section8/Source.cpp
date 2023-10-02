/*

Expressions: operadores + operandos que fazem alguma computação
statement: uma linha completa de código. Terminam com ";". Contém expressions
--> Unary operators: operam em um único operand. -x: múltiplica por -1 o valor de x
--> Binary Operators: operam em dois operands diferentes. 5 "*" 2
-- Ternary Operators: operador de condições. Operam em 3 operands

---------------------------------------------------------
Operators:
-Assignment. =. Atribui uma expression a uma variável. Atribuição
- Arithmetic. +, -, *, /, %
- Increment/Decrement: ++, --
- relational. >, >=, <, <=, !=
- member access. x[5]

x = 5;
o valor 5 é guardado em x. Isso é um assign. O local da memória onde x está recebe o valor de 5
x deve ser assignable.
Tudo gira em torno de l-value e r-value. L-value possuem endereço na memória.
R-value são os valores que esses endereços estão associados

---------------------------------------------------------

Increment operator: incrementa 1 unidade na variáve. ++
Decrement operator: diminui 1 unidade na variável. --

x++: incrementa x em 1 após as operações anteriores
++x: incrementa x em 1 antes que as operações em x anteriores tiverem sido finalizadas
Mesma ideia para o --.

coercion = automatic conversion
-- ocorre em expressões que possuem operands de diferentes tipos.
C++ tenta converter um deles para ser igual ao tipo do outro

Higher Type vs Lower Type
Lower type pode ser convertido em higher type.
Lower type: tipo que precisa de menos memória para armazenamento se comparado com outro tipo
char vs int = 1byte vs 4bytes
lower  higher

Promotion: lower -> higher. Em operações matemáticas. Ex: 10/5.0 . De 10 vai para 10.0
Demotion: higher -> lower. Em assignment de um higher type para um lower type.
													--> Ex: int x = 10;
															x = 10.0; // lower = higher. De higher para lower

equality operator: ==
relational operator: >, >=, <, <=, !=
*/
#include <iostream>
using namespace std;

void exercise1() {
	cout << "-------------------" << endl;
	int number1{ 13 };
	int number2{ 0 };
	number1 = 5;
	number1 = number2;
	cout << "Number 1: " << number1 << endl;
	cout << "Number 2: " << number2 << endl;
	cout << "-------------------" << endl;
}

void exercise2() {
	int age{ 0 };
	cout << "Type your age: " << flush;
	cin >> age;

	bool parentalConsent{ false };
	if (age < 18 && age >= 16) {
		cout << "Do you have parental consent: " << flush;
		cin >> parentalConsent;
	}

	bool socialSecurityNumber{ false };
	cout << "Do you have a social security number: " << flush;
	cin >> socialSecurityNumber;


	bool accidents;
	cout << "Do you ever had any accidents: " << flush;
	cin >> accidents;

	if ((age >= 18 || parentalConsent) && socialSecurityNumber && !accidents) {
		cout << "You can work!" << endl;
	} else { cout << "Your can not work here." << endl; }

}


void exercise3() {
	int qtyInReal{ 0 };
	const int _100Reals{ 100 };
	const int _50Reals{ 50 };
	const int _20Reals{ 20 };
	const int _10Reals{ 10 };
	const int _5Reals{ 5 };
	int total{ 0 };
	int cents{ 0 };


	cout << "Enter a amount of reals(R$): " << flush;
	cin >> qtyInReal;
	cout << "Bills of R$100 > " << flush;


}

int main(int argc, char* argv[]) {
	const double EQUIVALENCE{ 1.06 };
	//cout << "Type any value in euros: " << flush;

	//double userEuros{ 0.0 };
	//cin >> userEuros;

	//const double CONVERSION = userEuros * EQUIVALENCE;
	//cout << "Converted to USD: " << CONVERSION << "$" << endl;
	exercise1();
	int rand{ 0 };
	cout << rand++ << endl; // exibe x(0) e depois incrementa
	// aqui rand vale 1
	cout << ++rand /* aqui rand vale 2*/ << endl; // incrementa x primeiro e depois exibe

	cout << 'a' + 15 << endl; // 'a' é convertido para inteiro. char é um lower type se comparado com int
	cout << sizeof(true) << ","<< sizeof(5) << endl;
	cout << true + 5 << endl; // = 6. Promotion: lower -> higher
	cout << false + 5 << endl; // = 5 Promotion: lower -> higher
	cout << "---------------------" << endl;
	int x = 101;
	char a = 'a';
	a = x; // Demotion. De inteiro para char
	cout << "Size of int (4) after demotion to char: " << sizeof(x) << endl;

	int y = 10;
	y = 10.0; // Demotion. De double para int
	cout << "Size of double (8) after demotion to int: " << sizeof(y) << endl;
	cout << "---------------------" << endl;
	cout << sizeof(double) << ", " << sizeof(int) << endl;
	cout << sizeof(10.0 / 5) << endl; // Promotion. De 5(int) para 5.0(double)
	cout << "---------------------" << endl;

	int totalAmount{ 100 }, totalNumber{ 8 };
	double average1{ 0.0 }, average2{0.0};
	average1 = totalAmount / totalNumber;
	cout << "Average: " << average1 << endl;
	average1 = static_cast<double>(totalAmount) / totalNumber; // static_cast é mais moderno. Usar ESSE
	average2 = (double)totalAmount / totalNumber;
	cout << "Average casted: " << average1 << endl;
	cout << "Average2 casted: " << average2 << endl;

	cout << "---------------------" << endl;
	cout << boolalpha; // mostra true e false no console, ao invés de 1 e 0
	//cout << noboolalpha;
	cout << (1 == 0) << endl;
	cout << (1 != 0) << endl;
	cout << "Logical operators" << endl;
	cout << "---------------------" << endl;
	cout << "5 and 5: " << (5 and 5) << endl;
	cout << "7 && 7: " << (5 && 5) << endl;
	cout << "10 || 7: " << (10 || 7) << endl;
	cout << "10 || 0: " << (10 || 0) << endl;
	cout << "10 && 0: " << (10 && 0) << endl;
	cout << "!10 && !0: " << (!10 && !10) << endl;
	cout << "!!5 && !!5: " << (!!5 && !!5) << endl;
	// !(not): é um unary operator. && e || são binary operators


	// short-circuit evaluation
	cout << "true && false && true: " << (true && false && true) << endl;
	/*
	O compilador logo para no segundo false, pois sabe que não tem como
	false && true ser true na segunda expressão.

	*/

	exercise2();

	return 0;
}