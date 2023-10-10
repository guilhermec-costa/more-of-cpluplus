/*
Functions
-> unidade de bloco de c�digo reutiliz�vel em qualquer parte do c�digo
Possuem nome, retorno, par�metros e corpo.

Par�metros formais: par�metros definidos no header da fun��o
Par�metros reais: par�metros usados na chamada da fun��o, s�o os argumentos
--> par�metros formais recebem a c�pia dos par�metros reais quando passados por valor.


O argumento ser passado por valor ou por refer�ncia, � definido na fun��o
*/

#include <cmath>
#include <cstdlib>  // rand
#include <iostream>
#include <vector>
#include <ctime>
#include "functions.h"
#include <iomanip>

using namespace std;

// prot�tipo
// diz para o compilador que a fun��o ser� definida em algum lugar. Mas ele j� tem uma ideia de como ser�
void test();

void math() {
	double number{ 0 };
	std::cout << "Type a number: " << flush;
	cin >> number;
	cout << "Square root of " << number << ": " << sqrt(number) << endl;
	cout << "Cubed root of " << number << ": " << cbrt(number) << endl;
	cout << number << " to the power of 2: " << pow(number, 2) << endl;
	cout << "The ceil of " << number << ": " << ceil(number) << endl;
	cout << "The floor of " << number << ": " << floor(number) << endl;
	cout << "Round of the number " << number << ": " << round(number) << endl;

}

void random() {
	int randomNumber{ 0 };
	size_t toGenerate{ 0 };
	vector<int> generatedNumbersInsideBounds;
	vector<int> generatedNumbersOutBounds;
	cout << "How many random numbers you want to generate: " << flush;
	cin >> toGenerate;

	int lowerBound{ 100 };
	int upperBound(20000);

	srand(time(nullptr)); // aleatoriza a gera��o de verdade. Mais real
	for (size_t n{ 0 }; n < toGenerate; ++n) {
		int tmp = rand();
		((tmp >= lowerBound && tmp <= upperBound) ? 
			generatedNumbersInsideBounds.push_back(tmp)
			:generatedNumbersOutBounds.push_back(tmp));
	}
	cout << generatedNumbersInsideBounds.size() << " are inside the bounds of " << lowerBound << " and " << upperBound << endl;
	cout << "They are: " << flush;
	for (auto n : generatedNumbersInsideBounds) cout << n << " " << flush;
	cout << "\n------------------------" << endl;
	cout << generatedNumbersOutBounds.size() << " are out of the bound" << endl;
	cout << "They are: " << flush;
	for (auto n : generatedNumbersOutBounds) cout << n << " " << flush;
	cout << "\n------------------------" << endl;
	cout << "They all could be " << RAND_MAX << " on MY SYSTEM." << endl;

	
}

void exercise1() {
	double fahrenheitTemp{ 0 };
	cout << "Type a fahrenheit temperature: " << flush;
	cin >> fahrenheitTemp;

	double inCelsius = fahrenheit_to_celsius(fahrenheitTemp);
	double inKelvins = fahrenheit_to_kelvin(fahrenheitTemp);
	cout << "In celsius: " << inCelsius << " C" << endl;
	cout << "In kelvins: " << inKelvins << " K" << endl;

}

void exercise2() {
	int _squareArea = findArea(5);
	double _rectArea = findArea(5.5, 7.5);

	cout << "Area of a square 5 x 5: " << _squareArea << endl;
	cout << "Area of a rectangle 5.5 x 7.5: " << _rectArea << endl;
}

void arraysToFunctions() {
	int arr[]{ 1,2,3,4,5 };
	const int _SIZE = sizeof(arr) / sizeof(int);
	print(arr, _SIZE);
}


int main() {
	//string name{ "Churros" };
	//math();
	//random();
	//fn1();
	//fn2();
	//test();

	//// nesse caso, o argumento est� sendo tratado, dentro da fun��o, como uma refer�ncia.
	//// Portanto, n�o est� sendo criada uma c�pia dele. A fun��o est� manipulando o argumento em si,
	//// no seu endere�o de mem�ria
	//modifyByReference(name);

	//// nesse caso, o argumento � copiado para dentro do par�metro formal,
	//// j� que est�o sendo passados por VALOR, e n�o por REFER�NCIA.
	//// Portanto, a fun��o n�o manipula os argumentos passados, mas sim uma c�pia deles criada na mem�ria
	//int sum = addNumbers(5, 5);
	//cout << "The sum is: " << sum;
	//cout << "\nValue changed to -> " << name;
	//exercise1();
	//cout << fixed << setprecision(2) << 125.124578 << endl;
	//double doubleSum = addNumbers(5.0, 3.5);

	//// caso n�o houvesse overloading para aceitar float, os floats seriam promovidos para double
	//float floatSum = addNumbers(5.0F, 3.5F); // passando o F para especificar
	//int intSum = addNumbers(5, 3);
	//cout << "The sum of doubles is " << doubleSum << endl;
	//cout << "The sum of integers is " << intSum << endl;
	//print("Hello world"); // a fun��o exige string, mas aceita C-Style string
	//exercise2();
	arraysToFunctions();
	return 0;
}

// implementa��o
// com o prot�tipo definido, a implementa��o pode ser feita em qualquer lugar
void test() {
	cout << "Making a test!" << endl;
}
