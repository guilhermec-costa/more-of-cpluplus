#include <iostream>
#include <vector>

using namespace std;

/*
Arrays e vectors
-> são compound types: tipos de tipos
-> coleção de elementos, com um nome definido para a coleção.	

Arrays:
-> tamanho fixo
-> elementos todos do mesmo tipo
-> Não tem exceção de out of bounds.
-> O nome do array faz referência a localização na memória do primeiro elemento do array.

Formas de inicializar:
1: int x[] = {1,2,3}; tamanho indefinido + inicialização
2: int x[3] = {1,2,3}; tamanho definido + inicialização
3: int x[3] = {1, 2}; tamanho definido + inicialização parcial
4: int x[3]; tamanho definido + inicialização posterior
	x[0] = 1;
	x[1] = 2;
	x[2] = 3;

-> Compilador busca os elementos da esquerda para a direita, pelo operador sizeof()
-> cada elemento está alocado em uma célula de memória

Vectors:
-> container c++ STL
-> é um compound type
*/

void exercise1() {
	int arr[10];
	arr[0] = 100;
	int posLastElement = (sizeof(arr) / sizeof(int)) - 1;
	arr[posLastElement] = 1000;
	cout << "First array element: " << arr[0] << endl;
	cout << "Last array element: " << arr[posLastElement] << endl;
}

void exercise2() {
	vector<int> vec{ 10, 20, 30, 40, 50};
	vec.at(0) = 100;
	vec.back() = 1000;
	cout << "--------------------" << endl;
	cout << "First vector element: " << vec.at(0) << endl;
	cout << "Last vector element: " << vec.back() << endl;
	cout << "--------------------" << endl;
}

void sectionChallenge() {
	vector<int> vector1;
	vector<int> vector2;
	vector1.push_back(10);
	vector1.push_back(20);
	vector2.push_back(100);
	vector2.push_back(200);

	cout << "Vector 1 elements: " << endl;
	for (int n : vector1) { cout << n << " " << flush; };
	cout << "\n-----------------" << endl;
	for (int n : vector2) { cout << n << " " << flush; };
	cout << "--------------------" << endl;
	vector<vector<int>> vector2D;
	vector2D.push_back(vector1);
	vector2D.push_back(vector2);
	for (vector<int> v : vector2D) {
		for (int n : v) {
			cout << "Number: " << n << endl;;
		}
		cout << "--------------" << endl;
	}

}

int main() {
	const int days{ 365 };
	int daysArray[days];

	int intTest[5]{ 1,2,3 }; // inicialização parcial


	int scores[3];
	// tamanho definido, inicialização não necessária
	scores[0] = 0; // inicialização posterior
	scores[1] = 5;
	scores[2] = 10;

	// array constante
	// não tem como modificar os elementos
	// tamanho indefinido, mas inicialização obrigatória
	const double doubleArray[] { 1.0, 2.0, 3.0 };

	string names[3] { "x", "y", "z"};
	for (int i = 0; i < sizeof(names) / sizeof(string); i++) {
		cout << names[i] << endl; // get
		names[i] += "!"; // set
	}

	cout << "-----------------" << endl;
	for (string name : names) {
		cout << name << endl;
	}

	int ages[10]{ 0 }; // array de idades. Essa syntaxe inicializa todos os elementos como 0
	cout << names << endl;
	// mostra o endereço da memória do array. No caso, o endereço de memória do primeiro elemento dele
	cout << &names[0] << endl; // seria a mesma coisa
	cout << names[10] << endl;
	// a cada elemento, são "pulados" x bytes de memória a depender do tipo 

	// o primeiro [] indica o array mais externo

	int multiDimArray[][2][3] {
		{{1,2,3}, {1,2,3}}, {{1,2,3}, {1,2,3}}
	};

	/*
	Primeira camada: arrays infinitos
	Segunda camada: até dois arrays
	Terceira camada: até três arrays
	Quarta camada: até quatro arrays
	*/
	int multiDimArray2[][2][3][4]{
		{
			{{{}, {}, {}, {}}, {{}, {}, {}, {}}, {{}, {}, {}, {}}},
			{{{}, {}, {}, {}}, {{}, {}, {}, {}}, {{}, {}, {}, {}}}
		},


		{{}, {}},
		{{}, {}}
	};

	int multiDimArray3[][2][1]{
		{{{}}, {{}}}, {{{}}, {{}}}, {{{}}, {{}}}
	};


	cout << multiDimArray[0][1] << endl;
	cout << "-------------" << endl;
	vector<int> intVector(10); // especificar capacidade inicial. Automaticamente setados para 0 os elementos
	vector<int> intVector1 {1,2,3}; // não especificar capacidade inicial.
	vector<string> stringVector{ "a", "b", "c" }; // inicilização
	vector<double> doubleVector(10, 1.1); // capacidade inicial + inicilização de todos


	intVector1.push_back(7); // add item
	intVector1.push_back(10);
	intVector1.push_back(15);
	//doubleVector.push_back(7.73); // insere elemento no fim
	//doubleVector.push_back(9.55);
	//doubleVector.push_back(9.55);
	cout << "First element:" << intVector1.at(0) << endl;
	cout << "Pos 3 element: " << intVector1[3] << endl;
	cout << "Size: " << intVector1.size() << endl; // nro de elementos no array no momento
	intVector1.push_back(20);
	cout << "Size: " << intVector1.size() << endl;
	cout << "-----------------" << endl;
	cout << dec;
	exercise1();
	exercise2();
	cout << "-----------------" << endl;
	sectionChallenge();


	return 0;
}