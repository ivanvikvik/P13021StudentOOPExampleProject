#include "SuperStudent.h"

SuperStudent::SuperStudent() {
	cout << "SuperStudent default constructor" << endl;
}

SuperStudent::SuperStudent(string name, int age, double mark, string ability) {
	cout << "SuperStudent constructor with params" << endl;
}

SuperStudent::~SuperStudent() {
	cout << "SuperStudent destructor" << endl;
}