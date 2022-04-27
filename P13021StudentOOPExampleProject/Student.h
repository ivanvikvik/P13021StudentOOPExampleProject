#pragma once
#include "Header.h"
#include "Group.h"


//class Human {
//public:
//	Human() {
//		cout << "Human default constructor" << endl;
//	}
//	Human(string name, int age, double mark) {
//		cout << "Human constructor" << endl;
//	}
//	~Human() {
//		cout << "Human destructor" << endl;
//	}
//};

class Student {

private:
	static int count;

protected:
	string name;
	int age;
	double mark;

public:
	static const int MAX_MARK = 10;
	static const int MIN_MARK = 0;

	static const int MAX_STUDENT_AGE = 100;
	static const int MIN_STUDENT_AGE = 14;

	Student();
	Student(string name, int age, double mark);
	~Student();

	static int getCount() {
		return count;
	}

	string getName();
	void setName(string name);

	int getAge();
	void setAge(int age);

	double getMark();
	void setMark(double mark);

	string getInfo();
};
