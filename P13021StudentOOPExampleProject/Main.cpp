#include "Student.h"
#include "Group.h"

void changeMark(Student &student) {
	srand(time(0));
	student.mark = rand() % 7 + 4;
}

int main() {
	//Group group1("10a");
	//Group group2("10b");

	//Student st1("Alex", 14, 9);
	//Student st2("Anna", 15, 10);
	//Student st3("Kirill", 15, 10);
	//Student st4("Artyom", 15, 4);
	//Student st5("Alex", 14, 9);
	Student st6("Anna", 15, 10);
		
	cout << st6.getInfo() << endl;
	changeMark(st6);
	cout << st6.getInfo() << endl;

	return 0;
}

