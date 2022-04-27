#include "Leader.h"

// default constructor of Leader
Leader::Leader():Student() {
}

// constructor of Leader with params
Leader::Leader(string name, int age, double mark, string phoneNumber, string e_mail) : 
	Student(name, age, mark) {

	this->phoneNumber = phoneNumber;
	this->e_mail = e_mail;
}

// destructor of Leader
Leader::~Leader() {
}

string Leader::getPhoneNumber() {
	return phoneNumber;
}

void Leader::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

string Leader::getEmail() {
	return e_mail;
}

void Leader::setEmail(string e_mail) {
	this->e_mail = e_mail;
}

string Leader::getInfo() {
	return Student::getInfo() 
		+ "; phoneNumber = " + phoneNumber
		+ "; e-mail = " + e_mail;
}