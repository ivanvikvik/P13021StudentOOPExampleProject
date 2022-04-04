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
		age = 14;
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

	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	int getAge() {
		return age;
	}

	void setAge(int age) {
		if (age >= 14 && age <= 100) {
			this->age = age;
		}
	}

	double getMark() {
		return mark;
	}

	void setMark(double mark) {
		if (mark >= 0 && mark <= 10) {
			this->mark = mark;
		}
	}

	string getInfo() {
		return name + ": age = " + to_string(age) + "; mark = " + to_string(mark);
	}
};
