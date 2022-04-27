#pragma once
#include "Student.h"

class SuperStudent : public Student
{
private:
	string ability;

public:	
	SuperStudent();
	SuperStudent(string name, int age, double mark, string ability);
	~SuperStudent();

	string getAbility();
	void setAbility(string ability);

	string getInfo();
};

