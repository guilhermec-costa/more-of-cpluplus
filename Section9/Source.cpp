#include <iostream>

using namespace std;

void exercise1() {
	cout << "-----------------" << endl;
	int age{ 0 };
	cout << "Enter your age: " << flush;
	cin >> age;
	if (age >= 16) cout << "You can legally drive!" << endl;
}

void exercise2() {
	cout << "-----------------" << endl;
	int age{ 0 };
	int requiredAge{ 16 };
	cout << "Type your age: " << flush;
	cin >> age;
	if (age >= 16) {
		cout << "You can legally drive." << endl;
	} else {
		cout << "Sorry, como back in " << (requiredAge - age) << "year(s)" << endl;
	}
}

void exercise3() {
	int age{ 0 };
	int requiredAge{ 16 };
	cout << "Enter your age to see if you can drive: " << flush;
	cin >> age;
	if (age >= 16) {
		bool hasCar{ false };
		cout << "Do you have a car to drive: " << flush;
		cin >> hasCar;
		if (hasCar) { cout << "You can legally drive" << endl; }
		else { cout << "Sorry, you need to buy a car before you can drive." << endl; }
	}
	else {
		cout << "Sorry, come back in " << (requiredAge - age) << " year(s).\n"
			"And be sure you own a car when you come back." << endl;
	}
}

void exercise4() {
	int random{ 9 };
	// uma ação para múltiplos cases
	switch (random) {
	case 2:
	case 4: {
		cout << "It is 2 or 4" << endl;
		break;
	}
	case 6:
	case 8: {
		cout << "It is 6 or 8 " << endl;
		break;
	}
	default: {
		cout << "It is nothing" << endl;
	}

	}
}

void exercise5() {
	enum Direction {
		left, right, up, down
	};

	Direction direction{ right };
	switch (direction) {
		case left: {
			cout << "It is on the LEFT" << endl;
			break;
		}
		case right: {
			cout << "It is on the RIGHT" << endl;
			break;
		}
		default: {
			cout << "It is at any place" << endl;
			break;
		}
	}
}

void ternary_condition() {
	// substitui uma if-else 
	bool condition = (true != false);
//  cout << (condição ? <valor se verdadeiro>:<valor se falso>) << endl;
	cout << (condition == true ? "It is true" : "It is false") << endl;
	int number{ 0 };
	cout << "Type a number: " << flush;
	cin >> number;
	
	const bool isOdd = (number % 2 == 0) ? true : false;
	cout << "Your number is a " << (isOdd ? "odd number" : "even number.") << endl;
}

void exercise6() {
	int sum{ 0 };
	for (int i{ 0 }; i < 15; i++) (i % 2 != 0 ? sum += i : sum += 0);
	cout << "The sum is equal to " << sum;
}

void rangeBasedForLoop() {
	// for(type/auto <x>: <collection>) { action };
	const string names[] = { "Guilherme", "Isabela", "Churros" };
	const int ages[] = { 19, 12, 7 };
	for (string name : names) cout << name << endl;
	cout << "---------------" << endl;
	for (auto age : ages) cout << age << endl; // auto type deducer
	cout << "---------------" << endl;
	for (auto n : { 5,10,15 }) cout << n << endl;
	cout << "---------------" << endl;
	for (auto letter : "Guilherme") cout << letter << " " << flush;
	cout << "\n---------------" << endl;
}

int main() {

	//exercise1();
	//exercise2();
	//exercise3();
	//exercise4();
	//exercise5();
	//ternary_condition();
	//exercise6();
	rangeBasedForLoop();
	return 0;
}