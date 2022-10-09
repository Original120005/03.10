#pragma once
#include <iostream>
using namespace std;

class Animal {
	string type;
	string continent;
	string size;
	string peculiarity; 

public:
	Animal() {
		type = nullptr;
		continent = nullptr;
		size = nullptr;
		peculiarity = nullptr;
	}

	Animal(const char* t, const char* c, const char* s, const char* p) {
		type = t;
		continent = c;
		size = s;
		peculiarity = p;
	}

	void Print() {
		cout << "Type of animal = " << type << endl;
		cout << "Place of animal = " << continent << endl;
		cout << "Size of animal = " << size << endl;
		cout << "Peculiarity of animal = " << peculiarity << endl;
		cout << "\n\n";
	}

};
