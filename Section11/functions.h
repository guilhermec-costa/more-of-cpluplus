/*
header file: arquivo onde ficam os protótipos das funções
protótipo: somente o header da função. Retorno + nome + parâmetros
*/

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

void fn1();
void fn2();
// functions overloading: mesma função, mas com PARÂMETROS DIFERENTES. Esse é o diferencial
// tipo de polimorfismo. Uma rotina que assume diferentes formas de atuação
// é problemático ter parâmetros default com function overloading. Dará erro de ambiguidade
int addNumbers(int, int);
double addNumbers(double, double);// best practice: colocar o parâmetro padrão no protótipo,
								  // não na implementação.
float addNumbers(float, float);

void modifyByReference(std::string &x);
double fahrenheit_to_celsius(double temperature);
double fahrenheit_to_kelvin(double temperature);
void print(string x);
void print(const int arr[], size_t size);
// endereço de memória do primeiro elemento do array é copiado para o parâm. formal
// os elementos do array não são copiados portanto, visto que é passado o NOME do array, que faz REFERÊNCIA
// ao endereço de memória do primeiro elemento do array. Então é preciso passar a qtd de elementos para iterar.
// portanto, a função poderá manipular diretamente o array, visto que nenhuma cópia é passada
// Isso é um exemplo de como passar por REFERÊCIA


int findArea(int x);
double findArea(double x, double y);
void printGuestList(const string guests[], const size_t numberOfGuests);
void clearGuestList(string guests[], const size_t numberOfGuests);
void printGuestList(const vector<string> &guests);
void clearGuestList(vector<string> &guests);