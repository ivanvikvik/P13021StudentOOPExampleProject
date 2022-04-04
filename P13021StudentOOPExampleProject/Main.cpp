#include "Student.h"

int main() {
	Student st;
	Student st1;
	Student st2;

	st.setName("Alex");
	st.setAge(15);
	st.setMark(10);

	st.setAge(1000);
	st.setMark(1000);

	cout << st.getInfo() << endl;
	cout << st1.getInfo() << endl;
	cout << st2.getInfo() << endl;

	return 0;
}