#pragma once
#include "Student.h"

class SuperStudent : public Student
{
private:
	static int count;

	string ability;

public:	
	SuperStudent();
	SuperStudent(string name, int age, double mark, string ability);
	~SuperStudent();

	static int getCount() {
		return count;
	}
		
	string getAbility();
	void setAbility(string ability);

	string getInfo();
};

