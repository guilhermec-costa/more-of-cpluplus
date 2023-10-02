/*
Variáveis: apelidos para endereços de memória
Por elas, é possível manipular endereços de memória, indiretamente.
Impossível: usar uma variável antes de declará-la.
Essencial: nunca usar uma variável antes de inicializá-la.
Inicializar: momento que a variável assume seu primeiro valor no programa.

variáveis locais: existentes apenas dentro do escopo ao qual foi criada
variáveis globais: acessíveis de qualquer parte do código
variáveis não inicializadas assumem qualquer valor inteiro que ocorrer no momento da memória
--> fonte de bug

climits: arquivo que contém constantes com os números máximos que podem ser armazenados em inteiros e floats
*/

#include <iostream>
#include <climits>
using namespace std;

int calculateRoomArea(int width, int height) {
	return width * height;
}

void sizes() {
	char a = 'a'; // 8 bits = 1 byte
	char16_t ab = 'a'; // 16 bits = 2 bytes
	char32_t abc = 'a';

	//sizeof(): retorna em bytes o tamanho ocupado por um tipo na memória
	cout << sizeof(a) << endl;
	cout << sizeof(ab) << endl;
	cout << sizeof(abc) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long long) << endl; // long long = int64_t
	cout << sizeof(short) << endl; // 16 bits = 2 bytes
}

void sizesConstants() {
	cout << UINT_MAX << endl;
	cout << pow(2, sizeof(long int) * 8) << endl;
	// 2 elevado a quantidade de bits para armazenar variável do tipo. Isso dá o valor máximo 
	// que pode ser armazenado em inteiros e floats
}

// usando literals constants
void constants() {
	// $30 per room
	cout << "How many rooms would you like to clean: " << flush;
	int numberOfRooms{ 0 };
	cin >> numberOfRooms;
	cout << "Number of rooms: " << numberOfRooms << endl;
	cout << "Price p/ room: $" << 30 << endl;
	cout << "Room cost: $" << numberOfRooms * 30 << endl;
	cout << "Tax: $" << 0.06 * 30 * numberOfRooms << endl;
	cout << "=========================" << endl;
	cout << "Total cost: $" << (numberOfRooms * 30) + (0.06 * 30 * numberOfRooms) << endl;
	cout << "This is valid for 30 days." << endl;
}

// usando defined constants
void constants2() {
	// $30 per room
	cout << "How many rooms would you like to clean: " << flush;
	const int pricePerRoom{ 30 };
	const int validDays{ 30 };
	double const taxOverTotal{ 0.06 };	

	int numberOfRooms{ 0 };
	cin >> numberOfRooms;

	double const totalCost = (pricePerRoom * numberOfRooms) * (1.0 + taxOverTotal);
	cout << "Number of rooms: " << numberOfRooms << endl;
	cout << "Price p/ room: $" << pricePerRoom << endl;
	cout << "Room cost: $" << numberOfRooms * pricePerRoom << endl;
	cout << "Tax: $" << taxOverTotal * pricePerRoom * numberOfRooms << endl;
	cout << "=========================" << endl;
	cout << "Total cost: $" << totalCost << endl;
	cout << "This is valid for " << validDays << endl;
}

void constants3() {
	cout << "Estimate for carpet cleaning service\n" << endl;

	cout << "How many small rooms do you want cleaned: " << flush;
	const double PRICE_SMALL_ROOM = 25.0;
	int smallRooms{ 0 };
	cin >> smallRooms;

	cout << "How many large rooms do you want cleaned: " << flush;
	const double PRICE_LARGE_ROOM = 35.0;
	int largeRooms{ 0 };
	cin >> largeRooms;

	cout << "Number of small rooms: " << smallRooms << endl;
	cout << "Number of large rooms: " << largeRooms << endl;

	cout << "=======================" << endl;
	cout << "Price p/ small room: $" << PRICE_SMALL_ROOM << endl;
	cout << "Price p/ large room: $" << PRICE_LARGE_ROOM << endl;

	const double COST = (smallRooms * PRICE_SMALL_ROOM) + (largeRooms * PRICE_LARGE_ROOM);
	cout << "Cost: $" << COST << endl;

	const double TAX_RATE = 0.06;
	const double TAX_RATE_OVER_COST = TAX_RATE * COST;
	cout << "Tax: $" << TAX_RATE_OVER_COST << endl;

	cout << "=======================" << endl;
	const double TOTAL_COST = COST + TAX_RATE_OVER_COST;
	cout << "Total estimate: $" << TOTAL_COST << endl;

	const int VALID_DAYS = 30;
	cout << "This estimate is valid for " << VALID_DAYS << " days." << endl;;
}

int main(int argc, char* argv[]) {
	//constants();
	//constants2();
	constants3();
	/*unsigned int x{5'000'000'00}; // forma de visualizar o inteiro
	long double y{ 10e120 };
	 essa notação de inicialização não deixa acontecer overflow

	unsigned int x1 = 5'000'000'000;  essa notação de inicialização deixa acontecer overflow
	sizes();
	cout << "---------------------" << endl;
	cout << (bool)"Hello world" << endl;
	cout << (bool)x << endl; 
	cout << "---------------------" << endl;
	cout << x << endl; 
	cout << y << endl;
	cout << "---------------------" << endl;
	cout << "Size constants" << endl;
	sizesConstants();

	 qualquer valor diferente de 0, é = a 1( ou seja, true)
	 e qualquer valor igual a 0, é = a 0(ou seja, false)

	int width; // declaração
	width = 5; // inicialização
	int height{ 10 };
	string name{ "Guilherme" }; // declaração + inicialização
	string name1 = "Guilherme"; // outra forma

	int area = calculateRoomArea(width, height);
	cout << "Room area: " << area << endl;
	cout << "---------------" << endl;
	double hourlyWage{ 23.5 };
	cout << "Your name: " << endl;
	string yourName{ "" };
	//cin >> yourName;

	cout << "Your age: " << endl;
	int yourAge{ 0 };
	//cin >> yourAge;
	cout << yourName << " " << yourAge << " " << hourlyWage << endl;*/
	return 0;
}