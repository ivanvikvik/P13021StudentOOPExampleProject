#pragma once
#include "Student.h"

class Leader : public Student
{
private:
	static int count;

	string name;
	int age;
	double mark;

	string phoneNumber;
	string e_mail;

public:
	static const int MAX_MARK = 10;
	static const int MIN_MARK = 0;

	static const int MAX_STUDENT_AGE = 100;
	static const int MIN_STUDENT_AGE = 14;

	Leader();
	Leader(string name, int age, double mark);
	~Leader();

	static int getCount() {
		return count;
	}

	string getName();
	void setName(string name);

	int getAge();
	void setAge(int age);

	double getMark();
	void setMark(double mark);

	string getPhoneNumber();
	void setPhoneNumber(string phoneNumber);

	string getEmail();
	void setEmail(string e_mail);

	string getInfo();
};

