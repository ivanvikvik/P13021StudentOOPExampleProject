#include "Student.h"
#include "Group.h"

int main() {
	Group group1("10a");
	Group group2("10b");

	Student st1("Alex", 14, 9);
	Student st2("Anna", 15, 10);
	Student st3("Kirill", 15, 10);
	Student st4("Artyom", 15, 4);

	group1.add(st1);
	group1.add(st2);
	group1.add(st3);
	group1.add(st4);

	cout << group1.getInfo() << endl;
	
	return 0;
}