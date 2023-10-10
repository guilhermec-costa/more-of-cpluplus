/*
Arquivo para implementação das funções prototipadas
*/

#include <iostream>
#include "functions.h"
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

void print(int arr[], size_t size) {
	for (int pos{ 0 }; pos < size; ++pos) cout << arr[pos] << flush;
	cout << endl;
}


int findArea(int x) {
	return x * x;
}

double findArea(double x, double y) {
	return x * y;
}