#pragma once
#include "Header.h"

class Student {
private:
	string name;
	int age;
	double mark;

public:
	// default constructor of Student
	Student();
	// constructor of Student with params
	Student(string name, int age, double mark);
	// destructor of Student
	~Student();
	// комментарии на русском языке
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	double getMark();
	void setMark(double mark);
	string getInfo();
};
