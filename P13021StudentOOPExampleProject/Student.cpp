#include "Student.h"

// default constructor of Student
Student::Student() {
	name = "no name";
	age = 14;
	mark = 4;
}

// constructor of Student with params
Student::Student(string name, int age, double mark) {
	this->name = name;
	this->age = age;
	this->mark = mark;
}

// destructor of Student
Student::~Student() {

}

string Student::getName() {
	return name;
}

void Student::setName(string name) {
	this->name = name;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int age) {
	if (age >= 14 && age <= 100) {
		this->age = age;
	}
}

double Student::getMark() {
	return mark;
}

void Student::setMark(double mark) {
	if (mark >= 0 && mark <= 10) {
		this->mark = mark;
	}
}

string Student::getInfo() {
	return name + ": age = " + to_string(age) + "; mark = " + to_string(mark);
}