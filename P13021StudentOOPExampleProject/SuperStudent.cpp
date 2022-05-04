#include "SuperStudent.h"

SuperStudent::SuperStudent() {
	//cout << "SuperStudent default constructor" << endl;
}

SuperStudent::SuperStudent(string name, int age, double mark, string ability) :
	Student(name, age, mark)
{
	this->ability = ability;
	//cout << "SuperStudent constructor with params" << endl;
}

SuperStudent::~SuperStudent() {
	//cout << "SuperStudent destructor" << endl;
}

string SuperStudent::getInfo() {
	//cout << "GetInfo in SuperStudent class" << endl;
	return Student::getInfo() + "; ability = " + ability;
}