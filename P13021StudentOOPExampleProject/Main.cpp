#include "Student.h"
#include "Group.h"
#include "SuperStudent.h"
#include "Leader.h"

void test(Student* student) {
	cout << student->getInfo() << endl << endl;
}

int main() {
//	Student student("Alex", 15, 10);
	
//	SuperStudent superSt("Alex", 15, 10, "Flyable");

	Student* st = new Student("Alex", 10, 10);
	test(st);
	st = new SuperStudent("Peter", 15, 10, "Eatable");
	test(st);
	st = new Leader("Matvey", 15, 4, "+375259876543", "matvey@kuda.tut");
	test(st);

	return 0;
}

