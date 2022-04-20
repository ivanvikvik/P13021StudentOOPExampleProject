#include "Point2D.h"
// #, ##, ::, ., ?:

Point2D::Point2D() : x(0), y(0) { }
Point2D::Point2D(int x, int y) : x(x), y(y) { }

int Point2D::getX() const {
	return x;
}

int Point2D::getY() const {
	return y;
}

void Point2D::setX(int x) {
	this->x = x;
}

void Point2D::setY(int x) {
	this->y = y;
}

string Point2D::getInfo() {
	return "Point2D: x = " + to_string(x) 
		+ "; y = " + to_string(y);
}

Point2D Point2D::sum(Point2D point) const {
	int px = x + point.x;
	int py = y + point.y;
	return Point2D(px, py);
}

Point2D Point2D::operator +(Point2D point) const {
	int px = x + point.x;
	int py = y + point.y;
	return Point2D(px, py);
}

Point2D Point2D::operator -(Point2D point) const {
	int px = x - point.x;
	int py = y - point.y;
	return Point2D(px, py);
}

int Point2D::operator *(Point2D point) const {
	int px = x * point.x;
	int py = y * point.y;
	return px + py;
}

Point2D Point2D::operator -() const {
	return Point2D(-x, -y);
}

// ++prefix
void Point2D::operator ++() {
	++x;
	++y;
}
// postfix++
void Point2D::operator ++(int) {
	x++;
	y++;
}
