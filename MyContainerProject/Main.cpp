#include "Point2D.h"

// Show all students of group
// Show sorting student -> name, mark, age
// add new student
// edit student
// delete student
// calculate -> 1) group avg mark
//				2) best student og group
//				3) best group
//				4) best student


int main() {
	/*int n = 2;
	int a = n++ + n++ + n++ + n++;
	cout << "n = " << n << endl;
	cout << "a = " << a << endl;*/

	Point2D point1(3, 5);
	Point2D point2(4, 7);

	int n = -8;
	n = n >= 0 ? n : -n;

	cout << "Point 1: " << point1.getInfo() << endl;
	cout << "Point 2: " << point2.getInfo() << endl;


	//Point2D point3 = point1.sum(point2);
	Point2D point3 = point1 + point2;
	cout << "Sum: " << point3.getInfo() << endl;

	point3 = point1 - point2;
	cout << "Sub: " << point3.getInfo() << endl;

	int number = point1 * point2;
	cout << "Mul: " << number << endl;

	point3 = -point1;
	cout << "Unary- : " << point3.getInfo() << endl;

	point3++;
	cout << "++prefix: " << point3.getInfo() << endl;

	return 0;
}