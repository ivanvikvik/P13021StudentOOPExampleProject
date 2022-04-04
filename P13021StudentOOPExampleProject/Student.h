#pragma once
#include "Header.h"

class Student {
private:
	string name;
	int age;
	double mark;

public:
	// default constructor of Student
	Student() {
		name = "no name";
		age = 15;
		mark = 4;
	}

	// constructor of Student with params
	Student(string name, int age, double mark) {
		this->name = name;
		this->age = age;
		this->mark = mark;
	}

	// destructor of Student
	~Student() {

	}
};
