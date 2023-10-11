/*
Functions
-> unidade de bloco de código reutilizável em qualquer parte do código
Possuem nome, retorno, parâmetros e corpo.

Parâmetros formais: parâmetros definidos no header da função
Parâmetros reais: parâmetros usados na chamada da função, são os argumentos
--> parâmetros formais recebem a cópia dos parâmetros reais quando passados por valor.


O argumento ser passado por valor ou por referência, é definido na função
Por valor: uma cópia do parâmetro real é copiada para o parâmetro formal.
Por referência: o parâmetro real se torna igual ao parâmetro formal em endereço de memória. Não há cópia
*/

#include <cmath>
#include <cstdlib>  // rand
#include <iostream>
#include <vector>
#include <ctime>
#include "functions.h"
#include <iomanip>

using namespace std;

// protótipo
// diz para o compilador que a função será definida em algum lugar. Mas ele já tem uma ideia de como será
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

	srand(time(nullptr)); // aleatoriza a geração de verdade. Mais real
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

void arrayPassByValeuExercise() {
	string guests[]{ "Churros", "Shoyou", "Getulio" };
	const size_t NUMBER_OF_MEMBERS = sizeof(guests) / sizeof(string);
	printGuestList(guests, NUMBER_OF_MEMBERS);
	clearGuestList(guests, NUMBER_OF_MEMBERS);
	printGuestList(guests, NUMBER_OF_MEMBERS);
}

void arrayPassByReferenceExercise() {
	vector<string> names{ "Churros", "Shoyou", "Getulio" };
	cout << "Before function calling: " << endl;
	printGuestList(names);
	clearGuestList(names);
	cout << "\nAfter function calling: " << endl;
	printGuestList(names);
}

void addNum(int &x, const int &y) { x += y; }
void passByReference() {
	/*
	reference: forma de passar uma variável como parâmetro, sem criar uma cópia dela.
	É um alias do parâmetro real
	A variável é passada diretamente em seu endereço de memória. Portanto, ela é modificada diretamente em seu end.
	O parâmetro real se torna o mesmo que o parâmetro formal.
	Muito útil quando se passa arrays por referência, pois economiza memória e processamento 
	*/
	int num{ 5 };
	cout << "Number is now " << num << endl;
	int toAdd{ 10 };
	addNum(num, toAdd);
	cout << "After passed by reference, number is now " << num;
	return;
}

int main() {
	//string name{ "Churros" };
	//math();
	//random();
	//fn1();
	//fn2();
	//test();

	//// nesse caso, o argumento está sendo tratado, dentro da função, como uma referência.
	//// Portanto, não está sendo criada uma cópia dele. A função está manipulando o argumento em si,
	//// no seu endereço de memória
	//modifyByReference(name);

	//// nesse caso, o argumento é copiado para dentro do parâmetro formal,
	//// já que estão sendo passados por VALOR, e não por REFERÊNCIA.
	//// Portanto, a função não manipula os argumentos passados, mas sim uma cópia deles criada na memória
	//int sum = addNumbers(5, 5);
	//cout << "The sum is: " << sum;
	//cout << "\nValue changed to -> " << name;
	//exercise1();
	//cout << fixed << setprecision(2) << 125.124578 << endl;
	//double doubleSum = addNumbers(5.0, 3.5);

	//// caso não houvesse overloading para aceitar float, os floats seriam promovidos para double
	//float floatSum = addNumbers(5.0F, 3.5F); // passando o F para especificar
	//int intSum = addNumbers(5, 3);
	//cout << "The sum of doubles is " << doubleSum << endl;
	//cout << "The sum of integers is " << intSum << endl;
	//print("Hello world"); // a função exige string, mas aceita C-Style string
	//exercise2();
	//arraysToFunctions();
	//arrayPassByValeuExercise();
	//passByReference();
	arrayPassByReferenceExercise();
	return 0;
}

// implementação
// com o protótipo definido, a implementação pode ser feita em qualquer lugar
void test() {
	cout << "Making a test!" << endl;
}
