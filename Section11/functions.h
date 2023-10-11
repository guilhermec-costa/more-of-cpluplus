/*
header file: arquivo onde ficam os prot�tipos das fun��es
prot�tipo: somente o header da fun��o. Retorno + nome + par�metros
*/

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

void fn1();
void fn2();
// functions overloading: mesma fun��o, mas com PAR�METROS DIFERENTES. Esse � o diferencial
// tipo de polimorfismo. Uma rotina que assume diferentes formas de atua��o
// � problem�tico ter par�metros default com function overloading. Dar� erro de ambiguidade
int addNumbers(int, int);
double addNumbers(double, double);// best practice: colocar o par�metro padr�o no prot�tipo,
								  // n�o na implementa��o.
float addNumbers(float, float);

void modifyByReference(std::string &x);
double fahrenheit_to_celsius(double temperature);
double fahrenheit_to_kelvin(double temperature);
void print(string x);
void print(const int arr[], size_t size);
// endere�o de mem�ria do primeiro elemento do array � copiado para o par�m. formal
// os elementos do array n�o s�o copiados portanto, visto que � passado o NOME do array, que faz REFER�NCIA
// ao endere�o de mem�ria do primeiro elemento do array. Ent�o � preciso passar a qtd de elementos para iterar.
// portanto, a fun��o poder� manipular diretamente o array, visto que nenhuma c�pia � passada
// Isso � um exemplo de como passar por REFER�CIA


int findArea(int x);
double findArea(double x, double y);
void printGuestList(const string guests[], const size_t numberOfGuests);
void clearGuestList(string guests[], const size_t numberOfGuests);
void printGuestList(const vector<string> &guests);
void clearGuestList(vector<string> &guests);