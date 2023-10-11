/*
Arquivo para implementa��o das fun��es prototipadas
*/

#include <iostream>
#include "functions.h"
#include <vector>

using namespace std;

void fn1() {
	cout << "Hello world" << endl;
}

void fn2() {
	cout << "Message from fn2()" << endl;
}

int addNumbers(int a, int b) {
	return a + b;
}

double addNumbers(double a, double b) {
	return a + b;
}

float addNumbers(float a, float b) {
	return a + b;
}

void modifyByReference(std::string &x) {
	x.assign("Changed");
}

double fahrenheit_to_celsius(double temperature) {
	return round((5.0 / 9.0) * (temperature - 32));
}

double fahrenheit_to_kelvin(double temperature) {
	return round((5.0 / 9.0) * (temperature - 32) + 273);
}

void print(string x) {
	cout << x << endl;
}

void print(const int arr[], size_t size) {
	// nesse caso, o array � constante. Ent�o n�o tem como modificar ele por aqui
	for (int pos{ 0 }; pos < size; ++pos) cout << arr[pos] << flush;
	cout << endl;
}


int findArea(int x) {
	return x * x;
}

double findArea(double x, double y) {
	return x * y;
}

// por valor
void printGuestList(const string guests[], const size_t numberOfGuests = 0) {
	for (size_t id{ 0 }; id < numberOfGuests; ++id) cout << "Guest " << id+1 << ": " << guests[id] << endl;
	cout << "----------------" << endl;
	return;
}

// por refer�ncia
void printGuestList(const vector<string> &v) {
	// auto n�o deduz tipo de refer�ncias. Warning.
	// pode dar resultados inesperados.
	for (string t : v) {
		cout << t << endl;
	}
}

// por valor
void clearGuestList(string guests[], const size_t numberOfGuests = 0) {
	for (size_t id{ 0 }; id < numberOfGuests; ++id) guests[id] = " ";
	return;
}

// por refer�ncia
void clearGuestList(vector<string> &v) { v.clear(); }